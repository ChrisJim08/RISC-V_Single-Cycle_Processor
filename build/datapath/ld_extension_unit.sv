module ld_extension_unit (
  input  logic [2:0] funct3_i,    
  input  logic [1:0] offset_i,    
  input  logic [31:0] data_i,    
  output logic [31:0] data_o    
);

  logic [7:0] byte_sel;
  logic [15:0] halfword_sel;

  // Extract selected byte
  always_comb begin
    case (offset_i)
      2'b00: byte_sel = data_i[7:0];
      2'b01: byte_sel = data_i[15:8];
      2'b10: byte_sel = data_i[23:16];
      2'b11: byte_sel = data_i[31:24];
    endcase
  end

  // Extract selected halfword (aligned to 2 bytes)
  always_comb begin
    case (offset_i[1])
      1'b0: halfword_sel = data_i[15:0];
      1'b1: halfword_sel = data_i[31:16];
    endcase
  end

  // Extend based on funct3
  always_comb begin
    unique case (funct3_i)
      3'b000:  data_o = {{24{byte_sel[7]}}, byte_sel};          // LB
      3'b001:  data_o = {{16{halfword_sel[15]}}, halfword_sel}; // LH
      3'b010:  data_o = data_i;                                 // LW
      3'b100:  data_o = {24'b0, byte_sel};                      // LBU
      3'b101:  data_o = {16'b0, halfword_sel};                  // LHU
      default: data_o = 32'b0;
    endcase
  end

endmodule
