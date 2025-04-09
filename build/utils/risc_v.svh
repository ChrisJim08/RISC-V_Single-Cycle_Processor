`ifndef RISC_V_SVH
`define RISC_V_SVH

localparam logic [6:0] I_IMM_TYPE  = 7'b0010011;
localparam logic [6:0] I_OR_R_ALU  = 7'b0?10011;
localparam logic [6:0] LD_TYPE     = 7'b0000011;
localparam logic [6:0] I_IMM_OR_LD = 7'b00?0011;
localparam logic [6:0] S_TYPE      = 7'b0100011;
localparam logic [6:0] LD_OR_S     = 7'b0?00011;
localparam logic [6:0] B_TYPE      = 7'b1100011;
localparam logic [6:0] J_TYPE      = 7'b1101111;
localparam logic [6:0] I_JMP_TYPE  = 7'b1100111;
localparam logic [6:0] JAL_OR_JALR = 7'b110?111;
localparam logic [6:0] AUIPC       = 7'b0010111;
localparam logic [6:0] U_TYPE      = 7'b0?10111;

`endif // RISC_V_SVH
