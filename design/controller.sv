`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: Self-employed
// Engineer: Chris Jimenez
// 
// Create Date: 12/12/2024
// Design Name: 
// Module Name: controller
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

module controller(
  input  logic [6:0] op_code_i,
  input  logic [2:0] funct3_i,
  input  logic [6:0] funct7_i,
  output logic jal_o,
  output logic jalr_o,
  output logic branch_o,
  output logic regf_wr_en_o,
  output logic mem_r_en_o,
  output logic mem_wr_en_o,
  output logic alu_src_o,
  output logic [3:0] alu_op_o
);

  localparam logic [6:0] R_TYPE      = 7'b0110011;
  localparam logic [6:0] I_IMM_TYPE  = 7'b0010011;
  localparam logic [6:0] I_LOAD_TYPE = 7'b0000011;
  localparam logic [6:0] S_TYPE      = 7'b0100011;
  localparam logic [6:0] B_TYPE      = 7'b1100011;
  localparam logic [6:0] J_TYPE      = 7'b1101111;
  localparam logic [6:0] I_JMP_TYPE  = 7'b1100111;

  assign jal_o        =    (op_code_i == J_TYPE);
  assign jalr_o       =    (op_code_i == I_JMP_TYPE);
  assign branch_o     =    (op_code_i == B_TYPE);

  assign mem_r_en_o   =    (op_code_i == I_LOAD_TYPE);
  assign mem_wr_en_o  =    (op_code_i == S_TYPE);
  assign regf_wr_en_o =    (op_code_i != S_TYPE)
                        && (op_code_i != B_TYPE);

  assign alu_src_o    =    (op_code_i != I_IMM_TYPE)
                        || (op_code_i != I_LOAD_TYPE)
                        || (op_code_i != S_TYPE);

  assign alu_op_o = 1;

endmodule
