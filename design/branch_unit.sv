module branch_unit #(
  parameter DataWidth = 32,
  parameter PcWidth = 9
) (
  input logic pc_i,
  input logic branch_i,
  input logic [31:0] blah,
  output logic [PcWidth-1:0] next_pc_o
);

endmodule