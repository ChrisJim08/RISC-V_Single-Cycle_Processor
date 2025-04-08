// Include Paths
+incdir+src/utils

// Lint Directives
lint.vlt

// RTL Files
src/risc_v.sv

src/datapath/alu.sv
src/datapath/imm_extension_unit.sv
src/datapath/ld_extension_unit.sv
src/datapath/mem.sv
src/datapath/regfile.sv

src/control/control_unit.sv
src/control/control_flow_unit.sv

src/utils/adder.sv
src/utils/flop_reg.sv
src/utils/mux2.sv
src/utils/mux4.sv

// Testbench
sim/tb_risc_v.sv

// Top Module
--top tb_risc_v

// Build Output
--Mdir build

// Tracing
--trace
--trace-structs

// Behavior
--timing
--assert
--x-assign unique
--x-initial unique

// Warnings & Lint
-Wall
-Wno-fatal

// Performance
-j 0
