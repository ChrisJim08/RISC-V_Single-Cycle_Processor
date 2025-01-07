`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: Self-employed
// Engineer: Chris Jimenez
// 
// Create Date: 12/12/2024
// Design Name: 
// Module Name: regfile
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

module regfile #(
  parameter NumRegs      = 32,
  parameter DataWidth    = 32,
  parameter AddressWidth = 5
) (
  input  logic                    clk_i,
  input  logic                    rst_i,
  input  logic                    wr_en_i,
  input  logic [AddressWidth-1:0] wr_addr_i,
  input  logic [AddressWidth-1:0] rd1_addr_i,
  input  logic [AddressWidth-1:0] rd2_addr_i,
  input  logic [DataWidth-1:0]    wr_data_i,
  output logic [DataWidth-1:0]    rd1_data_o,
  output logic [DataWidth-1:0]    rd2_data_o
);
  integer i;

  logic [DataWidth-1:0] register_file [NumRegs-1:0];

  always_ff @(posedge clk_i) begin 
    if (rst_i) begin 
      for (i = 1; i < NumRegs; i++) begin 
        register_file[i] <= '0;
      end
    end else if (wr_en_i && (wr_addr_i != '0) ) begin
      register_file[wr_addr_i] <= wr_data_i;
    end
  end

  assign register_file[0] = '0;
  
  assign rd1_data_o = register_file[rd1_addr_i];
  assign rd2_data_o = register_file[rd2_addr_i];

endmodule
