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
  input  logic       jal_i,
  input  logic       jalr_i,
  input  logic       branch_i,
  input  logic       regf_wr_en_i,
  input  logic       mem_wr_en_i,
  input  logic       mem_r_en_i,
  input  logic       alu_src2_sel,
  input  logic [3:0] alu_op_i,
  output logic [6:0] op_code_o,
  output logic [2:0] funct3_o,
  output logic [6:0] funct7_o
);
  //Program Counter Wires
  logic                    pc_src_sel;
  logic [AddressWidth-1:0] target_pc;
  logic [AddressWidth-1:0] pc;
  logic [AddressWidth-1:0] pc_plus4;
  logic [AddressWidth-1:0] next_pc;
  //ALU Wires
  logic        alu_flag;              //rename?
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

  logic [31:0] data_mem_r_data;

  logic [31:0] imm;
  logic [31:0] instr;

  assign funct3_o = instr[14:12];
  
  assign alu_flag = alu_result[0];

  assign regf_wr_addr = pc_plus4;

  instr_mem instr_mem (
    .r_addr_i(pc),
    .r_data_o(instr)
  );
  
  imm_decoder imm_decoder (
    .instr_i(instr), 
    .imm_o(imm)
  );

  data_mem data_mem (
    .clk_i(clk_i),
    .r_en_i(mem_r_en_i),
    .wr_en_i(mem_wr_en_i),
    .addr_i(alu_result[AddressWidth-1:0]),
    .wr_data_i(regf_rd2_data),
    .funct3_i(funct3_o),
    .r_data_o(data_mem_r_data)
  );

  flop_reg #(
    .DataWidth(AddressWidth)
  ) pc_reg (
    .rst_i(rst_i),
    .clk_i(clk_i),
    .d_i(next_pc),
    .q_o(pc)
  );

  branch_unit branch_unit (
    .jal_i(jal_i),
    .jalr_i(jalr_i),
    .branch_i(branch_i),
    .pc_i(pc),
    .addr_offset_i(imm),
    .rs1_data_i(regf_rd1_data),
    .alu_flag_i(alu_flag),
    .pc_src_sel_o(pc_src_sel),
    .pc_target_o(target_pc)
  );

  mux2 #(
    .DataWidth(AddressWidth)
  ) pc_mux (
    .sel_i(pc_src_sel),
    .in0_i(pc_plus4),
    .in1_i(target_pc),
    .out_o(next_pc)
  );

  adder #(
    .DataWidth(AddressWidth)
  ) pc_adder (
    .a_i(pc),
    .b_i({{(AddressWidth-3){1'b0}},3'd4}), 
    .y_o(pc_plus4)
  );

  alu alu (
    .src1_i(regf_rd1_data), 
    .src2_i(alu_src2), 
    .alu_op_i(alu_op_i), 
    .result_o(alu_result)
  );

  mux2 alu_src2_mux (
    .sel_i(alu_src2_sel), 
    .in0_i(regf_rd2_data), 
    .in1_i(imm), 
    .out_o(alu_src2)
  );

  regfile regfile (
    .clk_i(clk_i), 
    .rst_i(rst_i), 
    .wr_en_i(regf_wr_en_i), 
    .wr_addr_i(regf_wr_addr), 
    .rd1_addr_i(regf_rd1_addr), 
    .rd2_addr_i(regf_rd2_addr), 
    .wr_data_i(regf_wr_data), 
    .rd1_data_o(regf_rd1_data), 
    .rd2_data_o(regf_rd2_data)
  );

  mux2 regf_wr_src_mux (
    .sel_i(regf_wr_src_sel), 
    .in0_i(alu_result), 
    .in1_i(data_mem_r_data), 
    .out_o(regf_wr_data)
  );

endmodule
