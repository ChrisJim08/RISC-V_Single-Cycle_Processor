`timescale 1ns / 1ps
`include "risc_v.svh"
//////////////////////////////////////////////////////////////////////////////////
// Company: Self-employed
// Engineer: Chris Jimenez
// 
// Create Date: 12/12/2024
// Design Name: 
// Module Name: alu_controller
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

module alu_controller (
  input  logic       fnc7_h20_i,
  input  logic [2:0] funct3_i,
  input  logic [6:0] op_code_i,
  output logic       alu_src_o,
  output logic [3:0] alu_op_o
);

  assign alu_src_o =    (op_code_i == S_TYPE)
                     || (op_code_i == LD_TYPE)
                     || (op_code_i == I_IMM_TYPE);

  always_comb begin
    alu_op_o = '0;
    unique casez (op_code_i)
      I_OR_R_ALU: begin
        unique case (funct3_i)
          3'h0: begin
            alu_op_o = fnc7_h20_i ? 4'h1 : 4'h0; //SUB //ADD
          end
          3'h4: begin
            alu_op_o = 4'h2; //XOR
          end
          3'h6: begin
            alu_op_o = 4'h3; //OR
          end
          3'h7: begin
            alu_op_o = 4'h4; //AND
          end
          3'h1: begin
            alu_op_o = 4'h5; //SLL
          end
          3'h5: begin
            alu_op_o = fnc7_h20_i ? 4'h7 : 4'h6; //SRA //SRL
          end
          3'h2: begin
            alu_op_o = 4'h8; //SLT
          end
          3'h3: begin
            alu_op_o = 4'h9; //SLTU
          end
        endcase
      end
      LD_OR_S: begin
        alu_op_o   = 4'h0; //ADD //rs1+imm
      end
      B_TYPE: begin
        unique case (funct3_i)
          3'h0: begin
            alu_op_o = 4'hA; //BEQ
          end
          3'h1: begin
            alu_op_o = 4'hB; //BNE
          end
          3'h4: begin
            alu_op_o = 4'hC; //BLT
          end
          3'h5: begin
            alu_op_o = 4'hD; //BGE
          end
          3'h6: begin
            alu_op_o = 4'hE; //BLTU
          end
          3'h7: begin
            alu_op_o = 4'hF; //BGEU
          end
          default: begin
            
          end
        endcase
      end
      default: begin
        
      end
    endcase
  end

endmodule
