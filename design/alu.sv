`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: Self-employed
// Engineer: Chris Jimenez
// 
// Create Date: 12/12/2024
// Design Name: 
// Module Name: alu
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

module alu #(
  parameter DataWidth = 32
)(
  input  logic [DataWidth-1:0]   src1_i,
  input  logic [DataWidth-1:0]   src2_i,
  input  logic [3:0]             alu_op_i,
  output logic [DataWidth-1:0]   result_o
);

always_comb begin
  unique case (alu_op_i)
    4'b0000: result_o = 1;
    4'b0001: result_o = 1;
    4'b0010: result_o = 1;
    4'b0011: result_o = 1;
    4'b0100: result_o = 1;
    4'b0101: result_o = 1;
    4'b0110: result_o = 1;
    4'b0111: result_o = 1;
    4'b1000: result_o = 1;
    4'b1001: result_o = 1;
    4'b1010: result_o = 1;
    4'b1011: result_o = 1;
    4'b1100: result_o = 1;
    4'b1101: result_o = 1;
    4'b1110: result_o = 1;
    4'b1111: result_o = 1;
    default: result_o = '0;
  endcase
end

endmodule