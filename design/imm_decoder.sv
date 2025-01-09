`timescale 1ns / 1ps
`include "definitions.svh"
//////////////////////////////////////////////////////////////////////////////////
// Company: Self-employed
// Engineer: Chris Jimenez
//
// Create Date: 12/26/2024
// Design Name:
// Module Name: imm_decoder
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

module imm_decoder (
  input  logic [31:0] instr_i,
  output logic [31:0] imm_o
);

  logic [6:0] op_code = instr_i[6:0];

  always_comb begin
    unique casez (op_code)
      `OPCODE_I_TYPE: begin
        imm_o = {{20{instr_i[31]}}, 
                  instr_i[31:20]};
      end
      `OPCODE_I_JALR_TYPE: begin
        imm_o = {{20{instr_i[31]}}, 
                 instr_i[31:20]};
      end
      `OPCODE_S_TYPE: begin
        imm_o = {{20{instr_i[31]}}, 
                 instr_i[31:25], 
                 instr_i[11:7]};
      end
      `OPCODE_B_TYPE: begin
        imm_o = {{20{instr_i[31]}}, 
                 instr_i[7], 
                 instr_i[30:25], 
                 instr_i[11:8], 
                 1'b0};
      end
      `OPCODE_J_TYPE: begin
        imm_o = {{12{instr_i[31]}}, 
                 instr_i[19:12], 
                 instr_i[20], 
                 instr_i[30:21], 
                 1'b0};
      end
      `OPCODE_U_TYPE: begin      
        imm_o = {instr_i[31:12], 
                 12'b0};
      end
      default: begin             
        imm_o = '0;
      end
    endcase
  end  

endmodule
