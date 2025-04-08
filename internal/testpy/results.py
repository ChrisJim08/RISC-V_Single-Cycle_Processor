class Results:
    asm_path = None

    rars_pass = False
    rars_compile_errs = []
    rars_sim_errs = []

    verilator_pass = False
    verilator_errs = []

    compare_pass = False
    compare_errs = []

    rars_inst = 1
    proc_cycles = 0
    dest_path = ""

    def __init__(self, asm_path):
       
        self.asm_path = asm_path
        return

        return [str(asm_path), sim_success, verilator_msg, compare, compare_out, cpi, f'output/{pathlib.Path(asm_path).name}']
