module lsu #(
  parameter  int unsigned AddrWidth = 32,
  parameter  int unsigned DataWidth = 32,
  localparam int unsigned NumBytes  = DataWidth / 8
) (
// Core interface
  input  logic [2:0]           funct3_i,    
  input  logic [1:0]           offset_i,  // addr[1:0]
  input  logic                 mem_wr_en_i,
  input  logic [DataWidth-1:0] rs2_data, 
  output logic [DataWidth-1:0] ld_data_o, // rdata 

// Memory interface
  output logic                 mem_wr_en_o,
  output logic [NumBytes-1:0]  mem_byte_en_o,
  output logic [AddrWidth-1:0] mem_addr_o,
  output logic [DataWidth-1:0] mem_wdata_o,
  input  logic [DataWidth-1:0] mem_rdata_i  // ld's data_i
);
  
endmodule