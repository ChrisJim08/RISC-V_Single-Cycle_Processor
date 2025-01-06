`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: Self-employed
// Engineer: Chris Jimenez
// 
// Create Date: 12/12/2024
// Design Name: 
// Module Name: mux2
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

module mux2 #(
  parameter DataWidth = 32
) (
  input  logic sel_i,
  input  logic [DataWidth-1:0] in0_i,
  input  logic [DataWidth-1:0] in1_i,
  output logic [DataWidth-1:0] out_o
);

assign out_o = (sel_i) ? in1_i : in0_i;


endmodule