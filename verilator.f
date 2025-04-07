////////////////////////////////////////////////////////
// Config Files
lint.vlt
// Design Files
design/adder.sv
design/alu.sv
design/branch_unit.sv
design/control_flow_unit.sv
design/control_unit.sv
design/flop_reg.sv
design/imm_extension_unit.sv
design/ld_extension_unit.sv
design/mem.sv
design/mux2.sv
design/mux4.sv
design/regfile.sv
//design/rs2_extension_unit.sv
design/risc_v.sv
//Header Files
risc_v.svh
// TOP Module
--top risc_v
////////////////////////////////////////////////////////
// verilator --binary  -f verilator.f
// verilator --lint-only -f verilator.f
////////////////////////////////////////////////////////
// verilator lint_off ERRORCODE
// error = line;
// verilator lint_on  ERRORCODE
////////////////////////////////////////////////////////
// Folder Name
--Mdir v
// dump as fst
--trace-fst
// trace structs
--trace-structs
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
// remove extra TOP module
//--main-top-name "-"
// all explicit Xs are replaced by a constant value determined at runtime
--x-assign unique
// all variables are randomly initialized (if +verilator+rand+reset+2)
--x-initial unique
