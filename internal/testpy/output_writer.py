"""Writes feedback from runs.

Author:
    Braedon Giblin <bgiblin@iastate.edu>
"""

from results import Results

class bcolors:
    HEADER = '\033[95m'
    OKBLUE = '\033[94m'
    OKCYAN = '\033[96m'
    OKGREEN = '\033[92m'
    WARNING = '\033[93m'
    FAIL = '\033[91m'
    ENDC = '\033[0m'
    BOLD = '\033[1m'
    UNDERLINE = '\033[4m'

PASS_TEXT = f'{bcolors.OKGREEN}pass{bcolors.ENDC}'
FAIL_TEXT = f'{bcolors.FAIL}fail{bcolors.ENDC}'


class Output_Writer():
    def __init__(self, summary=False):
        self.summary = summary
        if (summary):
            self.print_header()

    def print_header(self):
        print('')
        print(' Assembly file                |  Rars  | Verilator | Test Passed |  CPI  | Results Directory')
        print('------------------------------+--------+-----------+-------------+-------+------------------')

    def print(self, result):
        rars = PASS_TEXT if result.rars_pass else FAIL_TEXT
        verilator = PASS_TEXT if result.verilator_pass else FAIL_TEXT  
        # passed = PASS_TEXT if (result.rars_pass and result.modelsim_pass and result.compare_pass) else FAIL_TEXT
        passed = PASS_TEXT if result.compare_pass else FAIL_TEXT

        cpi = result.proc_cycles / result.rars_inst
        
        if self.summary:
            print(f' {str(result.asm_path)[-28:]:28} |  {rars}  |   {verilator}    |    {passed}     | {cpi:5.03} | {str(result.dest_path)}')
        else:
            print(f'Testing file: {result.asm_path}')
            print(f'RARS simulation: {rars}')
            if not result.rars_pass:
                print('RARS errors:')
                for error in result.rars_compile_errs:
                    print(error)
            print(f'Verilator simulation: {verilator}')
            if not result.verilator_pass:
                print(result.verilator_errs)
            print(f'Test Result: {passed}')
            if not result.compare_pass:
                print('\n'.join(result.compare_errs))
            else:
                print(f'RARS Instructions: {result.rars_inst}')
                print(f'Processor Cycles: {result.proc_cycles}')
                print(f'CPI: {cpi:5.3}')
            print(f'Results in: {result.dest_path}')
            print('----------------------------------------------')


