`timescale 1ns / 1ps
`include "../risc_v.svh"
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
  input  logic [6:0] op_code_i,
  output logic       jal_o,
  output logic       jalr_o,
  output logic       branch_o,
  output logic       auipc_o,
  output logic       regf_wr_en_o,
  output logic       mem_wr_en_o,
  output logic [1:0] regf_rd_src_o
);

  assign auipc_o      =    (op_code_i == AUIPC);
  assign branch_o     =    (op_code_i == B_TYPE);
  assign jal_o        =    (op_code_i == J_TYPE);
  assign jalr_o       =    (op_code_i == I_JMP_TYPE);

  assign mem_wr_en_o  =    (op_code_i == S_TYPE);
  assign regf_wr_en_o =    (op_code_i != S_TYPE)
                        && (op_code_i != B_TYPE);

  always_comb begin
    unique casez (op_code_i)
      I_OR_R_ALU: begin
        regf_rd_src_o = 2'b00;
      end
      LD_OR_S: begin
        regf_rd_src_o = 2'b01;
      end
      JAL_OR_JALR: begin
        regf_rd_src_o = 2'b10;
      end
      U_TYPE: begin
        regf_rd_src_o = 2'b11;
      end
      default: begin
        regf_rd_src_o = 2'b00;
      end
    endcase
  end

endmodule
