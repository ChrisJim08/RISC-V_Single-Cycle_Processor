// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_risc_v__Syms.h"


void Vtb_risc_v___024root__trace_chg_0_sub_0(Vtb_risc_v___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_risc_v___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_risc_v___024root__trace_chg_0\n"); );
    // Init
    Vtb_risc_v___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_risc_v___024root*>(voidSelf);
    Vtb_risc_v__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtb_risc_v___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_risc_v___024root__trace_chg_0_sub_0(Vtb_risc_v___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_risc_v__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_risc_v___024root__trace_chg_0_sub_0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [3U])))) {
        bufp->chgIData(oldp+0,(vlSelfRef.tb_risc_v__DOT__DUT__DOT__regfile__DOT__register_file[0]),32);
        bufp->chgIData(oldp+1,(vlSelfRef.tb_risc_v__DOT__DUT__DOT__regfile__DOT__register_file[1]),32);
        bufp->chgIData(oldp+2,(vlSelfRef.tb_risc_v__DOT__DUT__DOT__regfile__DOT__register_file[2]),32);
        bufp->chgIData(oldp+3,(vlSelfRef.tb_risc_v__DOT__DUT__DOT__regfile__DOT__register_file[3]),32);
        bufp->chgIData(oldp+4,(vlSelfRef.tb_risc_v__DOT__DUT__DOT__regfile__DOT__register_file[4]),32);
        bufp->chgIData(oldp+5,(vlSelfRef.tb_risc_v__DOT__DUT__DOT__regfile__DOT__register_file[5]),32);
        bufp->chgIData(oldp+6,(vlSelfRef.tb_risc_v__DOT__DUT__DOT__regfile__DOT__register_file[6]),32);
        bufp->chgIData(oldp+7,(vlSelfRef.tb_risc_v__DOT__DUT__DOT__regfile__DOT__register_file[7]),32);
        bufp->chgIData(oldp+8,(vlSelfRef.tb_risc_v__DOT__DUT__DOT__regfile__DOT__register_file[8]),32);
        bufp->chgIData(oldp+9,(vlSelfRef.tb_risc_v__DOT__DUT__DOT__regfile__DOT__register_file[9]),32);
        bufp->chgIData(oldp+10,(vlSelfRef.tb_risc_v__DOT__DUT__DOT__regfile__DOT__register_file[10]),32);
        bufp->chgIData(oldp+11,(vlSelfRef.tb_risc_v__DOT__DUT__DOT__regfile__DOT__register_file[11]),32);
        bufp->chgIData(oldp+12,(vlSelfRef.tb_risc_v__DOT__DUT__DOT__regfile__DOT__register_file[12]),32);
        bufp->chgIData(oldp+13,(vlSelfRef.tb_risc_v__DOT__DUT__DOT__regfile__DOT__register_file[13]),32);
        bufp->chgIData(oldp+14,(vlSelfRef.tb_risc_v__DOT__DUT__DOT__regfile__DOT__register_file[14]),32);
        bufp->chgIData(oldp+15,(vlSelfRef.tb_risc_v__DOT__DUT__DOT__regfile__DOT__register_file[15]),32);
        bufp->chgIData(oldp+16,(vlSelfRef.tb_risc_v__DOT__DUT__DOT__regfile__DOT__register_file[16]),32);
        bufp->chgIData(oldp+17,(vlSelfRef.tb_risc_v__DOT__DUT__DOT__regfile__DOT__register_file[17]),32);
        bufp->chgIData(oldp+18,(vlSelfRef.tb_risc_v__DOT__DUT__DOT__regfile__DOT__register_file[18]),32);
        bufp->chgIData(oldp+19,(vlSelfRef.tb_risc_v__DOT__DUT__DOT__regfile__DOT__register_file[19]),32);
        bufp->chgIData(oldp+20,(vlSelfRef.tb_risc_v__DOT__DUT__DOT__regfile__DOT__register_file[20]),32);
        bufp->chgIData(oldp+21,(vlSelfRef.tb_risc_v__DOT__DUT__DOT__regfile__DOT__register_file[21]),32);
        bufp->chgIData(oldp+22,(vlSelfRef.tb_risc_v__DOT__DUT__DOT__regfile__DOT__register_file[22]),32);
        bufp->chgIData(oldp+23,(vlSelfRef.tb_risc_v__DOT__DUT__DOT__regfile__DOT__register_file[23]),32);
        bufp->chgIData(oldp+24,(vlSelfRef.tb_risc_v__DOT__DUT__DOT__regfile__DOT__register_file[24]),32);
        bufp->chgIData(oldp+25,(vlSelfRef.tb_risc_v__DOT__DUT__DOT__regfile__DOT__register_file[25]),32);
        bufp->chgIData(oldp+26,(vlSelfRef.tb_risc_v__DOT__DUT__DOT__regfile__DOT__register_file[26]),32);
        bufp->chgIData(oldp+27,(vlSelfRef.tb_risc_v__DOT__DUT__DOT__regfile__DOT__register_file[27]),32);
        bufp->chgIData(oldp+28,(vlSelfRef.tb_risc_v__DOT__DUT__DOT__regfile__DOT__register_file[28]),32);
        bufp->chgIData(oldp+29,(vlSelfRef.tb_risc_v__DOT__DUT__DOT__regfile__DOT__register_file[29]),32);
        bufp->chgIData(oldp+30,(vlSelfRef.tb_risc_v__DOT__DUT__DOT__regfile__DOT__register_file[30]),32);
        bufp->chgIData(oldp+31,(vlSelfRef.tb_risc_v__DOT__DUT__DOT__regfile__DOT__register_file[31]),32);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[2U] 
                      | vlSelfRef.__Vm_traceActivity
                      [4U])))) {
        bufp->chgCData(oldp+32,(vlSelfRef.tb_risc_v__DOT__DUT__DOT__alu_op),4);
        bufp->chgCData(oldp+33,(vlSelfRef.tb_risc_v__DOT__DUT__DOT__regf_rd_src),2);
        bufp->chgBit(oldp+34,(((0x23U == (0x7fU & vlSelfRef.tb_risc_v__DOT__DUT__DOT__instr)) 
                               | ((3U == (0x7fU & vlSelfRef.tb_risc_v__DOT__DUT__DOT__instr)) 
                                  | (0x13U == (0x7fU 
                                               & vlSelfRef.tb_risc_v__DOT__DUT__DOT__instr))))));
        bufp->chgBit(oldp+35,((0x6fU == (0x7fU & vlSelfRef.tb_risc_v__DOT__DUT__DOT__instr))));
        bufp->chgBit(oldp+36,((0x67U == (0x7fU & vlSelfRef.tb_risc_v__DOT__DUT__DOT__instr))));
        bufp->chgBit(oldp+37,((0x63U == (0x7fU & vlSelfRef.tb_risc_v__DOT__DUT__DOT__instr))));
        bufp->chgBit(oldp+38,((0x17U == (0x7fU & vlSelfRef.tb_risc_v__DOT__DUT__DOT__instr))));
        bufp->chgBit(oldp+39,(((0x23U != (0x7fU & vlSelfRef.tb_risc_v__DOT__DUT__DOT__instr)) 
                               & (0x63U != (0x7fU & vlSelfRef.tb_risc_v__DOT__DUT__DOT__instr)))));
        bufp->chgBit(oldp+40,((0x23U == (0x7fU & vlSelfRef.tb_risc_v__DOT__DUT__DOT__instr))));
        bufp->chgBit(oldp+41,(((0x6fU == (0x7fU & vlSelfRef.tb_risc_v__DOT__DUT__DOT__instr)) 
                               | ((0x67U == (0x7fU 
                                             & vlSelfRef.tb_risc_v__DOT__DUT__DOT__instr)) 
                                  | (vlSelfRef.tb_risc_v__DOT__DUT__DOT__alu_result 
                                     & (0x63U == (0x7fU 
                                                  & vlSelfRef.tb_risc_v__DOT__DUT__DOT__instr)))))));
        bufp->chgIData(oldp+42,(vlSelfRef.tb_risc_v__DOT__DUT__DOT__target_pc),32);
        bufp->chgBit(oldp+43,((1U & vlSelfRef.tb_risc_v__DOT__DUT__DOT__alu_result)));
        bufp->chgIData(oldp+44,(vlSelfRef.tb_risc_v__DOT__DUT__DOT__alu_src2),32);
        bufp->chgIData(oldp+45,(vlSelfRef.tb_risc_v__DOT__DUT__DOT__alu_result),32);
        bufp->chgIData(oldp+46,(vlSelfRef.tb_risc_v__DOT__DUT__DOT__regf_rs1_data),32);
        bufp->chgIData(oldp+47,(vlSelfRef.tb_risc_v__DOT__DUT__DOT__regf_rs2_data),32);
        bufp->chgIData(oldp+48,(((0x17U == (0x7fU & vlSelfRef.tb_risc_v__DOT__DUT__DOT__instr))
                                  ? vlSelfRef.tb_risc_v__DOT__DUT__DOT__target_pc
                                  : vlSelfRef.tb_risc_v__DOT__DUT__DOT__imm)),32);
        bufp->chgIData(oldp+49,(vlSelfRef.tb_risc_v__DOT__DUT__DOT__data_mem_r_data),32);
        bufp->chgIData(oldp+50,(vlSelfRef.tb_risc_v__DOT__DUT__DOT__imm),32);
        bufp->chgIData(oldp+51,(vlSelfRef.tb_risc_v__DOT__DUT__DOT__instr),32);
        bufp->chgIData(oldp+52,(((0x4000U & vlSelfRef.tb_risc_v__DOT__DUT__DOT__instr)
                                  ? ((0x2000U & vlSelfRef.tb_risc_v__DOT__DUT__DOT__instr)
                                      ? 0U : ((0x1000U 
                                               & vlSelfRef.tb_risc_v__DOT__DUT__DOT__instr)
                                               ? (IData)(vlSelfRef.tb_risc_v__DOT__DUT__DOT__ld_data_ext__DOT__halfword_sel)
                                               : (IData)(vlSelfRef.tb_risc_v__DOT__DUT__DOT__ld_data_ext__DOT__byte_sel)))
                                  : ((0x2000U & vlSelfRef.tb_risc_v__DOT__DUT__DOT__instr)
                                      ? ((0x1000U & vlSelfRef.tb_risc_v__DOT__DUT__DOT__instr)
                                          ? 0U : vlSelfRef.tb_risc_v__DOT__DUT__DOT__data_mem_r_data)
                                      : ((0x1000U & vlSelfRef.tb_risc_v__DOT__DUT__DOT__instr)
                                          ? (((- (IData)(
                                                         (1U 
                                                          & ((IData)(vlSelfRef.tb_risc_v__DOT__DUT__DOT__ld_data_ext__DOT__halfword_sel) 
                                                             >> 0xfU)))) 
                                              << 0x10U) 
                                             | (IData)(vlSelfRef.tb_risc_v__DOT__DUT__DOT__ld_data_ext__DOT__halfword_sel))
                                          : (((- (IData)(
                                                         (1U 
                                                          & ((IData)(vlSelfRef.tb_risc_v__DOT__DUT__DOT__ld_data_ext__DOT__byte_sel) 
                                                             >> 7U)))) 
                                              << 8U) 
                                             | (IData)(vlSelfRef.tb_risc_v__DOT__DUT__DOT__ld_data_ext__DOT__byte_sel)))))),32);
        bufp->chgCData(oldp+53,((0x7fU & vlSelfRef.tb_risc_v__DOT__DUT__DOT__instr)),7);
        bufp->chgCData(oldp+54,((7U & (vlSelfRef.tb_risc_v__DOT__DUT__DOT__instr 
                                       >> 0xcU))),3);
        bufp->chgBit(oldp+55,((1U & (vlSelfRef.tb_risc_v__DOT__DUT__DOT__instr 
                                     >> 0x1eU))));
        bufp->chgCData(oldp+56,((0x1fU & (vlSelfRef.tb_risc_v__DOT__DUT__DOT__instr 
                                          >> 7U))),5);
        bufp->chgCData(oldp+57,((0x1fU & (vlSelfRef.tb_risc_v__DOT__DUT__DOT__instr 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+58,((0x1fU & (vlSelfRef.tb_risc_v__DOT__DUT__DOT__instr 
                                          >> 0x14U))),5);
        bufp->chgIData(oldp+59,(vlSelfRef.tb_risc_v__DOT__DUT__DOT__ctrl_flow_unit__DOT__base_addr),32);
        bufp->chgSData(oldp+60,((0x3ffU & (vlSelfRef.tb_risc_v__DOT__DUT__DOT__alu_result 
                                           >> 2U))),10);
        bufp->chgCData(oldp+61,((3U & vlSelfRef.tb_risc_v__DOT__DUT__DOT__alu_result)),2);
        bufp->chgCData(oldp+62,(vlSelfRef.tb_risc_v__DOT__DUT__DOT__ld_data_ext__DOT__byte_sel),8);
        bufp->chgSData(oldp+63,(vlSelfRef.tb_risc_v__DOT__DUT__DOT__ld_data_ext__DOT__halfword_sel),16);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U]))) {
        bufp->chgIData(oldp+64,(vlSelfRef.tb_risc_v__DOT__DUT__DOT__pc),32);
        bufp->chgIData(oldp+65,(((IData)(4U) + vlSelfRef.tb_risc_v__DOT__DUT__DOT__pc)),32);
        bufp->chgSData(oldp+66,((0x3ffU & (vlSelfRef.tb_risc_v__DOT__DUT__DOT__pc 
                                           >> 2U))),10);
        bufp->chgIData(oldp+67,(vlSelfRef.tb_risc_v__DOT__DUT__DOT__regfile__DOT__i),32);
    }
    bufp->chgBit(oldp+68,(vlSelfRef.clk));
    bufp->chgBit(oldp+69,(vlSelfRef.rst));
    bufp->chgIData(oldp+70,((((0x6fU == (0x7fU & vlSelfRef.tb_risc_v__DOT__DUT__DOT__instr)) 
                              | ((0x67U == (0x7fU & vlSelfRef.tb_risc_v__DOT__DUT__DOT__instr)) 
                                 | (vlSelfRef.tb_risc_v__DOT__DUT__DOT__alu_result 
                                    & (0x63U == (0x7fU 
                                                 & vlSelfRef.tb_risc_v__DOT__DUT__DOT__instr)))))
                              ? vlSelfRef.tb_risc_v__DOT__DUT__DOT__target_pc
                              : ((IData)(4U) + vlSelfRef.tb_risc_v__DOT__DUT__DOT__pc))),32);
    bufp->chgIData(oldp+71,(((2U & (IData)(vlSelfRef.tb_risc_v__DOT__DUT__DOT__regf_rd_src))
                              ? ((1U & (IData)(vlSelfRef.tb_risc_v__DOT__DUT__DOT__regf_rd_src))
                                  ? ((0x17U == (0x7fU 
                                                & vlSelfRef.tb_risc_v__DOT__DUT__DOT__instr))
                                      ? vlSelfRef.tb_risc_v__DOT__DUT__DOT__target_pc
                                      : vlSelfRef.tb_risc_v__DOT__DUT__DOT__imm)
                                  : ((IData)(4U) + vlSelfRef.tb_risc_v__DOT__DUT__DOT__pc))
                              : ((1U & (IData)(vlSelfRef.tb_risc_v__DOT__DUT__DOT__regf_rd_src))
                                  ? ((0x4000U & vlSelfRef.tb_risc_v__DOT__DUT__DOT__instr)
                                      ? ((0x2000U & vlSelfRef.tb_risc_v__DOT__DUT__DOT__instr)
                                          ? 0U : ((0x1000U 
                                                   & vlSelfRef.tb_risc_v__DOT__DUT__DOT__instr)
                                                   ? (IData)(vlSelfRef.tb_risc_v__DOT__DUT__DOT__ld_data_ext__DOT__halfword_sel)
                                                   : (IData)(vlSelfRef.tb_risc_v__DOT__DUT__DOT__ld_data_ext__DOT__byte_sel)))
                                      : ((0x2000U & vlSelfRef.tb_risc_v__DOT__DUT__DOT__instr)
                                          ? ((0x1000U 
                                              & vlSelfRef.tb_risc_v__DOT__DUT__DOT__instr)
                                              ? 0U : vlSelfRef.tb_risc_v__DOT__DUT__DOT__data_mem_r_data)
                                          : ((0x1000U 
                                              & vlSelfRef.tb_risc_v__DOT__DUT__DOT__instr)
                                              ? (((- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSelfRef.tb_risc_v__DOT__DUT__DOT__ld_data_ext__DOT__halfword_sel) 
                                                                 >> 0xfU)))) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.tb_risc_v__DOT__DUT__DOT__ld_data_ext__DOT__halfword_sel))
                                              : (((- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSelfRef.tb_risc_v__DOT__DUT__DOT__ld_data_ext__DOT__byte_sel) 
                                                                 >> 7U)))) 
                                                  << 8U) 
                                                 | (IData)(vlSelfRef.tb_risc_v__DOT__DUT__DOT__ld_data_ext__DOT__byte_sel)))))
                                  : vlSelfRef.tb_risc_v__DOT__DUT__DOT__alu_result))),32);
    bufp->chgBit(oldp+72,((1U & (vlSelfRef.tb_risc_v__DOT__DUT__DOT__imem__DOT__mem
                                 [(0x3ffU & (vlSelfRef.tb_risc_v__DOT__DUT__DOT__pc 
                                             >> 2U))] 
                                 >> 0x1eU))));
}

void Vtb_risc_v___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_risc_v___024root__trace_cleanup\n"); );
    // Init
    Vtb_risc_v___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_risc_v___024root*>(voidSelf);
    Vtb_risc_v__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
}
