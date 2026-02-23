module lsu #(
  parameter  int unsigned AddrWidth = 32,
  parameter  int unsigned DataWidth = 32,
  localparam int unsigned NumBytes  = DataWidth / 8
) (
// Core interface
  input  logic [2:0]           funct3_i,    
  input  logic [1:0]           offset_i,  // addr[1:0] (TODO remove and make signal)
  input  logic                 mem_wr_en_i,
  input  logic [AddrWidth-1:0] mem_addr_i, // alu_result
  input  logic [DataWidth-1:0] rs2_data, 
  output logic [DataWidth-1:0] ld_data_o, // rdata 

// Memory interface
  output logic                 mem_wr_en_o,
  output logic [NumBytes-1:0]  mem_byte_en_o,
  output logic [AddrWidth-1:0] mem_addr_o,
  output logic [DataWidth-1:0] mem_wdata_o,
  input  logic [DataWidth-1:0] mem_rdata_i  // ld's data_i
);

  always_comb begin : load_unit
    logic [7:0]  byte_sel;
    logic [15:0] halfword_sel;

  // Extract selected byte
    case (offset_i)
      2'b00: byte_sel = mem_rdata_i[7:0];
      2'b01: byte_sel = mem_rdata_i[15:8];
      2'b10: byte_sel = mem_rdata_i[23:16];
      2'b11: byte_sel = mem_rdata_i[31:24];
    endcase

  // Extract selected halfword (aligned to 2 bytes)
    case (offset_i[1])
      1'b0: halfword_sel = mem_rdata_i[15:0];
      1'b1: halfword_sel = mem_rdata_i[31:16];
    endcase

  // Extend based on funct3
    unique case (funct3_i)
      3'b000:  ld_data_o = {{24{byte_sel[7]}}, byte_sel};          // LB
      3'b001:  ld_data_o = {{16{halfword_sel[15]}}, halfword_sel}; // LH
      3'b010:  ld_data_o = mem_rdata_i;                            // LW
      3'b100:  ld_data_o = {24'b0, byte_sel};                      // LBU
      3'b101:  ld_data_o = {16'b0, halfword_sel};                  // LHU
      default: ld_data_o = 32'b0;
    endcase
  end

endmodule
