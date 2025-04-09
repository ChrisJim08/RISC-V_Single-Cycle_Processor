// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vrisc_v__Syms.h"


void Vrisc_v___024root__trace_chg_0_sub_0(Vrisc_v___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vrisc_v___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrisc_v___024root__trace_chg_0\n"); );
    // Init
    Vrisc_v___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vrisc_v___024root*>(voidSelf);
    Vrisc_v__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vrisc_v___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vrisc_v___024root__trace_chg_0_sub_0(Vrisc_v___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrisc_v__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrisc_v___024root__trace_chg_0_sub_0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [2U])))) {
        bufp->chgCData(oldp+0,(vlSelfRef.risc_v__DOT__alu_op),4);
        bufp->chgCData(oldp+1,(vlSelfRef.risc_v__DOT__regf_rd_src),2);
        bufp->chgBit(oldp+2,(((0x23U == (0x7fU & vlSelfRef.risc_v__DOT__instr)) 
                              | ((3U == (0x7fU & vlSelfRef.risc_v__DOT__instr)) 
                                 | (0x13U == (0x7fU 
                                              & vlSelfRef.risc_v__DOT__instr))))));
        bufp->chgBit(oldp+3,((0x6fU == (0x7fU & vlSelfRef.risc_v__DOT__instr))));
        bufp->chgBit(oldp+4,((0x67U == (0x7fU & vlSelfRef.risc_v__DOT__instr))));
        bufp->chgBit(oldp+5,((0x63U == (0x7fU & vlSelfRef.risc_v__DOT__instr))));
        bufp->chgBit(oldp+6,((0x17U == (0x7fU & vlSelfRef.risc_v__DOT__instr))));
        bufp->chgBit(oldp+7,(((0x23U != (0x7fU & vlSelfRef.risc_v__DOT__instr)) 
                              & (0x63U != (0x7fU & vlSelfRef.risc_v__DOT__instr)))));
        bufp->chgBit(oldp+8,((0x23U == (0x7fU & vlSelfRef.risc_v__DOT__instr))));
        bufp->chgBit(oldp+9,(((0x6fU == (0x7fU & vlSelfRef.risc_v__DOT__instr)) 
                              | ((0x67U == (0x7fU & vlSelfRef.risc_v__DOT__instr)) 
                                 | (vlSelfRef.risc_v__DOT__alu_result 
                                    & (0x63U == (0x7fU 
                                                 & vlSelfRef.risc_v__DOT__instr)))))));
        bufp->chgIData(oldp+10,(vlSelfRef.risc_v__DOT__target_pc),32);
        bufp->chgIData(oldp+11,((((0x6fU == (0x7fU 
                                             & vlSelfRef.risc_v__DOT__instr)) 
                                  | ((0x67U == (0x7fU 
                                                & vlSelfRef.risc_v__DOT__instr)) 
                                     | (vlSelfRef.risc_v__DOT__alu_result 
                                        & (0x63U == 
                                           (0x7fU & vlSelfRef.risc_v__DOT__instr)))))
                                  ? vlSelfRef.risc_v__DOT__target_pc
                                  : ((IData)(4U) + vlSelfRef.risc_v__DOT__pc))),32);
        bufp->chgBit(oldp+12,((1U & vlSelfRef.risc_v__DOT__alu_result)));
        bufp->chgIData(oldp+13,(vlSelfRef.risc_v__DOT__alu_src2),32);
        bufp->chgIData(oldp+14,(vlSelfRef.risc_v__DOT__alu_result),32);
        bufp->chgIData(oldp+15,(((2U & (IData)(vlSelfRef.risc_v__DOT__regf_rd_src))
                                  ? ((1U & (IData)(vlSelfRef.risc_v__DOT__regf_rd_src))
                                      ? ((0x17U == 
                                          (0x7fU & vlSelfRef.risc_v__DOT__instr))
                                          ? vlSelfRef.risc_v__DOT__target_pc
                                          : vlSelfRef.risc_v__DOT__imm)
                                      : ((IData)(4U) 
                                         + vlSelfRef.risc_v__DOT__pc))
                                  : ((1U & (IData)(vlSelfRef.risc_v__DOT__regf_rd_src))
                                      ? ((0x4000U & vlSelfRef.risc_v__DOT__instr)
                                          ? ((0x2000U 
                                              & vlSelfRef.risc_v__DOT__instr)
                                              ? 0U : 
                                             ((0x1000U 
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
                                                  ? 
                                                 (((- (IData)(
                                                              (1U 
                                                               & ((IData)(vlSelfRef.risc_v__DOT__ld_data_ext__DOT__halfword_sel) 
                                                                  >> 0xfU)))) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.risc_v__DOT__ld_data_ext__DOT__halfword_sel))
                                                  : 
                                                 (((- (IData)(
                                                              (1U 
                                                               & ((IData)(vlSelfRef.risc_v__DOT__ld_data_ext__DOT__byte_sel) 
                                                                  >> 7U)))) 
                                                   << 8U) 
                                                  | (IData)(vlSelfRef.risc_v__DOT__ld_data_ext__DOT__byte_sel)))))
                                      : vlSelfRef.risc_v__DOT__alu_result))),32);
        bufp->chgIData(oldp+16,(vlSelfRef.risc_v__DOT__regf_rs1_data),32);
        bufp->chgIData(oldp+17,(vlSelfRef.risc_v__DOT__regfile__DOT__register_file
                                [(0x1fU & (vlSelfRef.risc_v__DOT__instr 
                                           >> 0x14U))]),32);
        bufp->chgIData(oldp+18,(((0x17U == (0x7fU & vlSelfRef.risc_v__DOT__instr))
                                  ? vlSelfRef.risc_v__DOT__target_pc
                                  : vlSelfRef.risc_v__DOT__imm)),32);
        bufp->chgIData(oldp+19,(vlSelfRef.risc_v__DOT__data_mem_r_data),32);
        bufp->chgIData(oldp+20,(vlSelfRef.risc_v__DOT__imm),32);
        bufp->chgIData(oldp+21,(vlSelfRef.risc_v__DOT__instr),32);
        bufp->chgIData(oldp+22,(((0x4000U & vlSelfRef.risc_v__DOT__instr)
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
                                              << 8U) 
                                             | (IData)(vlSelfRef.risc_v__DOT__ld_data_ext__DOT__byte_sel)))))),32);
        bufp->chgSData(oldp+23,(vlSelfRef.risc_v__DOT__imem_addr),10);
        bufp->chgCData(oldp+24,((0x7fU & vlSelfRef.risc_v__DOT__instr)),7);
        bufp->chgCData(oldp+25,((7U & (vlSelfRef.risc_v__DOT__instr 
                                       >> 0xcU))),3);
        bufp->chgBit(oldp+26,((1U & (vlSelfRef.risc_v__DOT__instr 
                                     >> 0x1eU))));
        bufp->chgCData(oldp+27,((0x1fU & (vlSelfRef.risc_v__DOT__instr 
                                          >> 7U))),5);
        bufp->chgCData(oldp+28,((0x1fU & (vlSelfRef.risc_v__DOT__instr 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+29,((0x1fU & (vlSelfRef.risc_v__DOT__instr 
                                          >> 0x14U))),5);
        bufp->chgBit(oldp+30,((1U & (vlSelfRef.risc_v__DOT__imem__DOT__mem
                                     [vlSelfRef.risc_v__DOT__imem_addr] 
                                     >> 0x1eU))));
        bufp->chgIData(oldp+31,(vlSelfRef.risc_v__DOT__ctrl_flow_unit__DOT__base_addr),32);
        bufp->chgSData(oldp+32,((0x3ffU & (vlSelfRef.risc_v__DOT__alu_result 
                                           >> 2U))),10);
        bufp->chgCData(oldp+33,((3U & vlSelfRef.risc_v__DOT__alu_result)),2);
        bufp->chgCData(oldp+34,(vlSelfRef.risc_v__DOT__ld_data_ext__DOT__byte_sel),8);
        bufp->chgSData(oldp+35,(vlSelfRef.risc_v__DOT__ld_data_ext__DOT__halfword_sel),16);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+36,(vlSelfRef.risc_v__DOT__pc),32);
        bufp->chgIData(oldp+37,(((IData)(4U) + vlSelfRef.risc_v__DOT__pc)),32);
        bufp->chgIData(oldp+38,(vlSelfRef.risc_v__DOT__regfile__DOT__i),32);
        bufp->chgIData(oldp+39,(vlSelfRef.risc_v__DOT__regfile__DOT__register_file[0]),32);
        bufp->chgIData(oldp+40,(vlSelfRef.risc_v__DOT__regfile__DOT__register_file[1]),32);
        bufp->chgIData(oldp+41,(vlSelfRef.risc_v__DOT__regfile__DOT__register_file[2]),32);
        bufp->chgIData(oldp+42,(vlSelfRef.risc_v__DOT__regfile__DOT__register_file[3]),32);
        bufp->chgIData(oldp+43,(vlSelfRef.risc_v__DOT__regfile__DOT__register_file[4]),32);
        bufp->chgIData(oldp+44,(vlSelfRef.risc_v__DOT__regfile__DOT__register_file[5]),32);
        bufp->chgIData(oldp+45,(vlSelfRef.risc_v__DOT__regfile__DOT__register_file[6]),32);
        bufp->chgIData(oldp+46,(vlSelfRef.risc_v__DOT__regfile__DOT__register_file[7]),32);
        bufp->chgIData(oldp+47,(vlSelfRef.risc_v__DOT__regfile__DOT__register_file[8]),32);
        bufp->chgIData(oldp+48,(vlSelfRef.risc_v__DOT__regfile__DOT__register_file[9]),32);
        bufp->chgIData(oldp+49,(vlSelfRef.risc_v__DOT__regfile__DOT__register_file[10]),32);
        bufp->chgIData(oldp+50,(vlSelfRef.risc_v__DOT__regfile__DOT__register_file[11]),32);
        bufp->chgIData(oldp+51,(vlSelfRef.risc_v__DOT__regfile__DOT__register_file[12]),32);
        bufp->chgIData(oldp+52,(vlSelfRef.risc_v__DOT__regfile__DOT__register_file[13]),32);
        bufp->chgIData(oldp+53,(vlSelfRef.risc_v__DOT__regfile__DOT__register_file[14]),32);
        bufp->chgIData(oldp+54,(vlSelfRef.risc_v__DOT__regfile__DOT__register_file[15]),32);
        bufp->chgIData(oldp+55,(vlSelfRef.risc_v__DOT__regfile__DOT__register_file[16]),32);
        bufp->chgIData(oldp+56,(vlSelfRef.risc_v__DOT__regfile__DOT__register_file[17]),32);
        bufp->chgIData(oldp+57,(vlSelfRef.risc_v__DOT__regfile__DOT__register_file[18]),32);
        bufp->chgIData(oldp+58,(vlSelfRef.risc_v__DOT__regfile__DOT__register_file[19]),32);
        bufp->chgIData(oldp+59,(vlSelfRef.risc_v__DOT__regfile__DOT__register_file[20]),32);
        bufp->chgIData(oldp+60,(vlSelfRef.risc_v__DOT__regfile__DOT__register_file[21]),32);
        bufp->chgIData(oldp+61,(vlSelfRef.risc_v__DOT__regfile__DOT__register_file[22]),32);
        bufp->chgIData(oldp+62,(vlSelfRef.risc_v__DOT__regfile__DOT__register_file[23]),32);
        bufp->chgIData(oldp+63,(vlSelfRef.risc_v__DOT__regfile__DOT__register_file[24]),32);
        bufp->chgIData(oldp+64,(vlSelfRef.risc_v__DOT__regfile__DOT__register_file[25]),32);
        bufp->chgIData(oldp+65,(vlSelfRef.risc_v__DOT__regfile__DOT__register_file[26]),32);
        bufp->chgIData(oldp+66,(vlSelfRef.risc_v__DOT__regfile__DOT__register_file[27]),32);
        bufp->chgIData(oldp+67,(vlSelfRef.risc_v__DOT__regfile__DOT__register_file[28]),32);
        bufp->chgIData(oldp+68,(vlSelfRef.risc_v__DOT__regfile__DOT__register_file[29]),32);
        bufp->chgIData(oldp+69,(vlSelfRef.risc_v__DOT__regfile__DOT__register_file[30]),32);
        bufp->chgIData(oldp+70,(vlSelfRef.risc_v__DOT__regfile__DOT__register_file[31]),32);
    }
    bufp->chgBit(oldp+71,(vlSelfRef.clk_i));
    bufp->chgBit(oldp+72,(vlSelfRef.rst_i));
    bufp->chgBit(oldp+73,(vlSelfRef.imem_ld_i));
    bufp->chgSData(oldp+74,(vlSelfRef.imem_ld_addr_i),10);
    bufp->chgIData(oldp+75,(vlSelfRef.imem_ld_data_i),32);
}

void Vrisc_v___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrisc_v___024root__trace_cleanup\n"); );
    // Init
    Vrisc_v___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vrisc_v___024root*>(voidSelf);
    Vrisc_v__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
