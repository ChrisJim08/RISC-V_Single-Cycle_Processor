#!/usr/bin/python3

import argparse
import os
import shutil
from pathlib import Path
import multiprocessing as mp
from config_parser import read_config
from rars import Rars
from verilator import Verilator
from dump_compare import DumpCompare
from results import Results
from output_writer import Output_Writer

def main():
    options = parse_args()

    if os.path.exists('output/test_failures.txt'):
            os.remove('output/test_failures.txt')
    if os.path.exists('output/errors.log'):
        os.remove('output/errors.log')

    os.makedirs('output', exist_ok=True)

    config, env = read_config("risc_v")

    parrallel_run(options.files, options, config, env)

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

    for _ in range(len(asm_paths)):
        result = rqueue.get()
        ow.print(result)

    for _ in range(len(workers)):
        wqueue.put(False)

class SimWorker:
    def __init__(self, num, config, env, options):
        self.num = num
        self.container = Path(f'containers/sim_{num}')
        self.config = config
        self.env = env
        self.options = options
        self.rars = Rars(config.rars_path)
        self.verilator = Verilator(config.verilator_path, env)

    def wait_for_work(self, wqueue, rqueue):
        while True:
            program = wqueue.get()
            if program is False:
                return
            rqueue.put(self.simulate(program))

    def simulate(self, asm_path):
        asm_path = Path(asm_path)
        self.container.mkdir(parents=True, exist_ok=True)

        result = Results(asm_path)

        if self.rars.check_assemble(asm_path):
            result.rars_compile_errs = "RARS failed to assemble"
            return result

        if self.rars.run_sim(asm_path, self.container / "rars.trace"):
            result.rars_sim_errs = "RARS simulation failed"
            return result

        result.rars_pass = True
        self.rars.generate_hex(asm_path, self.container)

        top = "tb_risc_v"
        cpp_driver = "sim/sim_main.cpp"
        f_file = "verilator.f"
        binary_path = Path("build") / f"V{top}"

        if not self.options.nocompile:
            if not self.verilator.build_from_f(f_file, cpp_driver, "build"):
                result.modelsim_errs = "Verilator build failed"
                return result
            
        trace_path = self.container / "verilator.trace"
        
        sim_log = self.container / "verilator.log"
        
        msg = self.verilator.sim(binary_path,
                                trace_path=trace_path,
                                log_file=sim_log,
                                timeout=self.options.sim_timeout)
    

        result.modelsim_errs = msg
        result.modelsim_pass = msg is None

        student_trace = self.container / "verilator.trace"
        reference_trace = self.container / "rars.trace"

        compare, compare_out, inst, cycles = compare_dumps(student_trace, reference_trace, self.options.max_mismatches)
        result.compare_pass = compare
        result.compare_errs = compare_out
        result.rars_inst = inst
        result.proc_cycles = cycles

        return result

def compare_dumps(student_dump, rars_dump, mismatches):
    compare_output = []
    dc = DumpCompare(student_dump, rars_dump, mismatches, outfunc=compare_output.append)
    passed = dc.compare()
    cpi = dc.get_cpi()
    try:
        with open(student_dump.parent / "compare.txt", "w") as f:
            f.writelines(f"{line}\n" for line in compare_output)
    except:
        pass
    return passed, compare_output, int(dc.inst_num), int(dc.clk_cyc)

if __name__ == "__main__":
    main()
