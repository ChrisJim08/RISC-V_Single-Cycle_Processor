#include "verilated.h"
#include "verilated_vcd_c.h"
#include "Vtb_risc_v.h"

int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);

    Vtb_risc_v* top = new Vtb_risc_v;

    const char* trace_path = (argc > 1) ? argv[1] : "verilator.trace";

    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open(trace_path);

    top->clk = 0;
    top->rst = 1;
    top->eval();
    tfp->dump(0);

    int cycles = 0;
    while (!Verilated::gotFinish() && cycles < 500) {
        cycles++;

        // toggle clock
        top->clk = !top->clk;
        top->eval();
        tfp->dump(cycles);

        // deassert reset after 5 cycles
        if (cycles == 10) {
            top->rst = 0;
        }
    }

    tfp->close();
    delete top;
    return 0;
}
