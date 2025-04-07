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
  parameter AddressWidth = 10,
  parameter DataWidth = 32
)(
  input  logic clk_i,
  input  logic rst_i
);

  initial begin
      // Load program into memory (adjust path if needed)
    $readmemh("verif/test.mem", imem.mem);
  end
  // Internal signals
  logic [3:0] alu_op;
  logic [1:0] regf_rd_src;
  logic       alu_src2_sel;
  logic       jal, jalr, branch, auipc;
  logic       regf_wr_en, mem_wr_en;

  control_unit control_unit (
    .op_code_i(op_code),
    .jal_o(jal),
    .jalr_o(jalr),
    .branch_o(branch),
    .auipc_o(auipc),
    .regf_wr_en_o(regf_wr_en),
    .mem_wr_en_o(mem_wr_en),
    .regf_rd_src_o(regf_rd_src),

    .fnc7_h20_i(instr[30]),
    .funct3_i(funct3),
    .alu_src_o(alu_src2_sel),
    .alu_op_o(alu_op)
  );

  //Program Counter Wires
  logic                 pc_src_sel;
  logic [DataWidth-1:0] target_pc;
  logic [DataWidth-1:0] pc;
  logic [DataWidth-1:0] pc_plus4;
  logic [DataWidth-1:0] next_pc;
  //ALU Wires
  logic        alu_flag;
  logic [31:0] alu_src2;
  logic [31:0] alu_result;
  //Regfile Wires
  logic [31:0] regf_rd_data;
  logic [31:0] regf_rs1_data;
  logic [31:0] regf_rs2_data;

  logic [31:0] uimm_type_data;
  logic [31:0] data_mem_r_data;

  logic [31:0] imm;
  logic [31:0] instr;

  logic [31:0] ld_data;
  
  assign alu_flag = alu_result[0];

  // Instruction slicings
  logic [6:0] op_code       = instr[6:0];
  logic [2:0] funct3        = instr[14:12];
  logic       funct7_h20    = instr[30];
  logic [4:0] regf_rd_addr  = instr[11:7];
  logic [4:0] regf_rs1_addr = instr[19:15];
  logic [4:0] regf_rs2_addr = instr[24:20];

  flop_reg #(
    .DataWidth(DataWidth)
  ) pc_reg (
    .rst_i(rst_i),
    .clk_i(clk_i),
    .d_i(next_pc),
    .q_o(pc)
  );

  adder #(
    .DataWidth(DataWidth)
  ) pc_adder (
    .a_i(pc),
    .b_i({{(DataWidth-3){1'b0}},
          3'd4}), 
    .y_o(pc_plus4)
  );

  mem #(
    .AddressWidth(AddressWidth),
    .DataWidth(DataWidth)
  ) imem (
    .clk_i(clk_i),
    .wr_en_i(mem_wr_en),
    .addr_i(pc[AddressWidth+1:2]),
    .wr_data_i(regf_rs2_data),
    .r_data_o(instr)
  );
  
  regfile regfile (
    .clk_i(clk_i), 
    .rst_i(rst_i), 
    .wr_en_i(regf_wr_en), 
    .rd_addr_i(regf_rd_addr), 
    .rs1_addr_i(regf_rs1_addr), 
    .rs2_addr_i(regf_rs2_addr), 
    .rd_data_i(regf_rd_data), 
    .rs1_data_o(regf_rs1_data), 
    .rs2_data_o(regf_rs2_data)
  );

  imm_extension_unit imm_extension_unit (
    .instr_i(instr), 
    .imm_o(imm)
  );

  mux2 alu_src2_mux (
    .sel_i(alu_src2_sel), 
    .in0_i(regf_rs2_data), 
    .in1_i(imm), 
    .out_o(alu_src2)
  );

  alu alu (
    .src1_i(regf_rs1_data), 
    .src2_i(alu_src2), 
    .alu_op_i(alu_op), 
    .result_o(alu_result)
  );

  control_flow_unit #(
    .DataWidth(DataWidth)
  ) ctrl_flow_unit (
    .jal_i(jal),
    .jalr_i(jalr),
    .branch_i(branch),
    .alu_flag_i(alu_flag),              
    .pc_i(pc),
    .rs1_data_i(regf_rs1_data),
    .addr_offset_i(imm),
    .pc_src_sel_o(pc_src_sel),           
    .pc_target_o(target_pc)   
  );

  mux2 #(
    .DataWidth(DataWidth)
  ) pc_mux (
    .sel_i(pc_src_sel),
    .in0_i(pc_plus4),
    .in1_i(target_pc),
    .out_o(next_pc)
  );

  mem #(
    .AddressWidth(AddressWidth),
    .DataWidth(DataWidth)
  ) dmem (
    .clk_i(clk_i),
    .wr_en_i(mem_wr_en),
    .addr_i(alu_result[AddressWidth+1:2]),
    .wr_data_i(regf_rs2_data),
    .r_data_o(data_mem_r_data)
  );

  ld_extension_unit ld_data_ext (
    .funct3_i(funct3),    
    .offset_i(alu_result[1:0]),    
    .data_i(data_mem_r_data),    
    .data_o(ld_data)    
  );

  mux4 regf_wr_data_mux (
    .sel_i(regf_rd_src), 
    .in0_i(alu_result), 
    .in1_i(ld_data),
    .in2_i(pc_plus4),
    .in3_i(uimm_type_data),
    .out_o(regf_rd_data)
  );
  mux2 utype_rd_data_mux (
    .sel_i(auipc), 
    .in0_i(imm), 
    .in1_i(target_pc),
    .out_o(uimm_type_data)
  );

endmodule
