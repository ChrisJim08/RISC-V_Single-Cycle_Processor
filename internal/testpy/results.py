class Results:
    def __init__(self, asm_path):
        self.asm_path = asm_path

        # RARS assembly + simulation
        self.rars_pass = False
        self.rars_compile_errs = []
        self.rars_sim_errs = []

        # Verilator simulation
        self.modelsim_pass = False  # we're reusing this field for Verilator
        self.modelsim_errs = []

        # Trace comparison
        self.compare_pass = False
        self.compare_errs = []

        # Stats
        self.rars_inst = 1
        self.proc_cycles = 0
        self.dest_path = ""
