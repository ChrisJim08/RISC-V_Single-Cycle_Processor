#include "verilated.h"
#include "verilated_vcd_c.h"
#include "Vrisc_v.h"
#include <iostream>

#include <fstream>
#include <bitset>
#include <vector>
#include <string>

std::vector<uint32_t> load_hex(const std::string& filename) {
    std::vector<uint32_t> program;
    std::ifstream infile(filename);
    std::string line;
    while (std::getline(infile, line)) {
        if (!line.empty()) {
            uint32_t word = std::stoul(line, nullptr, 16); // parse hex line
            program.push_back(word);
        }
    }
    return program;
}

int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);
    Vrisc_v* top = new Vrisc_v;
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    const char* trace_path = (argc > 1) ? argv[1] : "verilator.trace";
    top->trace(tfp, 99);
    tfp->open(trace_path);

    // Load Instruction Memory
    const char* hex_path = (argc > 2) ? argv[2] : "imem.hex";
    std::vector<uint32_t> program = load_hex(hex_path);
    for (size_t i = 0; i < program.size(); ++i) {
        top->imem_ld_i = 1;
        top->imem_ld_addr_i = i;
        top->imem_ld_data_i = program[i];
        top->eval();
        top->clk_i = 1;
        top->eval();
        top->clk_i = 0;
    }
    top->imem_ld_i = 0;
    top->eval();

    // Trace time
    vluint64_t main_time = 0;

    // Reset PC and Register File
    top->clk_i = 1;
    top->rst_i = 1;
    top->eval();
    top->clk_i = 0;
    top->rst_i = 0;
    top->eval();
    tfp->dump(main_time++);


    int issued_instructions = 3;
    while (issued_instructions < (int)program.size() && !Verilated::gotFinish()) {
        // Rising edge
        top->clk_i = 1;
        top->eval();
        tfp->dump(main_time++);
    
        // You can also add trace output here if needed
    
        issued_instructions++; // Count 1 instr per rising edge
    
        // Falling edge
        top->clk_i = 0;
        top->eval();
        tfp->dump(main_time++);
    }

    tfp->close();
    delete top;
    return 0;
}

