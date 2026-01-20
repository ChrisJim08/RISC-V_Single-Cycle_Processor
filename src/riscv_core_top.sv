`timescale 1ns / 1ps
//  Module: riscv_core_top
//
module riscv_core_top #(
  parameter int unsigned AddressWidth = 10,
  parameter int unsigned DataWidth    = 32
)(
  input logic                     clk_i,
  input logic                     rst_i, 
  input logic                     imem_load_i, 
  input logic  [AddressWidth-1:0] imem_load_addr_i, 
  input logic  [DataWidth-1:0]    imem_load_data_i,
  output logic                    halt_o  
);

  // Instruction memory signals
  logic [AddressWidth-1:0] imem_addr;
  logic [AddressWidth-1:0] core_imem_addr;
  logic [DataWidth-1:0]    instr;

  assign imem_addr = imem_load_i ? imem_load_addr_i : core_imem_addr;

  // Data memory signals
  logic [DataWidth-1:0]    dmem_r_data;
  logic                    dmem_wr_en;
  logic [AddressWidth-1:0] dmem_addr;
  logic [DataWidth-1:0]    dmem_wr_data;

  riscv_core #(
    .AddressWidth(AddressWidth),
    .DataWidth(DataWidth)
  ) riscv_core (
    .clk_i(clk_i),
    .rst_i(rst_i),
    .instr_i(instr),
    .imem_addr_o(core_imem_addr),
    .dmem_r_data_i(dmem_r_data),
    .dmem_wr_en_o(dmem_wr_en),
    .dmem_addr_o(dmem_addr),
    .dmem_wr_data_o(dmem_wr_data),
    .halt_o(halt_o)
  );

  mem #(
    .AddressWidth(AddressWidth),
    .DataWidth(DataWidth)
  ) imem (
    .clk_i(clk_i),
    .wr_en_i(imem_load_i),
    .addr_i(imem_addr),
    .wr_data_i(imem_load_data_i),
    .r_data_o(instr)
  );

  mem #(
    .AddressWidth(AddressWidth),
    .DataWidth(DataWidth)
  ) dmem (
    .clk_i(clk_i),
    .wr_en_i(dmem_wr_en),
    .addr_i(dmem_addr),
    .wr_data_i(dmem_wr_data),
    .r_data_o(dmem_r_data)
  );
  
endmodule: riscv_core_top
