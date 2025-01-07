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

module datapath #(
  parameter AddressWidth = 10
)(
  input  logic       clk_i,
  input  logic       rst_i,
  input  logic       wr_en_i,
  input  logic [3:0] alu_op_i,
  output logic [6:0] op_code_o,
  output logic [2:0] funct3_o,
  output logic [6:0] funct7_o,
  output logic [3:0] alu_ctrl_op_o
);
  //Program Counter Wires
  logic [AddressWidth-1:0] pc;
  logic [AddressWidth-1:0] pc_plus4;
  logic [AddressWidth-1:0] next_pc;
  //ALU Wires
  logic        alu_src2_sel;
  logic [31:0] alu_src1;
  logic [31:0] alu_src2;
  logic [31:0] alu_result;
  //Regfile Wires
  logic        regf_wr_src_sel;
  logic [4:0]  regf_wr_addr;
  logic [4:0]  regf_rd1_addr;
  logic [4:0]  regf_rd2_addr;
  logic [31:0] regf_wr_data;
  logic [31:0] regf_rd1_data;
  logic [31:0] regf_rd2_data;

  logic [31:0] imm;
  logic [31:0] instr;

  logic [31:0] data_mem_rd_data;

  assign funct3_o = instr[14:12];

  instr_mem instr_mem (
    .r_addr_i(pc),
    .r_data_o(instr)
  );

  data_mem data_mem (
    .clk_i(clk_i),
    .r_en_i(),
    .wr_en_i(),
    .addr_i(),
    .wr_data_i(),
    .funct3_i(),
    .r_data_o()
  );

  flop_reg #(
    .DataWidth(AddressWidth)
  ) pc_reg (
    .rst_i(rst_i),
    .clk_i(clk_i),
    .d_i(next_pc),
    .q_o(pc)
  );

  adder #(
    .DataWidth(AddressWidth)
  ) pc_adder (
    .a_i(pc),
    .b_i({{(AddressWidth-3){1'b0}},3'd4}), 
    .y_o(pc_plus4)
  );

  mux2 alu_src2_mux (
    .sel_i(alu_src2_sel), 
    .in0_i(regf_rd2_data), 
    .in1_i(imm), 
    .out_o(alu_src2)
  );

  mux2 regf_wr_src_mux (
    .sel_i(regf_wr_src_sel), 
    .in0_i(alu_result), 
    .in1_i(data_mem_rd_data), 
    .out_o(regf_wr_data)
  );

  alu alu (
    .src1_i(alu_src1), 
    .src2_i(alu_src2), 
    .alu_op_i(alu_op_i), 
    .result_o(alu_result)
  );

  regfile regfile (
    .clk_i(clk_i), 
    .rst_i(rst_i), 
    .wr_en_i(wr_en_i), 
    .wr_addr_i(regf_wr_addr), 
    .rd1_addr_i(regf_rd1_addr), 
    .rd2_addr_i(regf_rd2_addr), 
    .wr_data_i(regf_wr_data), 
    .rd2_data_o(regf_rd1_data), 
    .rd1_data_o(regf_rd2_data)
  );
  
  imm_decoder imm_decoder (
    .instr_i(instr), 
    .imm_o(imm)
  );

endmodule
