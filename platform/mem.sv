//  Module: mem
//  

module mem #(
  parameter  int unsigned DataWidth    = 32,
  parameter  int unsigned DepthWords   = 2048,
  localparam int unsigned IndexWidth   = $clog2(DepthWords),
  localparam int unsigned NumBytes     = DataWidth / 8
) (
  input  logic                  clk_i,
  input  logic                  wr_en_i,
  input  logic [NumBytes-1:0]   byte_en_i,
  input  logic [IndexWidth-1:0] addr_i,
  input  logic [DataWidth-1:0]  wr_data_i,
  output logic [DataWidth-1:0]  r_data_o
);

  logic [DataWidth-1:0] mem_block [0:DepthWords-1];

  always_ff @(posedge clk_i) begin
  // Byte accessabile synchronous write output, with write enable   
    if (wr_en_i) begin
      for (int i = 0; i < NumBytes; i++) begin
        if (byte_en_i[i]) mem_block[addr_i][(i*8) +: 8] <= wr_data_i[(i*8) +: 8];
      end
    end
  
  // Synnchronous read output
    r_data_o <= mem_block[addr_i];
  end

endmodule
