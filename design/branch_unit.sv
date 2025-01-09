`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: Self-employed
// Engineer: Chris Jimenez
//
// Create Date: 12/12/2024
// Design Name:
// Module Name: datapath
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
module branch_unit #(
  parameter DataWidth = 32,
  parameter AddressWidth = 10
) (
  input  logic                    jal_i,
  input  logic                    jalr_i,
  input  logic                    branch_i,
  input  logic [AddressWidth-1:0] pc_i,
  input  logic [DataWidth-1:0]    pc_offset_i,
  input  logic [DataWidth-1:0]    alu_result_i,
  output logic                    pc_src_mux,
  output logic [AddressWidth-1:0] pc_target
);

  logic                 alu_flag;
  logic [DataWidth-1:0] pc_plus_imm;
  logic [DataWidth-1:0] extended_pc;

  assign alu_flag = alu_result_i[0];

  assign extended_pc = {{(DataWidth-AddressWidth){1'b0}},
                        pc_i};

  adder pc_imm_adder (
    .a_i(extended_pc),
    .b_i(pc_offset_i),
    .y_o(pc_plus_imm)
  );

  assign pc_target = pc_plus_imm[AddressWidth-1:0];
  
  assign pc_src_mux = jal_i
                    | jalr_i
                    | (branch_i & alu_flag);

endmodule
