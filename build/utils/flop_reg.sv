`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: Self-employed
// Engineer: Chris Jimenez
// 
// Create Date: 12/12/2024
// Design Name: 
// Module Name: flopr
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

module flop_reg #(
  parameter DataWidth = 32
)(
  input  logic rst_i,
  input  logic clk_i,
  input  logic [DataWidth-1:0] d_i,
  output logic [DataWidth-1:0] q_o
);

always_ff @(posedge clk_i) begin
  if (rst_i) begin 
    q_o <= '0;
  end else begin
    q_o <= d_i;
  end
end

endmodule
