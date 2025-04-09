// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrisc_v.h for the primary calling header

#include "Vrisc_v__pch.h"
#include "Vrisc_v___024root.h"

void Vrisc_v___024root___ico_sequent__TOP__0(Vrisc_v___024root* vlSelf);

void Vrisc_v___024root___eval_ico(Vrisc_v___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrisc_v__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrisc_v___024root___eval_ico\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vrisc_v___024root___ico_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
}

extern const VlUnpacked<CData/*1:0*/, 2048> Vrisc_v__ConstPool__TABLE_h5257d03f_0;
extern const VlUnpacked<CData/*3:0*/, 2048> Vrisc_v__ConstPool__TABLE_h93cde9b4_0;

VL_INLINE_OPT void Vrisc_v___024root___ico_sequent__TOP__0(Vrisc_v___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrisc_v__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrisc_v___024root___ico_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*10:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelfRef.risc_v__DOT__imem_addr = (0x3ffU & ((IData)(vlSelfRef.imem_ld_i)
                                                   ? (IData)(vlSelfRef.imem_ld_addr_i)
                                                   : 
                                                  (vlSelfRef.risc_v__DOT__pc 
                                                   >> 2U)));
    vlSelfRef.risc_v__DOT__instr = vlSelfRef.risc_v__DOT__imem__DOT__mem
        [vlSelfRef.risc_v__DOT__imem_addr];
    __Vtableidx1 = ((0x400U & (vlSelfRef.risc_v__DOT__imem__DOT__mem
                               [vlSelfRef.risc_v__DOT__imem_addr] 
                               >> 0x14U)) | ((0x380U 
                                              & (vlSelfRef.risc_v__DOT__instr 
                                                 >> 5U)) 
                                             | (0x7fU 
                                                & vlSelfRef.risc_v__DOT__instr)));
    vlSelfRef.risc_v__DOT__regf_rd_src = Vrisc_v__ConstPool__TABLE_h5257d03f_0
        [__Vtableidx1];
    vlSelfRef.risc_v__DOT__alu_op = Vrisc_v__ConstPool__TABLE_h93cde9b4_0
        [__Vtableidx1];
    vlSelfRef.risc_v__DOT__imm = ((0x40U & vlSelfRef.risc_v__DOT__instr)
                                   ? ((0x20U & vlSelfRef.risc_v__DOT__instr)
                                       ? ((0x10U & vlSelfRef.risc_v__DOT__instr)
                                           ? 0U : (
                                                   (8U 
                                                    & vlSelfRef.risc_v__DOT__instr)
                                                    ? 
                                                   ((4U 
                                                     & vlSelfRef.risc_v__DOT__instr)
                                                     ? 
                                                    ((2U 
                                                      & vlSelfRef.risc_v__DOT__instr)
                                                      ? 
                                                     ((1U 
                                                       & vlSelfRef.risc_v__DOT__instr)
                                                       ? 
                                                      (((- (IData)(
                                                                   (vlSelfRef.risc_v__DOT__instr 
                                                                    >> 0x1fU))) 
                                                        << 0x14U) 
                                                       | (((0xff000U 
                                                            & vlSelfRef.risc_v__DOT__instr) 
                                                           | (0x800U 
                                                              & (vlSelfRef.risc_v__DOT__instr 
                                                                 >> 9U))) 
                                                          | (0x7feU 
                                                             & (vlSelfRef.risc_v__DOT__instr 
                                                                >> 0x14U))))
                                                       : 0U)
                                                      : 0U)
                                                     : 0U)
                                                    : 
                                                   ((4U 
                                                     & vlSelfRef.risc_v__DOT__instr)
                                                     ? 
                                                    ((2U 
                                                      & vlSelfRef.risc_v__DOT__instr)
                                                      ? 
                                                     ((1U 
                                                       & vlSelfRef.risc_v__DOT__instr)
                                                       ? 
                                                      (((- (IData)(
                                                                   (vlSelfRef.risc_v__DOT__instr 
                                                                    >> 0x1fU))) 
                                                        << 0xcU) 
                                                       | (vlSelfRef.risc_v__DOT__instr 
                                                          >> 0x14U))
                                                       : 0U)
                                                      : 0U)
                                                     : 
                                                    ((2U 
                                                      & vlSelfRef.risc_v__DOT__instr)
                                                      ? 
                                                     ((1U 
                                                       & vlSelfRef.risc_v__DOT__instr)
                                                       ? 
                                                      (((- (IData)(
                                                                   (vlSelfRef.risc_v__DOT__instr 
                                                                    >> 0x1fU))) 
                                                        << 0xcU) 
                                                       | ((0x800U 
                                                           & (vlSelfRef.risc_v__DOT__instr 
                                                              << 4U)) 
                                                          | ((0x7e0U 
                                                              & (vlSelfRef.risc_v__DOT__instr 
                                                                 >> 0x14U)) 
                                                             | (0x1eU 
                                                                & (vlSelfRef.risc_v__DOT__instr 
                                                                   >> 7U)))))
                                                       : 0U)
                                                      : 0U))))
                                       : 0U) : ((0x20U 
                                                 & vlSelfRef.risc_v__DOT__instr)
                                                 ? 
                                                ((0x10U 
                                                  & vlSelfRef.risc_v__DOT__instr)
                                                  ? 
                                                 ((8U 
                                                   & vlSelfRef.risc_v__DOT__instr)
                                                   ? 0U
                                                   : 
                                                  ((4U 
                                                    & vlSelfRef.risc_v__DOT__instr)
                                                    ? 
                                                   ((2U 
                                                     & vlSelfRef.risc_v__DOT__instr)
                                                     ? 
                                                    ((1U 
                                                      & vlSelfRef.risc_v__DOT__instr)
                                                      ? 
                                                     (0xfffff000U 
                                                      & vlSelfRef.risc_v__DOT__instr)
                                                      : 0U)
                                                     : 0U)
                                                    : 0U))
                                                  : 
                                                 ((8U 
                                                   & vlSelfRef.risc_v__DOT__instr)
                                                   ? 0U
                                                   : 
                                                  ((4U 
                                                    & vlSelfRef.risc_v__DOT__instr)
                                                    ? 0U
                                                    : 
                                                   ((2U 
                                                     & vlSelfRef.risc_v__DOT__instr)
                                                     ? 
                                                    ((1U 
                                                      & vlSelfRef.risc_v__DOT__instr)
                                                      ? 
                                                     (((- (IData)(
                                                                  (vlSelfRef.risc_v__DOT__instr 
                                                                   >> 0x1fU))) 
                                                       << 0xcU) 
                                                      | ((0xfe0U 
                                                          & (vlSelfRef.risc_v__DOT__instr 
                                                             >> 0x14U)) 
                                                         | (0x1fU 
                                                            & (vlSelfRef.risc_v__DOT__instr 
                                                               >> 7U))))
                                                      : 0U)
                                                     : 0U))))
                                                 : 
                                                ((0x10U 
                                                  & vlSelfRef.risc_v__DOT__instr)
                                                  ? 
                                                 ((8U 
                                                   & vlSelfRef.risc_v__DOT__instr)
                                                   ? 0U
                                                   : 
                                                  ((4U 
                                                    & vlSelfRef.risc_v__DOT__instr)
                                                    ? 
                                                   ((2U 
                                                     & vlSelfRef.risc_v__DOT__instr)
                                                     ? 
                                                    ((1U 
                                                      & vlSelfRef.risc_v__DOT__instr)
                                                      ? 
                                                     (0xfffff000U 
                                                      & vlSelfRef.risc_v__DOT__instr)
                                                      : 0U)
                                                     : 0U)
                                                    : 
                                                   ((2U 
                                                     & vlSelfRef.risc_v__DOT__instr)
                                                     ? 
                                                    ((1U 
                                                      & vlSelfRef.risc_v__DOT__instr)
                                                      ? 
                                                     (((- (IData)(
                                                                  (vlSelfRef.risc_v__DOT__instr 
                                                                   >> 0x1fU))) 
                                                       << 0xcU) 
                                                      | (vlSelfRef.risc_v__DOT__instr 
                                                         >> 0x14U))
                                                      : 0U)
                                                     : 0U)))
                                                  : 
                                                 ((8U 
                                                   & vlSelfRef.risc_v__DOT__instr)
                                                   ? 0U
                                                   : 
                                                  ((4U 
                                                    & vlSelfRef.risc_v__DOT__instr)
                                                    ? 0U
                                                    : 
                                                   ((2U 
                                                     & vlSelfRef.risc_v__DOT__instr)
                                                     ? 
                                                    ((1U 
                                                      & vlSelfRef.risc_v__DOT__instr)
                                                      ? 
                                                     (((- (IData)(
                                                                  (vlSelfRef.risc_v__DOT__instr 
                                                                   >> 0x1fU))) 
                                                       << 0xcU) 
                                                      | (vlSelfRef.risc_v__DOT__instr 
                                                         >> 0x14U))
                                                      : 0U)
                                                     : 0U))))));
    vlSelfRef.risc_v__DOT__regf_rs1_data = vlSelfRef.risc_v__DOT__regfile__DOT__register_file
        [(0x1fU & (vlSelfRef.risc_v__DOT__instr >> 0xfU))];
    vlSelfRef.risc_v__DOT__alu_src2 = (((0x23U == (0x7fU 
                                                   & vlSelfRef.risc_v__DOT__instr)) 
                                        | ((3U == (0x7fU 
                                                   & vlSelfRef.risc_v__DOT__instr)) 
                                           | (0x13U 
                                              == (0x7fU 
                                                  & vlSelfRef.risc_v__DOT__instr))))
                                        ? vlSelfRef.risc_v__DOT__imm
                                        : vlSelfRef.risc_v__DOT__regfile__DOT__register_file
                                       [(0x1fU & (vlSelfRef.risc_v__DOT__instr 
                                                  >> 0x14U))]);
    vlSelfRef.risc_v__DOT__ctrl_flow_unit__DOT__base_addr 
        = vlSelfRef.risc_v__DOT__pc;
    if ((0x67U == (0x7fU & vlSelfRef.risc_v__DOT__instr))) {
        vlSelfRef.risc_v__DOT__ctrl_flow_unit__DOT__base_addr 
            = vlSelfRef.risc_v__DOT__regf_rs1_data;
    }
    vlSelfRef.risc_v__DOT__alu_result = ((8U & (IData)(vlSelfRef.risc_v__DOT__alu_op))
                                          ? ((4U & (IData)(vlSelfRef.risc_v__DOT__alu_op))
                                              ? ((2U 
                                                  & (IData)(vlSelfRef.risc_v__DOT__alu_op))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.risc_v__DOT__alu_op))
                                                   ? 
                                                  ((vlSelfRef.risc_v__DOT__regf_rs1_data 
                                                    >= vlSelfRef.risc_v__DOT__alu_src2)
                                                    ? 1U
                                                    : 0U)
                                                   : 
                                                  ((vlSelfRef.risc_v__DOT__regf_rs1_data 
                                                    < vlSelfRef.risc_v__DOT__alu_src2)
                                                    ? 1U
                                                    : 0U))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.risc_v__DOT__alu_op))
                                                   ? 
                                                  (VL_GTES_III(32, vlSelfRef.risc_v__DOT__regf_rs1_data, vlSelfRef.risc_v__DOT__alu_src2)
                                                    ? 1U
                                                    : 0U)
                                                   : 
                                                  (VL_LTS_III(32, vlSelfRef.risc_v__DOT__regf_rs1_data, vlSelfRef.risc_v__DOT__alu_src2)
                                                    ? 1U
                                                    : 0U)))
                                              : ((2U 
                                                  & (IData)(vlSelfRef.risc_v__DOT__alu_op))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.risc_v__DOT__alu_op))
                                                   ? 
                                                  ((vlSelfRef.risc_v__DOT__regf_rs1_data 
                                                    != vlSelfRef.risc_v__DOT__alu_src2)
                                                    ? 1U
                                                    : 0U)
                                                   : 
                                                  ((vlSelfRef.risc_v__DOT__regf_rs1_data 
                                                    == vlSelfRef.risc_v__DOT__alu_src2)
                                                    ? 1U
                                                    : 0U))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.risc_v__DOT__alu_op))
                                                   ? 
                                                  ((vlSelfRef.risc_v__DOT__regf_rs1_data 
                                                    < vlSelfRef.risc_v__DOT__alu_src2)
                                                    ? 1U
                                                    : 0U)
                                                   : 
                                                  (VL_LTS_III(32, vlSelfRef.risc_v__DOT__regf_rs1_data, vlSelfRef.risc_v__DOT__alu_src2)
                                                    ? 1U
                                                    : 0U))))
                                          : ((4U & (IData)(vlSelfRef.risc_v__DOT__alu_op))
                                              ? ((2U 
                                                  & (IData)(vlSelfRef.risc_v__DOT__alu_op))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.risc_v__DOT__alu_op))
                                                   ? 
                                                  VL_SHIFTRS_III(32,32,32, vlSelfRef.risc_v__DOT__regf_rs1_data, vlSelfRef.risc_v__DOT__alu_src2)
                                                   : 
                                                  VL_SHIFTR_III(32,32,32, vlSelfRef.risc_v__DOT__regf_rs1_data, vlSelfRef.risc_v__DOT__alu_src2))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.risc_v__DOT__alu_op))
                                                   ? 
                                                  VL_SHIFTL_III(32,32,32, vlSelfRef.risc_v__DOT__regf_rs1_data, vlSelfRef.risc_v__DOT__alu_src2)
                                                   : 
                                                  (vlSelfRef.risc_v__DOT__regf_rs1_data 
                                                   & vlSelfRef.risc_v__DOT__alu_src2)))
                                              : ((2U 
                                                  & (IData)(vlSelfRef.risc_v__DOT__alu_op))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.risc_v__DOT__alu_op))
                                                   ? 
                                                  (vlSelfRef.risc_v__DOT__regf_rs1_data 
                                                   | vlSelfRef.risc_v__DOT__alu_src2)
                                                   : 
                                                  (vlSelfRef.risc_v__DOT__regf_rs1_data 
                                                   ^ vlSelfRef.risc_v__DOT__alu_src2))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.risc_v__DOT__alu_op))
                                                   ? 
                                                  (vlSelfRef.risc_v__DOT__regf_rs1_data 
                                                   - vlSelfRef.risc_v__DOT__alu_src2)
                                                   : 
                                                  (vlSelfRef.risc_v__DOT__regf_rs1_data 
                                                   + vlSelfRef.risc_v__DOT__alu_src2)))));
    vlSelfRef.risc_v__DOT__target_pc = (vlSelfRef.risc_v__DOT__ctrl_flow_unit__DOT__base_addr 
                                        + vlSelfRef.risc_v__DOT__imm);
    vlSelfRef.risc_v__DOT__data_mem_r_data = vlSelfRef.risc_v__DOT__dmem__DOT__mem
        [(0x3ffU & (vlSelfRef.risc_v__DOT__alu_result 
                    >> 2U))];
    vlSelfRef.risc_v__DOT__next_pc = (((0x6fU == (0x7fU 
                                                  & vlSelfRef.risc_v__DOT__instr)) 
                                       | ((0x67U == 
                                           (0x7fU & vlSelfRef.risc_v__DOT__instr)) 
                                          | (vlSelfRef.risc_v__DOT__alu_result 
                                             & (0x63U 
                                                == 
                                                (0x7fU 
                                                 & vlSelfRef.risc_v__DOT__instr)))))
                                       ? vlSelfRef.risc_v__DOT__target_pc
                                       : ((IData)(4U) 
                                          + vlSelfRef.risc_v__DOT__pc));
    if ((2U & vlSelfRef.risc_v__DOT__alu_result)) {
        vlSelfRef.risc_v__DOT__ld_data_ext__DOT__byte_sel 
            = (0xffU & ((1U & vlSelfRef.risc_v__DOT__alu_result)
                         ? (vlSelfRef.risc_v__DOT__data_mem_r_data 
                            >> 0x18U) : (vlSelfRef.risc_v__DOT__data_mem_r_data 
                                         >> 0x10U)));
        if ((2U & vlSelfRef.risc_v__DOT__alu_result)) {
            vlSelfRef.risc_v__DOT__ld_data_ext__DOT__halfword_sel 
                = (vlSelfRef.risc_v__DOT__data_mem_r_data 
                   >> 0x10U);
        }
    } else {
        vlSelfRef.risc_v__DOT__ld_data_ext__DOT__byte_sel 
            = (0xffU & ((1U & vlSelfRef.risc_v__DOT__alu_result)
                         ? (vlSelfRef.risc_v__DOT__data_mem_r_data 
                            >> 8U) : vlSelfRef.risc_v__DOT__data_mem_r_data));
        vlSelfRef.risc_v__DOT__ld_data_ext__DOT__halfword_sel 
            = (0xffffU & vlSelfRef.risc_v__DOT__data_mem_r_data);
    }
}

