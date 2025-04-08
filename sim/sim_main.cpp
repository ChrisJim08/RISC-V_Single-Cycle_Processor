#include "verilated.h"
#include "verilated_vcd_c.h"
#include "Vrisc_v.h"
#include <iostream>


int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);

    Vrisc_v* top = new Vrisc_v;
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;

    const char* trace_path = (argc > 1) ? argv[1] : "verilator.trace";

    top->trace(tfp, 99);
    tfp->open(trace_path);

    int periods = 0;

    while (!Verilated::gotFinish() && periods < 10) {
        top->clk_i = !top->clk_i;
        top->eval();
        tfp->dump(periods);

        periods++;
    }

    tfp->close();
    delete top;
    return 0;
}
