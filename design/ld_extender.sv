
      unique case (funct3_i)
        3'b000: begin //LB
          r_data_o = {{24{mem[addr_i][7]}}, 
                      mem[addr_i][7:0]};
        end
        3'b001: begin //LH
          r_data_o = {{16{mem[addr_i][15]}}, 
                      mem[addr_i][15:0]};
        end 
        3'b010: begin //LW
          r_data_o = mem[addr_i];
        end
        3'b100: begin //LBU
          r_data_o = {24'b0, 
                      mem[addr_i][7:0]};
        end
        3'b101: begin //LHU
          r_data_o = {16'b0, 
                      mem[addr_i][15:0]};
        end
        default: begin

        end
      endcase