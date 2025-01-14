`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: Self-employed
// Engineer: Chris Jimenez
// 
// Create Date: 12/12/2024
// Design Name: 
// Module Name: RISC_V
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

module risc_v #(
  parameter AddressWidth = 10
)(
  input  logic clk_i,
  input  logic rst_i
);

  // Internal signals
  logic [2:0] funct3;
  logic [3:0] alu_op;
  logic [6:0] op_code;
  logic [1:0] regf_rd_src;
  logic       funct7_h20;
  logic       alu_src2_sel;
  logic       jal, jalr, branch, auipc;
  logic       regf_wr_en, mem_r_en, mem_wr_en;

  controller controller (
    .op_code_i(op_code),
    .jal_o(jal),
    .jalr_o(jalr),
    .branch_o(branch),
    .auipc_o(auipc),
    .regf_wr_en_o(regf_wr_en),
    .mem_r_en_o(mem_r_en),
    .mem_wr_en_o(mem_wr_en),
    .regf_rd_src_o(regf_rd_src)
  );

  alu_controller alu_controller (
    .fnc7_h20_i(funct7_h20),
    .funct3_i(funct3),
    .op_code_i(op_code),
    .alu_src_o(alu_src2_sel),
    .alu_op_o(alu_op)
  );

  datapath #(
    .AddressWidth(AddressWidth)
  ) datapath (
    .clk_i(clk_i),
    .rst_i(rst_i),
    .jal_i(jal),
    .jalr_i(jalr),
    .branch_i(branch),
    .auipc_i(auipc),
    .regf_wr_en_i(regf_wr_en),
    .mem_wr_en_i(mem_wr_en),
    .mem_r_en_i(mem_r_en),
    .alu_src2_sel_i(alu_src2_sel),
    .alu_op_i(alu_op),
    .regf_rd_src_i(regf_rd_src),
    .funct7_h20_o(funct7_h20),
    .op_code_o(op_code),
    .funct3_o(funct3)
  );

endmodule
