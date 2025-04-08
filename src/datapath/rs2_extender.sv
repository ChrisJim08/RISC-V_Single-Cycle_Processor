  case(funct3_i)
        3'b000: begin //SB
            mem[addr_i][7:0] <= wr_data_i[7:0];
        end
        3'b001: begin //SH
            mem[addr_i][15:0] <= wr_data_i[15:0];
        end
        3'b010: begin //SW
            mem[addr_i] <= wr_data_i;
        end
        default: begin
          
        end
      endcase