`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: Self-employed
// Engineer: Chris Jimenez
//
// Create Date: 12/12/2024
// Design Name:
// Module Name: data_mem
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

module data_mem #(
  parameter AddressWidth = 10
) (
  input logic                     clk_i,
  input logic                     r_en_i,
  input logic                     wr_en_i,
  input logic  [AddressWidth-1:0] addr_i,
  input logic  [31:0]             wr_data_i,
  input logic  [2:0]              funct3_i,
  output logic [31:0]             r_data_o
);

  logic [31:0] mem [(2**AddressWidth)-1:0];

  always_comb begin
    if(r_en_i) begin
      case (funct3_i)
        3'b000: begin //LB
          r_data_o = {{24{mem[addr_i][7]}}, 
                      mem[addr_i][7:0]};
        end
        3'b001: begin //LH
          r_data_o = {{16{mem[addr_i][15]}}, 
                      mem[addr_i][15:0]};
        end 
        3'b010: begin //LW
          r_data_o = mem[addr_i];
        end
        3'b100: begin //LBU
          r_data_o = {24'b0, 
                      mem[addr_i][7:0]};
        end
        3'b101: begin //LHU
          r_data_o = {16'b0, 
                      mem[addr_i][15:0]};
        end
        default: begin
          r_data_o = mem[addr_i];
        end
      endcase
    end
	end
    
  always @(posedge clk_i) begin
    if (wr_en_i) begin
      case(funct3_i)
        3'b000: begin //SB
            mem[addr_i][7:0] =  wr_data_i[7:0];
        end
        3'b001: begin //SH
            mem[addr_i][15:0] = wr_data_i[15:0];
        end
        3'b010: begin //SW
            mem[addr_i] = wr_data_i;
        end
        default: begin
          mem[addr_i] = wr_data_i;
        end
      endcase
    end
  end
  
endmodule