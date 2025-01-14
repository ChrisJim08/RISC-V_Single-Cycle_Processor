////////////////////////////////////////////////////////
// Files
definitions.svh
design/adder.sv
design/flop_reg.sv
design/regfile.sv
design/imm_decoder.sv
design/mux2.sv
design/controller.sv
//design/datapath.sv
design/instr_mem.sv
design/data_mem.sv

// TOP Module
//--top 

////////////////////////////////////////////////////////
//verilator --binary  -f verilator.f
//verilator --lint-only -f verilator.f

// dump as fst
--trace-fst
// SystemVerilog assertions
--assert
// Strict warnings
-Wall
// enable timing constructs
--timing
// Don't exit on warnings
-Wno-fatal
// Fully parallelized
-j 0
// dump structs as human-readable format
--trace-structs
// remove extra TOP module
--main-top-name "-"
// all explicit Xs are replaced by a constant value determined at runtime
--x-assign unique
// all variables are randomly initialized (if +verilator+rand+reset+2)
--x-initial unique
