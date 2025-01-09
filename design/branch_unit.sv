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
  input  logic [DataWidth-1:0]    addr_offset_i,
  input  logic [DataWidth-1:0]    rs1_data_i,
  input  logic                    alu_flag_i,
  output logic                    pc_src_sel_o,
  output logic [AddressWidth-1:0] pc_target_o
);

  logic [DataWidth-1:0] pc_plus_imm;
  logic [DataWidth-1:0] extended_pc;
  logic [DataWidth-1:0] br_orgin_src;

  assign extended_pc = {{(DataWidth-AddressWidth){1'b0}},
                        pc_i};

  mux2 br_origin_mux (
    .sel_i(jalr_i),
    .in0_i(extended_pc),
    .in1_i(rs1_data_i),
    .out_o(br_orgin_src)
  );

  adder addr_imm_adder (
    .a_i(br_orgin_src),  
    .b_i(addr_offset_i),
    .y_o(pc_plus_imm)
  );

  assign pc_target_o = pc_plus_imm[AddressWidth-1:0];
  
  assign pc_src_sel_o =   jal_i
                        | jalr_i
                        | (branch_i & alu_flag_i);

endmodule
