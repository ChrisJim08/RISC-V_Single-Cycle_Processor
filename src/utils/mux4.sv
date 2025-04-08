`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: Self-employed
// Engineer: Chris Jimenez
// 
// Create Date: 1/12/2024
// Design Name: 
// Module Name: mux4
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

module mux4 #(
  parameter DataWidth = 32
) (
  input  logic [1:0] sel_i,
  input  logic [DataWidth-1:0] in0_i,
  input  logic [DataWidth-1:0] in1_i,
  input  logic [DataWidth-1:0] in2_i,
  input  logic [DataWidth-1:0] in3_i,
  output logic [DataWidth-1:0] out_o
);

always_comb begin
    unique case (sel_i)
      2'b00: out_o = in0_i;
      2'b01: out_o = in1_i;
      2'b10: out_o = in2_i;
      2'b11: out_o = in3_i;
    endcase
  end

endmodule
