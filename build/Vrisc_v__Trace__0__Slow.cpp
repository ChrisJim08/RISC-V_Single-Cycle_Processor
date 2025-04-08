// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vrisc_v__Syms.h"


VL_ATTR_COLD void Vrisc_v___024root__trace_init_sub__TOP____024unit__0(Vrisc_v___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vrisc_v___024root__trace_init_sub__TOP__0(Vrisc_v___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrisc_v__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrisc_v___024root__trace_init_sub__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("$unit", VerilatedTracePrefixType::SCOPE_MODULE);
    Vrisc_v___024root__trace_init_sub__TOP____024unit__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->declBit(c+72,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+73,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("risc_v", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+74,0,"AddressWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+75,0,"DataWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+72,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+73,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1,0,"alu_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+2,0,"regf_rd_src",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+3,0,"alu_src2_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"jal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"jalr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"branch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"auipc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"regf_wr_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"mem_wr_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"pc_src_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+11,0,"target_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+12,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+13,0,"pc_plus4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+14,0,"next_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+15,0,"alu_flag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+16,0,"alu_src2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17,0,"alu_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+18,0,"regf_rd_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+19,0,"regf_rs1_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+20,0,"regf_rs2_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+21,0,"uimm_type_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+22,0,"data_mem_r_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+23,0,"imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+24,0,"instr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+25,0,"ld_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+26,0,"op_code",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+27,0,"funct3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+28,0,"funct7_h20",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+29,0,"regf_rd_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+30,0,"regf_rs1_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+31,0,"regf_rs2_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->pushPrefix("alu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+75,0,"DataWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+19,0,"src1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+16,0,"src2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1,0,"alu_op_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+17,0,"result_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("alu_src2_mux", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+75,0,"DataWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+3,0,"sel_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+20,0,"in0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+23,0,"in1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+16,0,"out_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("control_unit", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+26,0,"op_code_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+4,0,"jal_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"jalr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"branch_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"auipc_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"regf_wr_en_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"mem_wr_en_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"regf_rd_src_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+32,0,"fnc7_h20_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+27,0,"funct3_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+3,0,"alu_src_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1,0,"alu_op_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("ctrl_flow_unit", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+75,0,"DataWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+4,0,"jal_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"jalr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"branch_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+15,0,"alu_flag_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+12,0,"pc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+19,0,"rs1_data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+23,0,"addr_offset_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+10,0,"pc_src_sel_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+11,0,"pc_target_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+33,0,"base_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+11,0,"pc_plus_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("dmem", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+74,0,"AddressWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+75,0,"DataWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+72,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"wr_en_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+34,0,"addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+20,0,"wr_data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+22,0,"r_data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("imem", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+74,0,"AddressWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+75,0,"DataWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+72,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"wr_en_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+35,0,"addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+20,0,"wr_data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+24,0,"r_data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("imm_extension_unit", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+24,0,"instr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+23,0,"imm_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+26,0,"op_code",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->popPrefix();
    tracep->pushPrefix("ld_data_ext", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+27,0,"funct3_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+36,0,"offset_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+22,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+25,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+37,0,"byte_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+38,0,"halfword_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("pc_adder", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+75,0,"DataWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+12,0,"a_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+76,0,"b_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+13,0,"y_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("pc_mux", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+75,0,"DataWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+10,0,"sel_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+13,0,"in0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+11,0,"in1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+14,0,"out_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("pc_reg", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+75,0,"DataWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+73,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+72,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+14,0,"d_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+12,0,"q_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("regf_wr_data_mux", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+75,0,"DataWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"sel_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+17,0,"in0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+25,0,"in1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+13,0,"in2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+21,0,"in3_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+18,0,"out_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("regfile", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+75,0,"NumRegs",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+75,0,"DataWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+77,0,"AddressWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+72,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+73,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"wr_en_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+29,0,"rd_addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+30,0,"rs1_addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+31,0,"rs2_addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+18,0,"rd_data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+19,0,"rs1_data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+20,0,"rs2_data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+39,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->pushPrefix("register_file", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+40+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("utype_rd_data_mux", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+75,0,"DataWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+7,0,"sel_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+23,0,"in0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+11,0,"in1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+21,0,"out_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vrisc_v___024root__trace_init_sub__TOP____024unit__0(Vrisc_v___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrisc_v__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrisc_v___024root__trace_init_sub__TOP____024unit__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+78,0,"I_IMM_TYPE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+78,0,"I_OR_R_ALU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+79,0,"LD_TYPE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+79,0,"I_IMM_OR_LD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+80,0,"S_TYPE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+79,0,"LD_OR_S",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+81,0,"B_TYPE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+82,0,"J_TYPE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+83,0,"I_JMP_TYPE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+83,0,"JAL_OR_JALR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+84,0,"AUIPC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+84,0,"U_TYPE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
}

VL_ATTR_COLD void Vrisc_v___024root__trace_init_top(Vrisc_v___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrisc_v__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrisc_v___024root__trace_init_top\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vrisc_v___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vrisc_v___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vrisc_v___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vrisc_v___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vrisc_v___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vrisc_v___024root__trace_register(Vrisc_v___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrisc_v__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrisc_v___024root__trace_register\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vrisc_v___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vrisc_v___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vrisc_v___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vrisc_v___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vrisc_v___024root__trace_const_0_sub_0(Vrisc_v___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vrisc_v___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrisc_v___024root__trace_const_0\n"); );
    // Init
    Vrisc_v___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vrisc_v___024root*>(voidSelf);
    Vrisc_v__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vrisc_v___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vrisc_v___024root__trace_const_0_sub_0(Vrisc_v___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrisc_v__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrisc_v___024root__trace_const_0_sub_0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+74,(0xaU),32);
    bufp->fullIData(oldp+75,(0x20U),32);
    bufp->fullIData(oldp+76,(4U),32);
    bufp->fullIData(oldp+77,(5U),32);
    bufp->fullCData(oldp+78,(0x13U),7);
    bufp->fullCData(oldp+79,(3U),7);
    bufp->fullCData(oldp+80,(0x23U),7);
    bufp->fullCData(oldp+81,(0x63U),7);
    bufp->fullCData(oldp+82,(0x6fU),7);
    bufp->fullCData(oldp+83,(0x67U),7);
    bufp->fullCData(oldp+84,(0x17U),7);
}

VL_ATTR_COLD void Vrisc_v___024root__trace_full_0_sub_0(Vrisc_v___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vrisc_v___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrisc_v___024root__trace_full_0\n"); );
    // Init
    Vrisc_v___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vrisc_v___024root*>(voidSelf);
    Vrisc_v__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vrisc_v___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vrisc_v___024root__trace_full_0_sub_0(Vrisc_v___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrisc_v__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrisc_v___024root__trace_full_0_sub_0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelfRef.risc_v__DOT__alu_op),4);
    bufp->fullCData(oldp+2,(vlSelfRef.risc_v__DOT__regf_rd_src),2);
    bufp->fullBit(oldp+3,(((0x23U == (0x7fU & vlSelfRef.risc_v__DOT__instr)) 
                           | ((3U == (0x7fU & vlSelfRef.risc_v__DOT__instr)) 
                              | (0x13U == (0x7fU & vlSelfRef.risc_v__DOT__instr))))));
    bufp->fullBit(oldp+4,((0x6fU == (0x7fU & vlSelfRef.risc_v__DOT__instr))));
    bufp->fullBit(oldp+5,((0x67U == (0x7fU & vlSelfRef.risc_v__DOT__instr))));
    bufp->fullBit(oldp+6,((0x63U == (0x7fU & vlSelfRef.risc_v__DOT__instr))));
    bufp->fullBit(oldp+7,((0x17U == (0x7fU & vlSelfRef.risc_v__DOT__instr))));
    bufp->fullBit(oldp+8,(((0x23U != (0x7fU & vlSelfRef.risc_v__DOT__instr)) 
                           & (0x63U != (0x7fU & vlSelfRef.risc_v__DOT__instr)))));
    bufp->fullBit(oldp+9,((0x23U == (0x7fU & vlSelfRef.risc_v__DOT__instr))));
    bufp->fullBit(oldp+10,(((0x6fU == (0x7fU & vlSelfRef.risc_v__DOT__instr)) 
                            | ((0x67U == (0x7fU & vlSelfRef.risc_v__DOT__instr)) 
                               | (vlSelfRef.risc_v__DOT__alu_result 
                                  & (0x63U == (0x7fU 
                                               & vlSelfRef.risc_v__DOT__instr)))))));
    bufp->fullIData(oldp+11,(vlSelfRef.risc_v__DOT__target_pc),32);
    bufp->fullIData(oldp+12,(vlSelfRef.risc_v__DOT__pc),32);
    bufp->fullIData(oldp+13,(((IData)(4U) + vlSelfRef.risc_v__DOT__pc)),32);
    bufp->fullIData(oldp+14,((((0x6fU == (0x7fU & vlSelfRef.risc_v__DOT__instr)) 
                               | ((0x67U == (0x7fU 
                                             & vlSelfRef.risc_v__DOT__instr)) 
                                  | (vlSelfRef.risc_v__DOT__alu_result 
                                     & (0x63U == (0x7fU 
                                                  & vlSelfRef.risc_v__DOT__instr)))))
                               ? vlSelfRef.risc_v__DOT__target_pc
                               : ((IData)(4U) + vlSelfRef.risc_v__DOT__pc))),32);
    bufp->fullBit(oldp+15,((1U & vlSelfRef.risc_v__DOT__alu_result)));
    bufp->fullIData(oldp+16,(vlSelfRef.risc_v__DOT__alu_src2),32);
    bufp->fullIData(oldp+17,(vlSelfRef.risc_v__DOT__alu_result),32);
    bufp->fullIData(oldp+18,(((2U & (IData)(vlSelfRef.risc_v__DOT__regf_rd_src))
                               ? ((1U & (IData)(vlSelfRef.risc_v__DOT__regf_rd_src))
                                   ? ((0x17U == (0x7fU 
                                                 & vlSelfRef.risc_v__DOT__instr))
                                       ? vlSelfRef.risc_v__DOT__target_pc
                                       : vlSelfRef.risc_v__DOT__imm)
                                   : ((IData)(4U) + vlSelfRef.risc_v__DOT__pc))
                               : ((1U & (IData)(vlSelfRef.risc_v__DOT__regf_rd_src))
                                   ? ((0x4000U & vlSelfRef.risc_v__DOT__instr)
                                       ? ((0x2000U 
                                           & vlSelfRef.risc_v__DOT__instr)
                                           ? 0U : (
                                                   (0x1000U 
                                                    & vlSelfRef.risc_v__DOT__instr)
                                                    ? (IData)(vlSelfRef.risc_v__DOT__ld_data_ext__DOT__halfword_sel)
                                                    : (IData)(vlSelfRef.risc_v__DOT__ld_data_ext__DOT__byte_sel)))
                                       : ((0x2000U 
                                           & vlSelfRef.risc_v__DOT__instr)
                                           ? ((0x1000U 
                                               & vlSelfRef.risc_v__DOT__instr)
                                               ? 0U
                                               : vlSelfRef.risc_v__DOT__data_mem_r_data)
                                           : ((0x1000U 
                                               & vlSelfRef.risc_v__DOT__instr)
                                               ? ((
                                                   (- (IData)(
                                                              (1U 
                                                               & ((IData)(vlSelfRef.risc_v__DOT__ld_data_ext__DOT__halfword_sel) 
                                                                  >> 0xfU)))) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.risc_v__DOT__ld_data_ext__DOT__halfword_sel))
                                               : ((
                                                   (- (IData)(
                                                              (1U 
                                                               & ((IData)(vlSelfRef.risc_v__DOT__ld_data_ext__DOT__byte_sel) 
                                                                  >> 7U)))) 
                                                   << 8U) 
                                                  | (IData)(vlSelfRef.risc_v__DOT__ld_data_ext__DOT__byte_sel)))))
                                   : vlSelfRef.risc_v__DOT__alu_result))),32);
    bufp->fullIData(oldp+19,(vlSelfRef.risc_v__DOT__regf_rs1_data),32);
    bufp->fullIData(oldp+20,(vlSelfRef.risc_v__DOT__regf_rs2_data),32);
    bufp->fullIData(oldp+21,(((0x17U == (0x7fU & vlSelfRef.risc_v__DOT__instr))
                               ? vlSelfRef.risc_v__DOT__target_pc
                               : vlSelfRef.risc_v__DOT__imm)),32);
    bufp->fullIData(oldp+22,(vlSelfRef.risc_v__DOT__data_mem_r_data),32);
    bufp->fullIData(oldp+23,(vlSelfRef.risc_v__DOT__imm),32);
    bufp->fullIData(oldp+24,(vlSelfRef.risc_v__DOT__instr),32);
    bufp->fullIData(oldp+25,(((0x4000U & vlSelfRef.risc_v__DOT__instr)
                               ? ((0x2000U & vlSelfRef.risc_v__DOT__instr)
                                   ? 0U : ((0x1000U 
                                            & vlSelfRef.risc_v__DOT__instr)
                                            ? (IData)(vlSelfRef.risc_v__DOT__ld_data_ext__DOT__halfword_sel)
                                            : (IData)(vlSelfRef.risc_v__DOT__ld_data_ext__DOT__byte_sel)))
                               : ((0x2000U & vlSelfRef.risc_v__DOT__instr)
                                   ? ((0x1000U & vlSelfRef.risc_v__DOT__instr)
                                       ? 0U : vlSelfRef.risc_v__DOT__data_mem_r_data)
                                   : ((0x1000U & vlSelfRef.risc_v__DOT__instr)
                                       ? (((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelfRef.risc_v__DOT__ld_data_ext__DOT__halfword_sel) 
                                                          >> 0xfU)))) 
                                           << 0x10U) 
                                          | (IData)(vlSelfRef.risc_v__DOT__ld_data_ext__DOT__halfword_sel))
                                       : (((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelfRef.risc_v__DOT__ld_data_ext__DOT__byte_sel) 
                                                          >> 7U)))) 
                                           << 8U) | (IData)(vlSelfRef.risc_v__DOT__ld_data_ext__DOT__byte_sel)))))),32);
    bufp->fullCData(oldp+26,((0x7fU & vlSelfRef.risc_v__DOT__instr)),7);
    bufp->fullCData(oldp+27,((7U & (vlSelfRef.risc_v__DOT__instr 
                                    >> 0xcU))),3);
    bufp->fullBit(oldp+28,((1U & (vlSelfRef.risc_v__DOT__instr 
                                  >> 0x1eU))));
    bufp->fullCData(oldp+29,((0x1fU & (vlSelfRef.risc_v__DOT__instr 
                                       >> 7U))),5);
    bufp->fullCData(oldp+30,((0x1fU & (vlSelfRef.risc_v__DOT__instr 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+31,((0x1fU & (vlSelfRef.risc_v__DOT__instr 
                                       >> 0x14U))),5);
    bufp->fullBit(oldp+32,((1U & (vlSelfRef.risc_v__DOT__imem__DOT__mem
                                  [(0x3ffU & (vlSelfRef.risc_v__DOT__pc 
                                              >> 2U))] 
                                  >> 0x1eU))));
    bufp->fullIData(oldp+33,(vlSelfRef.risc_v__DOT__ctrl_flow_unit__DOT__base_addr),32);
    bufp->fullSData(oldp+34,((0x3ffU & (vlSelfRef.risc_v__DOT__alu_result 
                                        >> 2U))),10);
    bufp->fullSData(oldp+35,((0x3ffU & (vlSelfRef.risc_v__DOT__pc 
                                        >> 2U))),10);
    bufp->fullCData(oldp+36,((3U & vlSelfRef.risc_v__DOT__alu_result)),2);
    bufp->fullCData(oldp+37,(vlSelfRef.risc_v__DOT__ld_data_ext__DOT__byte_sel),8);
    bufp->fullSData(oldp+38,(vlSelfRef.risc_v__DOT__ld_data_ext__DOT__halfword_sel),16);
    bufp->fullIData(oldp+39,(vlSelfRef.risc_v__DOT__regfile__DOT__i),32);
    bufp->fullIData(oldp+40,(vlSelfRef.risc_v__DOT__regfile__DOT__register_file[0]),32);
    bufp->fullIData(oldp+41,(vlSelfRef.risc_v__DOT__regfile__DOT__register_file[1]),32);
    bufp->fullIData(oldp+42,(vlSelfRef.risc_v__DOT__regfile__DOT__register_file[2]),32);
    bufp->fullIData(oldp+43,(vlSelfRef.risc_v__DOT__regfile__DOT__register_file[3]),32);
    bufp->fullIData(oldp+44,(vlSelfRef.risc_v__DOT__regfile__DOT__register_file[4]),32);
    bufp->fullIData(oldp+45,(vlSelfRef.risc_v__DOT__regfile__DOT__register_file[5]),32);
    bufp->fullIData(oldp+46,(vlSelfRef.risc_v__DOT__regfile__DOT__register_file[6]),32);
    bufp->fullIData(oldp+47,(vlSelfRef.risc_v__DOT__regfile__DOT__register_file[7]),32);
    bufp->fullIData(oldp+48,(vlSelfRef.risc_v__DOT__regfile__DOT__register_file[8]),32);
    bufp->fullIData(oldp+49,(vlSelfRef.risc_v__DOT__regfile__DOT__register_file[9]),32);
    bufp->fullIData(oldp+50,(vlSelfRef.risc_v__DOT__regfile__DOT__register_file[10]),32);
    bufp->fullIData(oldp+51,(vlSelfRef.risc_v__DOT__regfile__DOT__register_file[11]),32);
    bufp->fullIData(oldp+52,(vlSelfRef.risc_v__DOT__regfile__DOT__register_file[12]),32);
    bufp->fullIData(oldp+53,(vlSelfRef.risc_v__DOT__regfile__DOT__register_file[13]),32);
    bufp->fullIData(oldp+54,(vlSelfRef.risc_v__DOT__regfile__DOT__register_file[14]),32);
    bufp->fullIData(oldp+55,(vlSelfRef.risc_v__DOT__regfile__DOT__register_file[15]),32);
    bufp->fullIData(oldp+56,(vlSelfRef.risc_v__DOT__regfile__DOT__register_file[16]),32);
    bufp->fullIData(oldp+57,(vlSelfRef.risc_v__DOT__regfile__DOT__register_file[17]),32);
    bufp->fullIData(oldp+58,(vlSelfRef.risc_v__DOT__regfile__DOT__register_file[18]),32);
    bufp->fullIData(oldp+59,(vlSelfRef.risc_v__DOT__regfile__DOT__register_file[19]),32);
    bufp->fullIData(oldp+60,(vlSelfRef.risc_v__DOT__regfile__DOT__register_file[20]),32);
    bufp->fullIData(oldp+61,(vlSelfRef.risc_v__DOT__regfile__DOT__register_file[21]),32);
    bufp->fullIData(oldp+62,(vlSelfRef.risc_v__DOT__regfile__DOT__register_file[22]),32);
    bufp->fullIData(oldp+63,(vlSelfRef.risc_v__DOT__regfile__DOT__register_file[23]),32);
    bufp->fullIData(oldp+64,(vlSelfRef.risc_v__DOT__regfile__DOT__register_file[24]),32);
    bufp->fullIData(oldp+65,(vlSelfRef.risc_v__DOT__regfile__DOT__register_file[25]),32);
    bufp->fullIData(oldp+66,(vlSelfRef.risc_v__DOT__regfile__DOT__register_file[26]),32);
    bufp->fullIData(oldp+67,(vlSelfRef.risc_v__DOT__regfile__DOT__register_file[27]),32);
    bufp->fullIData(oldp+68,(vlSelfRef.risc_v__DOT__regfile__DOT__register_file[28]),32);
    bufp->fullIData(oldp+69,(vlSelfRef.risc_v__DOT__regfile__DOT__register_file[29]),32);
    bufp->fullIData(oldp+70,(vlSelfRef.risc_v__DOT__regfile__DOT__register_file[30]),32);
    bufp->fullIData(oldp+71,(vlSelfRef.risc_v__DOT__regfile__DOT__register_file[31]),32);
    bufp->fullBit(oldp+72,(vlSelfRef.clk_i));
    bufp->fullBit(oldp+73,(vlSelfRef.rst_i));
}