void Vrisc_v___024root___eval_triggers__ico(Vrisc_v___024root* vlSelf);

bool Vrisc_v___024root___eval_phase__ico(Vrisc_v___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrisc_v__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrisc_v___024root___eval_phase__ico\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vrisc_v___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vrisc_v___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vrisc_v___024root___eval_act(Vrisc_v___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrisc_v__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrisc_v___024root___eval_act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vrisc_v___024root___nba_sequent__TOP__0(Vrisc_v___024root* vlSelf);

void Vrisc_v___024root___eval_nba(Vrisc_v___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrisc_v__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrisc_v___024root___eval_nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vrisc_v___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
}

VL_INLINE_OPT void Vrisc_v___024root___nba_sequent__TOP__0(Vrisc_v___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrisc_v__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrisc_v___024root___nba_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*10:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    IData/*31:0*/ __VdlyVal__risc_v__DOT__imem__DOT__mem__v0;
    __VdlyVal__risc_v__DOT__imem__DOT__mem__v0 = 0;
    SData/*9:0*/ __VdlyDim0__risc_v__DOT__imem__DOT__mem__v0;
    __VdlyDim0__risc_v__DOT__imem__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__risc_v__DOT__imem__DOT__mem__v0;
    __VdlySet__risc_v__DOT__imem__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__risc_v__DOT__regfile__DOT__register_file__v0;
    __VdlySet__risc_v__DOT__regfile__DOT__register_file__v0 = 0;
    IData/*31:0*/ __VdlyVal__risc_v__DOT__regfile__DOT__register_file__v31;
    __VdlyVal__risc_v__DOT__regfile__DOT__register_file__v31 = 0;
    CData/*4:0*/ __VdlyDim0__risc_v__DOT__regfile__DOT__register_file__v31;
    __VdlyDim0__risc_v__DOT__regfile__DOT__register_file__v31 = 0;
    CData/*0:0*/ __VdlySet__risc_v__DOT__regfile__DOT__register_file__v31;
    __VdlySet__risc_v__DOT__regfile__DOT__register_file__v31 = 0;
    IData/*31:0*/ __VdlyVal__risc_v__DOT__dmem__DOT__mem__v0;
    __VdlyVal__risc_v__DOT__dmem__DOT__mem__v0 = 0;
    SData/*9:0*/ __VdlyDim0__risc_v__DOT__dmem__DOT__mem__v0;
    __VdlyDim0__risc_v__DOT__dmem__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__risc_v__DOT__dmem__DOT__mem__v0;
    __VdlySet__risc_v__DOT__dmem__DOT__mem__v0 = 0;
    // Body
    __VdlySet__risc_v__DOT__dmem__DOT__mem__v0 = 0U;
    __VdlySet__risc_v__DOT__imem__DOT__mem__v0 = 0U;
    __VdlySet__risc_v__DOT__regfile__DOT__register_file__v0 = 0U;
    __VdlySet__risc_v__DOT__regfile__DOT__register_file__v31 = 0U;
    if (vlSelfRef.rst_i) {
        vlSelfRef.risc_v__DOT__regfile__DOT__i = 0x20U;
        __VdlySet__risc_v__DOT__regfile__DOT__register_file__v0 = 1U;
        vlSelfRef.risc_v__DOT__pc = 0U;
    } else {
        if ((((0x23U != (0x7fU & vlSelfRef.risc_v__DOT__instr)) 
              & (0x63U != (0x7fU & vlSelfRef.risc_v__DOT__instr))) 
             & (0U != (0x1fU & (vlSelfRef.risc_v__DOT__instr 
                                >> 7U))))) {
            __VdlyVal__risc_v__DOT__regfile__DOT__register_file__v31 
                = ((2U & (IData)(vlSelfRef.risc_v__DOT__regf_rd_src))
                    ? ((1U & (IData)(vlSelfRef.risc_v__DOT__regf_rd_src))
                        ? ((0x17U == (0x7fU & vlSelfRef.risc_v__DOT__instr))
                            ? vlSelfRef.risc_v__DOT__target_pc
                            : vlSelfRef.risc_v__DOT__imm)
                        : ((IData)(4U) + vlSelfRef.risc_v__DOT__pc))
                    : ((1U & (IData)(vlSelfRef.risc_v__DOT__regf_rd_src))
                        ? ((0x4000U & vlSelfRef.risc_v__DOT__instr)
                            ? ((0x2000U & vlSelfRef.risc_v__DOT__instr)
                                ? 0U : ((0x1000U & vlSelfRef.risc_v__DOT__instr)
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
                                        << 0x10U) | (IData)(vlSelfRef.risc_v__DOT__ld_data_ext__DOT__halfword_sel))
                                    : (((- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelfRef.risc_v__DOT__ld_data_ext__DOT__byte_sel) 
                                                       >> 7U)))) 
                                        << 8U) | (IData)(vlSelfRef.risc_v__DOT__ld_data_ext__DOT__byte_sel)))))
                        : vlSelfRef.risc_v__DOT__alu_result));
            __VdlyDim0__risc_v__DOT__regfile__DOT__register_file__v31 
                = (0x1fU & (vlSelfRef.risc_v__DOT__instr 
                            >> 7U));
            __VdlySet__risc_v__DOT__regfile__DOT__register_file__v31 = 1U;
        }
        vlSelfRef.risc_v__DOT__pc = vlSelfRef.risc_v__DOT__next_pc;
    }
    if ((0x23U == (0x7fU & vlSelfRef.risc_v__DOT__instr))) {
        __VdlyVal__risc_v__DOT__dmem__DOT__mem__v0 
            = vlSelfRef.risc_v__DOT__regfile__DOT__register_file
            [(0x1fU & (vlSelfRef.risc_v__DOT__instr 
                       >> 0x14U))];
        __VdlyDim0__risc_v__DOT__dmem__DOT__mem__v0 
            = (0x3ffU & (vlSelfRef.risc_v__DOT__alu_result 
                         >> 2U));
        __VdlySet__risc_v__DOT__dmem__DOT__mem__v0 = 1U;
    }
    if (vlSelfRef.imem_ld_i) {
        __VdlyVal__risc_v__DOT__imem__DOT__mem__v0 
            = vlSelfRef.imem_ld_data_i;
        __VdlyDim0__risc_v__DOT__imem__DOT__mem__v0 
            = vlSelfRef.risc_v__DOT__imem_addr;
        __VdlySet__risc_v__DOT__imem__DOT__mem__v0 = 1U;
        vlSelfRef.risc_v__DOT__imem_addr = (0x3ffU 
                                            & (IData)(vlSelfRef.imem_ld_addr_i));
    } else {
        vlSelfRef.risc_v__DOT__imem_addr = (0x3ffU 
                                            & (vlSelfRef.risc_v__DOT__pc 
                                               >> 2U));
    }
    if (__VdlySet__risc_v__DOT__dmem__DOT__mem__v0) {
        vlSelfRef.risc_v__DOT__dmem__DOT__mem[__VdlyDim0__risc_v__DOT__dmem__DOT__mem__v0] 
            = __VdlyVal__risc_v__DOT__dmem__DOT__mem__v0;
    }
    if (__VdlySet__risc_v__DOT__imem__DOT__mem__v0) {
        vlSelfRef.risc_v__DOT__imem__DOT__mem[__VdlyDim0__risc_v__DOT__imem__DOT__mem__v0] 
            = __VdlyVal__risc_v__DOT__imem__DOT__mem__v0;
    }
    if (__VdlySet__risc_v__DOT__regfile__DOT__register_file__v0) {
        vlSelfRef.risc_v__DOT__regfile__DOT__register_file[1U] = 0U;
        vlSelfRef.risc_v__DOT__regfile__DOT__register_file[2U] = 0U;
        vlSelfRef.risc_v__DOT__regfile__DOT__register_file[3U] = 0U;
        vlSelfRef.risc_v__DOT__regfile__DOT__register_file[4U] = 0U;
        vlSelfRef.risc_v__DOT__regfile__DOT__register_file[5U] = 0U;
        vlSelfRef.risc_v__DOT__regfile__DOT__register_file[6U] = 0U;
        vlSelfRef.risc_v__DOT__regfile__DOT__register_file[7U] = 0U;
        vlSelfRef.risc_v__DOT__regfile__DOT__register_file[8U] = 0U;
        vlSelfRef.risc_v__DOT__regfile__DOT__register_file[9U] = 0U;
        vlSelfRef.risc_v__DOT__regfile__DOT__register_file[0xaU] = 0U;
        vlSelfRef.risc_v__DOT__regfile__DOT__register_file[0xbU] = 0U;
        vlSelfRef.risc_v__DOT__regfile__DOT__register_file[0xcU] = 0U;
        vlSelfRef.risc_v__DOT__regfile__DOT__register_file[0xdU] = 0U;
        vlSelfRef.risc_v__DOT__regfile__DOT__register_file[0xeU] = 0U;
        vlSelfRef.risc_v__DOT__regfile__DOT__register_file[0xfU] = 0U;
        vlSelfRef.risc_v__DOT__regfile__DOT__register_file[0x10U] = 0U;
        vlSelfRef.risc_v__DOT__regfile__DOT__register_file[0x11U] = 0U;
        vlSelfRef.risc_v__DOT__regfile__DOT__register_file[0x12U] = 0U;
        vlSelfRef.risc_v__DOT__regfile__DOT__register_file[0x13U] = 0U;
        vlSelfRef.risc_v__DOT__regfile__DOT__register_file[0x14U] = 0U;
        vlSelfRef.risc_v__DOT__regfile__DOT__register_file[0x15U] = 0U;
        vlSelfRef.risc_v__DOT__regfile__DOT__register_file[0x16U] = 0U;
        vlSelfRef.risc_v__DOT__regfile__DOT__register_file[0x17U] = 0U;
        vlSelfRef.risc_v__DOT__regfile__DOT__register_file[0x18U] = 0U;
        vlSelfRef.risc_v__DOT__regfile__DOT__register_file[0x19U] = 0U;
        vlSelfRef.risc_v__DOT__regfile__DOT__register_file[0x1aU] = 0U;
        vlSelfRef.risc_v__DOT__regfile__DOT__register_file[0x1bU] = 0U;
        vlSelfRef.risc_v__DOT__regfile__DOT__register_file[0x1cU] = 0U;
        vlSelfRef.risc_v__DOT__regfile__DOT__register_file[0x1dU] = 0U;
        vlSelfRef.risc_v__DOT__regfile__DOT__register_file[0x1eU] = 0U;
        vlSelfRef.risc_v__DOT__regfile__DOT__register_file[0x1fU] = 0U;
    }
    if (__VdlySet__risc_v__DOT__regfile__DOT__register_file__v31) {
        vlSelfRef.risc_v__DOT__regfile__DOT__register_file[__VdlyDim0__risc_v__DOT__regfile__DOT__register_file__v31] 
            = __VdlyVal__risc_v__DOT__regfile__DOT__register_file__v31;
    }
    vlSelfRef.risc_v__DOT__instr = vlSelfRef.risc_v__DOT__imem__DOT__mem
        [vlSelfRef.risc_v__DOT__imem_addr];
    __Vtableidx1 = ((0x400U & (vlSelfRef.risc_v__DOT__imem__DOT__mem
                               [vlSelfRef.risc_v__DOT__imem_addr] 
                               >> 0x14U)) | ((0x380U 
                                              & (vlSelfRef.risc_v__DOT__instr 
                                                 >> 5U)) 
                                             | (0x7fU 
                                                & vlSelfRef.risc_v__DOT__instr)));
    vlSelfRef.risc_v__DOT__regf_rd_src = Vrisc_v__ConstPool__TABLE_h5257d03f_0
        [__Vtableidx1];
    vlSelfRef.risc_v__DOT__alu_op = Vrisc_v__ConstPool__TABLE_h93cde9b4_0
        [__Vtableidx1];
    vlSelfRef.risc_v__DOT__imm = ((0x40U & vlSelfRef.risc_v__DOT__instr)
                                   ? ((0x20U & vlSelfRef.risc_v__DOT__instr)
                                       ? ((0x10U & vlSelfRef.risc_v__DOT__instr)
                                           ? 0U : (
                                                   (8U 
                                                    & vlSelfRef.risc_v__DOT__instr)
                                                    ? 
                                                   ((4U 
                                                     & vlSelfRef.risc_v__DOT__instr)
                                                     ? 
                                                    ((2U 
                                                      & vlSelfRef.risc_v__DOT__instr)
                                                      ? 
                                                     ((1U 
                                                       & vlSelfRef.risc_v__DOT__instr)
                                                       ? 
                                                      (((- (IData)(
                                                                   (vlSelfRef.risc_v__DOT__instr 
                                                                    >> 0x1fU))) 
                                                        << 0x14U) 
                                                       | (((0xff000U 
                                                            & vlSelfRef.risc_v__DOT__instr) 
                                                           | (0x800U 
                                                              & (vlSelfRef.risc_v__DOT__instr 
                                                                 >> 9U))) 
                                                          | (0x7feU 
                                                             & (vlSelfRef.risc_v__DOT__instr 
                                                                >> 0x14U))))
                                                       : 0U)
                                                      : 0U)
                                                     : 0U)
                                                    : 
                                                   ((4U 
                                                     & vlSelfRef.risc_v__DOT__instr)
                                                     ? 
                                                    ((2U 
                                                      & vlSelfRef.risc_v__DOT__instr)
                                                      ? 
                                                     ((1U 
                                                       & vlSelfRef.risc_v__DOT__instr)
                                                       ? 
                                                      (((- (IData)(
                                                                   (vlSelfRef.risc_v__DOT__instr 
                                                                    >> 0x1fU))) 
                                                        << 0xcU) 
                                                       | (vlSelfRef.risc_v__DOT__instr 
                                                          >> 0x14U))
                                                       : 0U)
                                                      : 0U)
                                                     : 
                                                    ((2U 
                                                      & vlSelfRef.risc_v__DOT__instr)
                                                      ? 
                                                     ((1U 
                                                       & vlSelfRef.risc_v__DOT__instr)
                                                       ? 
                                                      (((- (IData)(
                                                                   (vlSelfRef.risc_v__DOT__instr 
                                                                    >> 0x1fU))) 
                                                        << 0xcU) 
                                                       | ((0x800U 
                                                           & (vlSelfRef.risc_v__DOT__instr 
                                                              << 4U)) 
                                                          | ((0x7e0U 
                                                              & (vlSelfRef.risc_v__DOT__instr 
                                                                 >> 0x14U)) 
                                                             | (0x1eU 
                                                                & (vlSelfRef.risc_v__DOT__instr 
                                                                   >> 7U)))))
                                                       : 0U)
                                                      : 0U))))
                                       : 0U) : ((0x20U 
                                                 & vlSelfRef.risc_v__DOT__instr)
                                                 ? 
                                                ((0x10U 
                                                  & vlSelfRef.risc_v__DOT__instr)
                                                  ? 
                                                 ((8U 
                                                   & vlSelfRef.risc_v__DOT__instr)
                                                   ? 0U
                                                   : 
                                                  ((4U 
                                                    & vlSelfRef.risc_v__DOT__instr)
                                                    ? 
                                                   ((2U 
                                                     & vlSelfRef.risc_v__DOT__instr)
                                                     ? 
                                                    ((1U 
                                                      & vlSelfRef.risc_v__DOT__instr)
                                                      ? 
                                                     (0xfffff000U 
                                                      & vlSelfRef.risc_v__DOT__instr)
                                                      : 0U)
                                                     : 0U)
                                                    : 0U))
                                                  : 
                                                 ((8U 
                                                   & vlSelfRef.risc_v__DOT__instr)
                                                   ? 0U
                                                   : 
                                                  ((4U 
                                                    & vlSelfRef.risc_v__DOT__instr)
                                                    ? 0U
                                                    : 
                                                   ((2U 
                                                     & vlSelfRef.risc_v__DOT__instr)
                                                     ? 
                                                    ((1U 
                                                      & vlSelfRef.risc_v__DOT__instr)
                                                      ? 
                                                     (((- (IData)(
                                                                  (vlSelfRef.risc_v__DOT__instr 
                                                                   >> 0x1fU))) 
                                                       << 0xcU) 
                                                      | ((0xfe0U 
                                                          & (vlSelfRef.risc_v__DOT__instr 
                                                             >> 0x14U)) 
                                                         | (0x1fU 
                                                            & (vlSelfRef.risc_v__DOT__instr 
                                                               >> 7U))))
                                                      : 0U)
                                                     : 0U))))
                                                 : 
                                                ((0x10U 
                                                  & vlSelfRef.risc_v__DOT__instr)
                                                  ? 
                                                 ((8U 
                                                   & vlSelfRef.risc_v__DOT__instr)
                                                   ? 0U
                                                   : 
                                                  ((4U 
                                                    & vlSelfRef.risc_v__DOT__instr)
                                                    ? 
                                                   ((2U 
                                                     & vlSelfRef.risc_v__DOT__instr)
                                                     ? 
                                                    ((1U 
                                                      & vlSelfRef.risc_v__DOT__instr)
                                                      ? 
                                                     (0xfffff000U 
                                                      & vlSelfRef.risc_v__DOT__instr)
                                                      : 0U)
                                                     : 0U)
                                                    : 
                                                   ((2U 
                                                     & vlSelfRef.risc_v__DOT__instr)
                                                     ? 
                                                    ((1U 
                                                      & vlSelfRef.risc_v__DOT__instr)
                                                      ? 
                                                     (((- (IData)(
                                                                  (vlSelfRef.risc_v__DOT__instr 
                                                                   >> 0x1fU))) 
                                                       << 0xcU) 
                                                      | (vlSelfRef.risc_v__DOT__instr 
                                                         >> 0x14U))
                                                      : 0U)
                                                     : 0U)))
                                                  : 
                                                 ((8U 
                                                   & vlSelfRef.risc_v__DOT__instr)
                                                   ? 0U
                                                   : 
                                                  ((4U 
                                                    & vlSelfRef.risc_v__DOT__instr)
                                                    ? 0U
                                                    : 
                                                   ((2U 
                                                     & vlSelfRef.risc_v__DOT__instr)
                                                     ? 
                                                    ((1U 
                                                      & vlSelfRef.risc_v__DOT__instr)
                                                      ? 
                                                     (((- (IData)(
                                                                  (vlSelfRef.risc_v__DOT__instr 
                                                                   >> 0x1fU))) 
                                                       << 0xcU) 
                                                      | (vlSelfRef.risc_v__DOT__instr 
                                                         >> 0x14U))
                                                      : 0U)
                                                     : 0U))))));
    vlSelfRef.risc_v__DOT__regf_rs1_data = vlSelfRef.risc_v__DOT__regfile__DOT__register_file
        [(0x1fU & (vlSelfRef.risc_v__DOT__instr >> 0xfU))];
    vlSelfRef.risc_v__DOT__alu_src2 = (((0x23U == (0x7fU 
                                                   & vlSelfRef.risc_v__DOT__instr)) 
                                        | ((3U == (0x7fU 
                                                   & vlSelfRef.risc_v__DOT__instr)) 
                                           | (0x13U 
                                              == (0x7fU 
                                                  & vlSelfRef.risc_v__DOT__instr))))
                                        ? vlSelfRef.risc_v__DOT__imm
                                        : vlSelfRef.risc_v__DOT__regfile__DOT__register_file
                                       [(0x1fU & (vlSelfRef.risc_v__DOT__instr 
                                                  >> 0x14U))]);
    vlSelfRef.risc_v__DOT__ctrl_flow_unit__DOT__base_addr 
        = vlSelfRef.risc_v__DOT__pc;
    if ((0x67U == (0x7fU & vlSelfRef.risc_v__DOT__instr))) {
        vlSelfRef.risc_v__DOT__ctrl_flow_unit__DOT__base_addr 
            = vlSelfRef.risc_v__DOT__regf_rs1_data;
    }
    vlSelfRef.risc_v__DOT__alu_result = ((8U & (IData)(vlSelfRef.risc_v__DOT__alu_op))
                                          ? ((4U & (IData)(vlSelfRef.risc_v__DOT__alu_op))
                                              ? ((2U 
                                                  & (IData)(vlSelfRef.risc_v__DOT__alu_op))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.risc_v__DOT__alu_op))
                                                   ? 
                                                  ((vlSelfRef.risc_v__DOT__regf_rs1_data 
                                                    >= vlSelfRef.risc_v__DOT__alu_src2)
                                                    ? 1U
                                                    : 0U)
                                                   : 
                                                  ((vlSelfRef.risc_v__DOT__regf_rs1_data 
                                                    < vlSelfRef.risc_v__DOT__alu_src2)
                                                    ? 1U
                                                    : 0U))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.risc_v__DOT__alu_op))
                                                   ? 
                                                  (VL_GTES_III(32, vlSelfRef.risc_v__DOT__regf_rs1_data, vlSelfRef.risc_v__DOT__alu_src2)
                                                    ? 1U
                                                    : 0U)
                                                   : 
                                                  (VL_LTS_III(32, vlSelfRef.risc_v__DOT__regf_rs1_data, vlSelfRef.risc_v__DOT__alu_src2)
                                                    ? 1U
                                                    : 0U)))
                                              : ((2U 
                                                  & (IData)(vlSelfRef.risc_v__DOT__alu_op))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.risc_v__DOT__alu_op))
                                                   ? 
                                                  ((vlSelfRef.risc_v__DOT__regf_rs1_data 
                                                    != vlSelfRef.risc_v__DOT__alu_src2)
                                                    ? 1U
                                                    : 0U)
                                                   : 
                                                  ((vlSelfRef.risc_v__DOT__regf_rs1_data 
                                                    == vlSelfRef.risc_v__DOT__alu_src2)
                                                    ? 1U
                                                    : 0U))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.risc_v__DOT__alu_op))
                                                   ? 
                                                  ((vlSelfRef.risc_v__DOT__regf_rs1_data 
                                                    < vlSelfRef.risc_v__DOT__alu_src2)
                                                    ? 1U
                                                    : 0U)
                                                   : 
                                                  (VL_LTS_III(32, vlSelfRef.risc_v__DOT__regf_rs1_data, vlSelfRef.risc_v__DOT__alu_src2)
                                                    ? 1U
                                                    : 0U))))
                                          : ((4U & (IData)(vlSelfRef.risc_v__DOT__alu_op))
                                              ? ((2U 
                                                  & (IData)(vlSelfRef.risc_v__DOT__alu_op))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.risc_v__DOT__alu_op))
                                                   ? 
                                                  VL_SHIFTRS_III(32,32,32, vlSelfRef.risc_v__DOT__regf_rs1_data, vlSelfRef.risc_v__DOT__alu_src2)
                                                   : 
                                                  VL_SHIFTR_III(32,32,32, vlSelfRef.risc_v__DOT__regf_rs1_data, vlSelfRef.risc_v__DOT__alu_src2))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.risc_v__DOT__alu_op))
                                                   ? 
                                                  VL_SHIFTL_III(32,32,32, vlSelfRef.risc_v__DOT__regf_rs1_data, vlSelfRef.risc_v__DOT__alu_src2)
                                                   : 
                                                  (vlSelfRef.risc_v__DOT__regf_rs1_data 
                                                   & vlSelfRef.risc_v__DOT__alu_src2)))
                                              : ((2U 
                                                  & (IData)(vlSelfRef.risc_v__DOT__alu_op))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.risc_v__DOT__alu_op))
                                                   ? 
                                                  (vlSelfRef.risc_v__DOT__regf_rs1_data 
                                                   | vlSelfRef.risc_v__DOT__alu_src2)
                                                   : 
                                                  (vlSelfRef.risc_v__DOT__regf_rs1_data 
                                                   ^ vlSelfRef.risc_v__DOT__alu_src2))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.risc_v__DOT__alu_op))
                                                   ? 
                                                  (vlSelfRef.risc_v__DOT__regf_rs1_data 
                                                   - vlSelfRef.risc_v__DOT__alu_src2)
                                                   : 
                                                  (vlSelfRef.risc_v__DOT__regf_rs1_data 
                                                   + vlSelfRef.risc_v__DOT__alu_src2)))));
    vlSelfRef.risc_v__DOT__target_pc = (vlSelfRef.risc_v__DOT__ctrl_flow_unit__DOT__base_addr 
                                        + vlSelfRef.risc_v__DOT__imm);
    vlSelfRef.risc_v__DOT__data_mem_r_data = vlSelfRef.risc_v__DOT__dmem__DOT__mem
        [(0x3ffU & (vlSelfRef.risc_v__DOT__alu_result 
                    >> 2U))];
    vlSelfRef.risc_v__DOT__next_pc = (((0x6fU == (0x7fU 
                                                  & vlSelfRef.risc_v__DOT__instr)) 
                                       | ((0x67U == 
                                           (0x7fU & vlSelfRef.risc_v__DOT__instr)) 
                                          | (vlSelfRef.risc_v__DOT__alu_result 
                                             & (0x63U 
                                                == 
                                                (0x7fU 
                                                 & vlSelfRef.risc_v__DOT__instr)))))
                                       ? vlSelfRef.risc_v__DOT__target_pc
                                       : ((IData)(4U) 
                                          + vlSelfRef.risc_v__DOT__pc));
    if ((2U & vlSelfRef.risc_v__DOT__alu_result)) {
        vlSelfRef.risc_v__DOT__ld_data_ext__DOT__byte_sel 
            = (0xffU & ((1U & vlSelfRef.risc_v__DOT__alu_result)
                         ? (vlSelfRef.risc_v__DOT__data_mem_r_data 
                            >> 0x18U) : (vlSelfRef.risc_v__DOT__data_mem_r_data 
                                         >> 0x10U)));
        if ((2U & vlSelfRef.risc_v__DOT__alu_result)) {
            vlSelfRef.risc_v__DOT__ld_data_ext__DOT__halfword_sel 
                = (vlSelfRef.risc_v__DOT__data_mem_r_data 
                   >> 0x10U);
        }
    } else {
        vlSelfRef.risc_v__DOT__ld_data_ext__DOT__byte_sel 
            = (0xffU & ((1U & vlSelfRef.risc_v__DOT__alu_result)
                         ? (vlSelfRef.risc_v__DOT__data_mem_r_data 
                            >> 8U) : vlSelfRef.risc_v__DOT__data_mem_r_data));
        vlSelfRef.risc_v__DOT__ld_data_ext__DOT__halfword_sel 
            = (0xffffU & vlSelfRef.risc_v__DOT__data_mem_r_data);
    }
}

