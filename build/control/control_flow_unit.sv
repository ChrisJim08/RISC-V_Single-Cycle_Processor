module control_flow_unit #(
  parameter DataWidth    = 32
) (
  input  logic                  jal_i,
  input  logic                  jalr_i,
  input  logic                  branch_i,
  input  logic                  alu_flag_i,               // branch condition result
  input  logic [DataWidth-1:0]  pc_i,
  input  logic [DataWidth-1:0]  rs1_data_i,
  input  logic [DataWidth-1:0]  addr_offset_i,
  output logic                  pc_src_sel_o,             
  output logic [DataWidth-1:0]  pc_target_o               // target PC
);

  logic [DataWidth-1:0] base_addr;
  logic [DataWidth-1:0] pc_plus_offset;

  // Select base address for jump/branch
  always_comb begin
    base_addr = pc_i;  // JAL/branch use PC
    if (jalr_i) begin
      base_addr = rs1_data_i;  // JALR uses rs1
    end
  end

  // Compute target address
  assign pc_plus_offset = base_addr + addr_offset_i;

  // Truncate to AddressWidth
  assign pc_target_o = pc_plus_offset;

  // Branch/jump decision logic
  assign pc_src_sel_o = jal_i | jalr_i | (branch_i & alu_flag_i);

endmodule
