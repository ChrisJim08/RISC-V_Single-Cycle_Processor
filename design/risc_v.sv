`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: Self-employed
// Engineer: Chris Jimenez
// 
// Create Date: 12/12/2024
// Design Name: 
// Module Name: RISC_V
// Project Name: RISC-V Single-Cycle Processor
// Target Devices: 
// Tool Versions: 
// Description: 
// 
// Dependencies: 
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
//////////////////////////////////////////////////////////////////////////////////

module moduleName #(
  parameter DataWidth = 32
) (
  input  logic        clk_i,
  input  logic        rst_i, 
  output logic [31:0] wb_data_o
);

  logic [6:0] opcode;

  logic alu_src, branch;
  logic [2:0] funct3;
  logic [6:0] funct7;
  logic [1:0] alu_op;
  logic [3:0] alu_ctrl_op; 

  logic mem, mem_reg, reg_mem, reg_wr, mem_rd, mem_wr;

  logic Con_Jalr, Con_beq, Con_bnq, Con_bgt, Con_blt, Con_Jal, OpI, AUIPC, LUI;

  controller ctrl();

  alu_controller alu_ctrl();

  datapath dp();
  
endmodule