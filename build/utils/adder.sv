`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: Self-employed
// Engineer: Chris Jimenez
// 
// Create Date: 12/12/2024
// Design Name: 
// Module Name: adder
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

module adder #(
  parameter DataWidth = 32
)(
  input  logic [DataWidth-1:0] a_i, 
  input  logic [DataWidth-1:0] b_i,
  output logic [DataWidth-1:0] y_o);

  assign y_o = a_i + b_i;

endmodule

