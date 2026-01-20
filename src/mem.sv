`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: Self-employed
// Engineer: Chris Jimenez
//
// Create Date: 12/12/2024
// Design Name:
// Module Name: mem
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

module mem #(
  parameter AddressWidth = 10,
  parameter DataWidth    = 32
) (
  input logic                     clk_i,
  input logic                     wr_en_i,
  input logic  [AddressWidth-1:0] addr_i,
  input logic  [31:0]             wr_data_i,
  output logic [31:0]             r_data_o
);

  logic [DataWidth-1:0] mem [(2**AddressWidth)-1:0];

  assign r_data_o = mem[addr_i];

  always_ff @(posedge clk_i) begin
    if (wr_en_i) begin
        mem[addr_i] <= wr_data_i;
    end
  end
  
endmodule
