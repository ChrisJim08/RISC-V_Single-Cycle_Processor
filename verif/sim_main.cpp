#include "Vtb_risc_v.h"
#include "verilated.h"
#include "verilated_vcd_c.h"

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);

    Vtb_risc_v* top = new Vtb_risc_v;

    VerilatedVcdC* tfp = new VerilatedVcdC;
    Verilated::traceEverOn(true);
    top->trace(tfp, 99);
    tfp->open("wave.vcd");

    int cycles = 0;
    const int max_cycles = 100;

    // Init signals
    top->clk = 0;
    top->rst = 1;

    while (!Verilated::gotFinish() && cycles < max_cycles) {
        if (cycles == 5) top->rst = 0;

        // Toggle clock
        top->clk = !top->clk;
        top->eval();
        tfp->dump(cycles * 5); // each step = 5ns
        cycles++;
    }

    tfp->close();
    delete top;
    return 0;
}
