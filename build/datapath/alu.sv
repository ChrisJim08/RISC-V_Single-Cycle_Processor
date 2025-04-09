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
    4'h0: result_o = src1_i             +   src2_i;
    4'h1: result_o = src1_i             -   src2_i;
    4'h2: result_o = src1_i             ^   src2_i;
    4'h3: result_o = src1_i             |   src2_i;
    4'h4: result_o = src1_i             &   src2_i;
    4'h5: result_o = src1_i             <<  src2_i;
    4'h6: result_o = src1_i             >>  src2_i;
    4'h7: result_o = $signed(src1_i)    >>> src2_i;
    4'h8: result_o = ($signed(src1_i)   <   $signed(src2_i))   ? 1 : 0;
    4'h9: result_o = ($unsigned(src1_i) <   $unsigned(src2_i)) ? 1 : 0;
    4'hA: result_o = (src1_i            ==  src2_i)            ? 1 : 0;
    4'hB: result_o = (src1_i            !=  src2_i)            ? 1 : 0;
    4'hC: result_o = ($signed(src1_i)   <   $signed(src2_i))   ? 1 : 0;
    4'hD: result_o = ($signed(src1_i)   >=  $signed(src2_i))   ? 1 : 0;
    4'hE: result_o = ($unsigned(src1_i) <   $unsigned(src2_i)) ? 1 : 0;
    4'hF: result_o = ($unsigned(src1_i) >=  $unsigned(src2_i)) ? 1 : 0;
  endcase
end

endmodule