void Vrisc_v___024root___eval_triggers__act(Vrisc_v___024root* vlSelf);

bool Vrisc_v___024root___eval_phase__act(Vrisc_v___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrisc_v__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrisc_v___024root___eval_phase__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vrisc_v___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vrisc_v___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vrisc_v___024root___eval_phase__nba(Vrisc_v___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrisc_v__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrisc_v___024root___eval_phase__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vrisc_v___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vrisc_v___024root___dump_triggers__ico(Vrisc_v___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vrisc_v___024root___dump_triggers__nba(Vrisc_v___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vrisc_v___024root___dump_triggers__act(Vrisc_v___024root* vlSelf);
#endif  // VL_DEBUG

void Vrisc_v___024root___eval(Vrisc_v___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrisc_v__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrisc_v___024root___eval\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY(((0x64U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vrisc_v___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("src/risc_v.sv", 22, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vrisc_v___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vrisc_v___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("src/risc_v.sv", 22, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vrisc_v___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("src/risc_v.sv", 22, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vrisc_v___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vrisc_v___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vrisc_v___024root___eval_debug_assertions(Vrisc_v___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrisc_v__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrisc_v___024root___eval_debug_assertions\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk_i & 0xfeU)))) {
        Verilated::overWidthError("clk_i");}
    if (VL_UNLIKELY(((vlSelfRef.rst_i & 0xfeU)))) {
        Verilated::overWidthError("rst_i");}
    if (VL_UNLIKELY(((vlSelfRef.imem_ld_i & 0xfeU)))) {
        Verilated::overWidthError("imem_ld_i");}
    if (VL_UNLIKELY(((vlSelfRef.imem_ld_addr_i & 0xfc00U)))) {
        Verilated::overWidthError("imem_ld_addr_i");}
}
#endif  // VL_DEBUG
