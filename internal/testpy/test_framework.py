#!/usr/bin/python3

import argparse
import pathlib
import os
import traceback
import shutil
import datetime
from pathlib import Path
import multiprocessing as mp
from config_parser import read_config
from rars import Rars
from verilator import Verilator
from dump_compare import DumpCompare
from results import Results
from output_writer import Output_Writer

# import logging

# logging.basicConfig(
#     level=logging.DEBUG,  # Change to INFO or WARNING to reduce verbosity
#     format='[%(levelname)s] %(message)s'
# )

def main():
    options = parse_args()

    try:
        for f in ['output/test_failures.txt', 'output/errors.log']:
            if os.path.exists(f):
                os.remove(f)
    except Exception:
        print("Close all files that are accessing output or temp directory")            

    os.makedirs('output', exist_ok=True)

    config, env = read_config("risc_v")

    missing_file = check_project_files_exist()
    if missing_file:
        print(f'\nCould not find {missing_file}')
        print('\nprogram is exiting\n')
        exit(1)

    f_file = "sim/verilator.f"
    verilator = Verilator(config.verilator_path, env)
    
    if not options.nocompile:
        if not verilator.build_from_f(f_file, "sim/sim_main.cpp", "build"):
            print("Verilator build failed")
            exit(1)
        else:
            print("All SystemVerilog src files files compiled successfully")
    else:
        print("Skipping compilation")

    parrallel_run(options.files, options, config, env)

def create_sim_containers(count):
    ''' Copies compiled work into the containers for a SimWorkerGroup to use '''
    try: 
        shutil.rmtree('containers')
    except FileNotFoundError: 
        pass

    os.mkdir('containers')

    # copy each container int work
    for i in range(count):
        base = f'containers/sim_container_{i}'
        os.mkdir(base)

def parse_args():
    parser = argparse.ArgumentParser()
    parser.add_argument('--files', nargs='+', help='Assembly programs to run', required=True)
    parser.add_argument('--config', default='DEFAULT', help='Config section name')
    parser.add_argument('--sim-timeout', type=int, default=10, help='Timeout for each simulation')
    parser.add_argument('--summary', action='store_true', help='Print summary report')
    parser.add_argument('--max-mismatches', type=int, default=3, help='Max allowed mismatches in compare')
    parser.add_argument('--jobs', type=int, default=2, help='Number of parallel jobs')
    parser.add_argument('--nocompile', action='store_true', help='Skip Verilator compilation step')
    return parser.parse_args()

def parrallel_run(asm_paths, options, config, env):
    jobs = options.jobs
    create_sim_containers(jobs)
    ow = Output_Writer(options.summary)

    workers = [SimWorker(i, config, env, options) for i in range(jobs)]

    m = mp.Manager()
    wqueue = m.Queue()
    rqueue = m.Queue()

    for program in asm_paths:
        wqueue.put(program)

    for worker in workers:
        p = mp.Process(target=worker.wait_for_work, args=(wqueue, rqueue), daemon=True)
        p.start()

    with open('output/test_failures.txt', 'w+') as fail_list:
        for _ in range(len(asm_paths)):
            next = rqueue.get()
            ow.print(next)
            if not next.compare_pass:
                fail_list.write(f'{next.asm_path}\n')

    for _ in range(len(workers)):
        wqueue.put(False)

    try: 
        shutil.rmtree('containers')
    except FileNotFoundError: 
        pass

class SimWorker:
    def __init__(self, container_num, config, env, options):
        self.num = container_num
        self.container = Path(f'containers/sim_container_{self.num}')
        self.config = config
        self.env = env
        self.options = options
        self.verilator = Verilator(config.verilator_path, env)

    def wait_for_work(self, wqueue, rqueue):
        while True:
            program = wqueue.get()
            if program is False:
                return
            rqueue.put(self.simulate(program))

    def simulate(self, asm_path):
        '''
        Simulates the given program in verilator and returns the results
        Returns success, fail_type, and compare
        '''
        
        asm_path = Path(asm_path)

        results = Results(asm_path)
        
        #self.container.mkdir(parents=True, exist_ok=True) ###########################################################################

        rars = Rars(self.config.rars_path)
        errors = rars.check_assemble(asm_path)

        if (errors):
            results.rars_compile_errs = errors
            return results # Give up if rars assemble failed


        errors = rars.run_sim(asm_path, self.container / 'rars.trace')

        if (errors):
            results.rars_sim_errs = errors
            return results # Give up if mars simulation failed

        results.rars_pass = True
        
        rars.generate_hex(asm_path, self.container)
                
        # Run verilator
        verilator_msg = self.verilator.sim(Path("build") / "Vrisc_v", 
                                           self.container / "verilator.trace", 
                                           self.container / "verilator.log", 
                                           timeout=self.options.sim_timeout,      
                                            imem_hex=self.container / "imem.hex")
        compare, compare_out, inst, cycles = compare_dumps(self.options, self.container, self.container / "verilator.trace", self.container / 'rars.trace')

        inc_num = 1
        inc_str = ""

        while True:
            results.dest_path = f'output/{pathlib.Path(asm_path).name}{inc_str}'

            try: 
                shutil.rmtree(results.dest_path)
                break
            except FileNotFoundError: 
                break
            except:
                print(f'Failed to remove output/{pathlib.Path(asm_path).name}.')
                inc_str = f'_{inc_num}'
                inc_num += 1
                print(f'Saving instead to "output/{pathlib.Path(asm_path).name}{inc_str}"') 

        shutil.copytree(self.container, results.dest_path, ignore=shutil.ignore_patterns('transcript'))

        results.verilator_pass = True if not verilator_msg else False
        results.verilator_errs = verilator_msg

        results.compare_pass = compare
        results.compare_errs = compare_out
        results.rars_inst = inst
        results.proc_cycles = cycles

        
        return results

def check_project_files_exist():
    '''
    Returns None if all required files exist, otherwise returns path to missing file
    '''
    expected_files = [
        'internal/Rars/rars1_6.jar'
    ]
    for path in expected_files:
        if not os.path.isfile(path):
            return path

    return None

def compare_dumps(options, dir, verilator_dump, rars_dump):
    '''
    Compares dumps ans prints the results to the console
    '''

    # use user mismatches if the option was specified
    mismatches = options.max_mismatches
    if not mismatches:
        mismatches = 3

    compare_output = [] # accumulator for dump output
    def compare_out_function(compare_line): # accepts each line of compare output and saves it to an array 
        compare_output.append(compare_line)

    dc = DumpCompare(verilator_dump, rars_dump, mismatches, outfunc=compare_out_function) ###############################################
    compare_passed = dc.compare()
    cpi = dc.get_cpi()

    try:
        with open(os.path.join(dir, 'compare.txt'),'w') as f:
            f.writelines((f'{x}\n' for x in compare_output)) # map each line to itself + line endings
    except:
        print('** Warning: failed to write comparison file compare.txt **')

    return compare_passed, compare_output, int(dc.inst_num), int(dc.clk_cyc)

def log_exception():
    ''' Writes the last exception thrown to the error log file'''
    
    with open('output/errors.log','a+') as f:
        f.write(f'\nException caught at {datetime.datetime.now()}:\n')
        traceback.print_exc(file=f)

if __name__ == "__main__":
    try:
        main()
    except KeyboardInterrupt: #exit gracefully since this is common
        exit(0)
    #except Exception as e:
        log_exception()
        #TODO
        print('Program exited with unexpected exception.')
        print('Please post to the Project Testing Framework discussion, and attach temp/errors.log')


