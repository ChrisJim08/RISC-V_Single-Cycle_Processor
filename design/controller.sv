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
  input logic [6:0] op_code_i,

  output logic wr_en_o,
  output logic branch,
  output logic alu_op_o,
  output logic alu_src_o
);

  localparam logic [6:0] I_TYPE = 7'b0010011;

  assign alu_op_o = 1;
  assign branch = ;
  
  assign alu_src_o = op_code_i == I_TYPE;



endmodule