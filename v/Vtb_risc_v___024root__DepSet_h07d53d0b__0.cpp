// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_risc_v.h for the primary calling header

#include "Vtb_risc_v__pch.h"
#include "Vtb_risc_v___024root.h"

VL_ATTR_COLD void Vtb_risc_v___024root___eval_initial__TOP(Vtb_risc_v___024root* vlSelf);
VlCoroutine Vtb_risc_v___024root___eval_initial__TOP__Vtiming__0(Vtb_risc_v___024root* vlSelf);
VlCoroutine Vtb_risc_v___024root___eval_initial__TOP__Vtiming__1(Vtb_risc_v___024root* vlSelf);

void Vtb_risc_v___024root___eval_initial(Vtb_risc_v___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_risc_v__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_risc_v___024root___eval_initial\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_risc_v___024root___eval_initial__TOP(vlSelf);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    Vtb_risc_v___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_risc_v___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
}

VL_INLINE_OPT VlCoroutine Vtb_risc_v___024root___eval_initial__TOP__Vtiming__1(Vtb_risc_v___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_risc_v__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_risc_v___024root___eval_initial__TOP__Vtiming__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                             nullptr, 
                                             "verif/tb_risc_v.sv", 
                                             15);
        vlSelfRef.clk = (1U & (~ (IData)(vlSelfRef.clk)));
    }
}

void Vtb_risc_v___024root___eval_act(Vtb_risc_v___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_risc_v__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_risc_v___024root___eval_act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vtb_risc_v___024root___nba_sequent__TOP__0(Vtb_risc_v___024root* vlSelf);

void Vtb_risc_v___024root___eval_nba(Vtb_risc_v___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_risc_v__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_risc_v___024root___eval_nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_risc_v___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
}

extern const VlUnpacked<CData/*1:0*/, 2048> Vtb_risc_v__ConstPool__TABLE_h5257d03f_0;
extern const VlUnpacked<CData/*3:0*/, 2048> Vtb_risc_v__ConstPool__TABLE_h93cde9b4_0;

VL_INLINE_OPT void Vtb_risc_v___024root___nba_sequent__TOP__0(Vtb_risc_v___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_risc_v__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_risc_v___024root___nba_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*10:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    IData/*31:0*/ __VdlyVal__tb_risc_v__DOT__DUT__DOT__imem__DOT__mem__v0;
    __VdlyVal__tb_risc_v__DOT__DUT__DOT__imem__DOT__mem__v0 = 0;
    SData/*9:0*/ __VdlyDim0__tb_risc_v__DOT__DUT__DOT__imem__DOT__mem__v0;
    __VdlyDim0__tb_risc_v__DOT__DUT__DOT__imem__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_risc_v__DOT__DUT__DOT__imem__DOT__mem__v0;
    __VdlySet__tb_risc_v__DOT__DUT__DOT__imem__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_risc_v__DOT__DUT__DOT__regfile__DOT__register_file__v0;
    __VdlySet__tb_risc_v__DOT__DUT__DOT__regfile__DOT__register_file__v0 = 0;
    IData/*31:0*/ __VdlyVal__tb_risc_v__DOT__DUT__DOT__regfile__DOT__register_file__v31;
    __VdlyVal__tb_risc_v__DOT__DUT__DOT__regfile__DOT__register_file__v31 = 0;
    CData/*4:0*/ __VdlyDim0__tb_risc_v__DOT__DUT__DOT__regfile__DOT__register_file__v31;
    __VdlyDim0__tb_risc_v__DOT__DUT__DOT__regfile__DOT__register_file__v31 = 0;
    CData/*0:0*/ __VdlySet__tb_risc_v__DOT__DUT__DOT__regfile__DOT__register_file__v31;
    __VdlySet__tb_risc_v__DOT__DUT__DOT__regfile__DOT__register_file__v31 = 0;
    IData/*31:0*/ __VdlyVal__tb_risc_v__DOT__DUT__DOT__dmem__DOT__mem__v0;
    __VdlyVal__tb_risc_v__DOT__DUT__DOT__dmem__DOT__mem__v0 = 0;
    SData/*9:0*/ __VdlyDim0__tb_risc_v__DOT__DUT__DOT__dmem__DOT__mem__v0;
    __VdlyDim0__tb_risc_v__DOT__DUT__DOT__dmem__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_risc_v__DOT__DUT__DOT__dmem__DOT__mem__v0;
    __VdlySet__tb_risc_v__DOT__DUT__DOT__dmem__DOT__mem__v0 = 0;
    // Body
    __VdlySet__tb_risc_v__DOT__DUT__DOT__dmem__DOT__mem__v0 = 0U;
    __VdlySet__tb_risc_v__DOT__DUT__DOT__regfile__DOT__register_file__v0 = 0U;
    __VdlySet__tb_risc_v__DOT__DUT__DOT__regfile__DOT__register_file__v31 = 0U;
    __VdlySet__tb_risc_v__DOT__DUT__DOT__imem__DOT__mem__v0 = 0U;
    if ((0x23U == (0x7fU & vlSelfRef.tb_risc_v__DOT__DUT__DOT__instr))) {
        __VdlyVal__tb_risc_v__DOT__DUT__DOT__dmem__DOT__mem__v0 
            = vlSelfRef.tb_risc_v__DOT__DUT__DOT__regf_rs2_data;
        __VdlyDim0__tb_risc_v__DOT__DUT__DOT__dmem__DOT__mem__v0 
            = (0x3ffU & (vlSelfRef.tb_risc_v__DOT__DUT__DOT__alu_result 
                         >> 2U));
        __VdlySet__tb_risc_v__DOT__DUT__DOT__dmem__DOT__mem__v0 = 1U;
        __VdlyVal__tb_risc_v__DOT__DUT__DOT__imem__DOT__mem__v0 
            = vlSelfRef.tb_risc_v__DOT__DUT__DOT__regf_rs2_data;
        __VdlyDim0__tb_risc_v__DOT__DUT__DOT__imem__DOT__mem__v0 
            = (0x3ffU & (vlSelfRef.tb_risc_v__DOT__DUT__DOT__pc 
                         >> 2U));
        __VdlySet__tb_risc_v__DOT__DUT__DOT__imem__DOT__mem__v0 = 1U;
    }
    if (vlSelfRef.rst) {
        vlSelfRef.tb_risc_v__DOT__DUT__DOT__regfile__DOT__i = 0x20U;
        __VdlySet__tb_risc_v__DOT__DUT__DOT__regfile__DOT__register_file__v0 = 1U;
        vlSelfRef.tb_risc_v__DOT__DUT__DOT__pc = 0U;
    } else {
        if ((((0x23U != (0x7fU & vlSelfRef.tb_risc_v__DOT__DUT__DOT__instr)) 
              & (0x63U != (0x7fU & vlSelfRef.tb_risc_v__DOT__DUT__DOT__instr))) 
             & (0U != (0x1fU & (vlSelfRef.tb_risc_v__DOT__DUT__DOT__instr 
                                >> 7U))))) {
            __VdlyVal__tb_risc_v__DOT__DUT__DOT__regfile__DOT__register_file__v31 
                = ((2U & (IData)(vlSelfRef.tb_risc_v__DOT__DUT__DOT__regf_rd_src))
                    ? ((1U & (IData)(vlSelfRef.tb_risc_v__DOT__DUT__DOT__regf_rd_src))
                        ? ((0x17U == (0x7fU & vlSelfRef.tb_risc_v__DOT__DUT__DOT__instr))
                            ? vlSelfRef.tb_risc_v__DOT__DUT__DOT__target_pc
                            : vlSelfRef.tb_risc_v__DOT__DUT__DOT__imm)
                        : ((IData)(4U) + vlSelfRef.tb_risc_v__DOT__DUT__DOT__pc))
                    : ((1U & (IData)(vlSelfRef.tb_risc_v__DOT__DUT__DOT__regf_rd_src))
                        ? ((0x4000U & vlSelfRef.tb_risc_v__DOT__DUT__DOT__instr)
                            ? ((0x2000U & vlSelfRef.tb_risc_v__DOT__DUT__DOT__instr)
                                ? 0U : ((0x1000U & vlSelfRef.tb_risc_v__DOT__DUT__DOT__instr)
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
                                        << 0x10U) | (IData)(vlSelfRef.tb_risc_v__DOT__DUT__DOT__ld_data_ext__DOT__halfword_sel))
                                    : (((- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelfRef.tb_risc_v__DOT__DUT__DOT__ld_data_ext__DOT__byte_sel) 
                                                       >> 7U)))) 
                                        << 8U) | (IData)(vlSelfRef.tb_risc_v__DOT__DUT__DOT__ld_data_ext__DOT__byte_sel)))))
                        : vlSelfRef.tb_risc_v__DOT__DUT__DOT__alu_result));
            __VdlyDim0__tb_risc_v__DOT__DUT__DOT__regfile__DOT__register_file__v31 
                = (0x1fU & (vlSelfRef.tb_risc_v__DOT__DUT__DOT__instr 
                            >> 7U));
            __VdlySet__tb_risc_v__DOT__DUT__DOT__regfile__DOT__register_file__v31 = 1U;
        }
        vlSelfRef.tb_risc_v__DOT__DUT__DOT__pc = vlSelfRef.tb_risc_v__DOT__DUT__DOT__next_pc;
    }
    if (__VdlySet__tb_risc_v__DOT__DUT__DOT__dmem__DOT__mem__v0) {
        vlSelfRef.tb_risc_v__DOT__DUT__DOT__dmem__DOT__mem[__VdlyDim0__tb_risc_v__DOT__DUT__DOT__dmem__DOT__mem__v0] 
            = __VdlyVal__tb_risc_v__DOT__DUT__DOT__dmem__DOT__mem__v0;
    }
    if (__VdlySet__tb_risc_v__DOT__DUT__DOT__regfile__DOT__register_file__v0) {
        vlSelfRef.tb_risc_v__DOT__DUT__DOT__regfile__DOT__register_file[1U] = 0U;
        vlSelfRef.tb_risc_v__DOT__DUT__DOT__regfile__DOT__register_file[2U] = 0U;
        vlSelfRef.tb_risc_v__DOT__DUT__DOT__regfile__DOT__register_file[3U] = 0U;
        vlSelfRef.tb_risc_v__DOT__DUT__DOT__regfile__DOT__register_file[4U] = 0U;
        vlSelfRef.tb_risc_v__DOT__DUT__DOT__regfile__DOT__register_file[5U] = 0U;
        vlSelfRef.tb_risc_v__DOT__DUT__DOT__regfile__DOT__register_file[6U] = 0U;
        vlSelfRef.tb_risc_v__DOT__DUT__DOT__regfile__DOT__register_file[7U] = 0U;
        vlSelfRef.tb_risc_v__DOT__DUT__DOT__regfile__DOT__register_file[8U] = 0U;
        vlSelfRef.tb_risc_v__DOT__DUT__DOT__regfile__DOT__register_file[9U] = 0U;
        vlSelfRef.tb_risc_v__DOT__DUT__DOT__regfile__DOT__register_file[0xaU] = 0U;
        vlSelfRef.tb_risc_v__DOT__DUT__DOT__regfile__DOT__register_file[0xbU] = 0U;
        vlSelfRef.tb_risc_v__DOT__DUT__DOT__regfile__DOT__register_file[0xcU] = 0U;
        vlSelfRef.tb_risc_v__DOT__DUT__DOT__regfile__DOT__register_file[0xdU] = 0U;
        vlSelfRef.tb_risc_v__DOT__DUT__DOT__regfile__DOT__register_file[0xeU] = 0U;
        vlSelfRef.tb_risc_v__DOT__DUT__DOT__regfile__DOT__register_file[0xfU] = 0U;
        vlSelfRef.tb_risc_v__DOT__DUT__DOT__regfile__DOT__register_file[0x10U] = 0U;
        vlSelfRef.tb_risc_v__DOT__DUT__DOT__regfile__DOT__register_file[0x11U] = 0U;
        vlSelfRef.tb_risc_v__DOT__DUT__DOT__regfile__DOT__register_file[0x12U] = 0U;
        vlSelfRef.tb_risc_v__DOT__DUT__DOT__regfile__DOT__register_file[0x13U] = 0U;
        vlSelfRef.tb_risc_v__DOT__DUT__DOT__regfile__DOT__register_file[0x14U] = 0U;
        vlSelfRef.tb_risc_v__DOT__DUT__DOT__regfile__DOT__register_file[0x15U] = 0U;
        vlSelfRef.tb_risc_v__DOT__DUT__DOT__regfile__DOT__register_file[0x16U] = 0U;
        vlSelfRef.tb_risc_v__DOT__DUT__DOT__regfile__DOT__register_file[0x17U] = 0U;
        vlSelfRef.tb_risc_v__DOT__DUT__DOT__regfile__DOT__register_file[0x18U] = 0U;
        vlSelfRef.tb_risc_v__DOT__DUT__DOT__regfile__DOT__register_file[0x19U] = 0U;
        vlSelfRef.tb_risc_v__DOT__DUT__DOT__regfile__DOT__register_file[0x1aU] = 0U;
        vlSelfRef.tb_risc_v__DOT__DUT__DOT__regfile__DOT__register_file[0x1bU] = 0U;
        vlSelfRef.tb_risc_v__DOT__DUT__DOT__regfile__DOT__register_file[0x1cU] = 0U;
        vlSelfRef.tb_risc_v__DOT__DUT__DOT__regfile__DOT__register_file[0x1dU] = 0U;
        vlSelfRef.tb_risc_v__DOT__DUT__DOT__regfile__DOT__register_file[0x1eU] = 0U;
        vlSelfRef.tb_risc_v__DOT__DUT__DOT__regfile__DOT__register_file[0x1fU] = 0U;
    }
    if (__VdlySet__tb_risc_v__DOT__DUT__DOT__regfile__DOT__register_file__v31) {
        vlSelfRef.tb_risc_v__DOT__DUT__DOT__regfile__DOT__register_file[__VdlyDim0__tb_risc_v__DOT__DUT__DOT__regfile__DOT__register_file__v31] 
            = __VdlyVal__tb_risc_v__DOT__DUT__DOT__regfile__DOT__register_file__v31;
    }
    if (__VdlySet__tb_risc_v__DOT__DUT__DOT__imem__DOT__mem__v0) {
        vlSelfRef.tb_risc_v__DOT__DUT__DOT__imem__DOT__mem[__VdlyDim0__tb_risc_v__DOT__DUT__DOT__imem__DOT__mem__v0] 
            = __VdlyVal__tb_risc_v__DOT__DUT__DOT__imem__DOT__mem__v0;
    }
    vlSelfRef.tb_risc_v__DOT__DUT__DOT__instr = vlSelfRef.tb_risc_v__DOT__DUT__DOT__imem__DOT__mem
        [(0x3ffU & (vlSelfRef.tb_risc_v__DOT__DUT__DOT__pc 
                    >> 2U))];
    vlSelfRef.tb_risc_v__DOT__DUT__DOT__regf_rs2_data 
        = vlSelfRef.tb_risc_v__DOT__DUT__DOT__regfile__DOT__register_file
        [(0x1fU & (vlSelfRef.tb_risc_v__DOT__DUT__DOT__instr 
                   >> 0x14U))];
    __Vtableidx1 = ((0x400U & (vlSelfRef.tb_risc_v__DOT__DUT__DOT__imem__DOT__mem
                               [(0x3ffU & (vlSelfRef.tb_risc_v__DOT__DUT__DOT__pc 
                                           >> 2U))] 
                               >> 0x14U)) | ((0x380U 
                                              & (vlSelfRef.tb_risc_v__DOT__DUT__DOT__instr 
                                                 >> 5U)) 
                                             | (0x7fU 
                                                & vlSelfRef.tb_risc_v__DOT__DUT__DOT__instr)));
    vlSelfRef.tb_risc_v__DOT__DUT__DOT__regf_rd_src 
        = Vtb_risc_v__ConstPool__TABLE_h5257d03f_0[__Vtableidx1];
    vlSelfRef.tb_risc_v__DOT__DUT__DOT__alu_op = Vtb_risc_v__ConstPool__TABLE_h93cde9b4_0
        [__Vtableidx1];
    vlSelfRef.tb_risc_v__DOT__DUT__DOT__imm = ((0x40U 
                                                & vlSelfRef.tb_risc_v__DOT__DUT__DOT__instr)
                                                ? (
                                                   (0x20U 
                                                    & vlSelfRef.tb_risc_v__DOT__DUT__DOT__instr)
                                                    ? 
                                                   ((0x10U 
                                                     & vlSelfRef.tb_risc_v__DOT__DUT__DOT__instr)
                                                     ? 0U
                                                     : 
                                                    ((8U 
                                                      & vlSelfRef.tb_risc_v__DOT__DUT__DOT__instr)
                                                      ? 
                                                     ((4U 
                                                       & vlSelfRef.tb_risc_v__DOT__DUT__DOT__instr)
                                                       ? 
                                                      ((2U 
                                                        & vlSelfRef.tb_risc_v__DOT__DUT__DOT__instr)
                                                        ? 
                                                       ((1U 
                                                         & vlSelfRef.tb_risc_v__DOT__DUT__DOT__instr)
                                                         ? 
                                                        (((- (IData)(
                                                                     (vlSelfRef.tb_risc_v__DOT__DUT__DOT__instr 
                                                                      >> 0x1fU))) 
                                                          << 0x14U) 
                                                         | (((0xff000U 
                                                              & vlSelfRef.tb_risc_v__DOT__DUT__DOT__instr) 
                                                             | (0x800U 
                                                                & (vlSelfRef.tb_risc_v__DOT__DUT__DOT__instr 
                                                                   >> 9U))) 
                                                            | (0x7feU 
                                                               & (vlSelfRef.tb_risc_v__DOT__DUT__DOT__instr 
                                                                  >> 0x14U))))
                                                         : 0U)
                                                        : 0U)
                                                       : 0U)
                                                      : 
                                                     ((4U 
                                                       & vlSelfRef.tb_risc_v__DOT__DUT__DOT__instr)
                                                       ? 
                                                      ((2U 
                                                        & vlSelfRef.tb_risc_v__DOT__DUT__DOT__instr)
                                                        ? 
                                                       ((1U 
                                                         & vlSelfRef.tb_risc_v__DOT__DUT__DOT__instr)
                                                         ? 
                                                        (((- (IData)(
                                                                     (vlSelfRef.tb_risc_v__DOT__DUT__DOT__instr 
                                                                      >> 0x1fU))) 
                                                          << 0xcU) 
                                                         | (vlSelfRef.tb_risc_v__DOT__DUT__DOT__instr 
                                                            >> 0x14U))
                                                         : 0U)
                                                        : 0U)
                                                       : 
                                                      ((2U 
                                                        & vlSelfRef.tb_risc_v__DOT__DUT__DOT__instr)
                                                        ? 
                                                       ((1U 
                                                         & vlSelfRef.tb_risc_v__DOT__DUT__DOT__instr)
                                                         ? 
                                                        (((- (IData)(
                                                                     (vlSelfRef.tb_risc_v__DOT__DUT__DOT__instr 
                                                                      >> 0x1fU))) 
                                                          << 0xcU) 
                                                         | ((0x800U 
                                                             & (vlSelfRef.tb_risc_v__DOT__DUT__DOT__instr 
                                                                << 4U)) 
                                                            | ((0x7e0U 
                                                                & (vlSelfRef.tb_risc_v__DOT__DUT__DOT__instr 
                                                                   >> 0x14U)) 
                                                               | (0x1eU 
                                                                  & (vlSelfRef.tb_risc_v__DOT__DUT__DOT__instr 
                                                                     >> 7U)))))
                                                         : 0U)
                                                        : 0U))))
                                                    : 0U)
                                                : (
                                                   (0x20U 
                                                    & vlSelfRef.tb_risc_v__DOT__DUT__DOT__instr)
                                                    ? 
                                                   ((0x10U 
                                                     & vlSelfRef.tb_risc_v__DOT__DUT__DOT__instr)
                                                     ? 
                                                    ((8U 
                                                      & vlSelfRef.tb_risc_v__DOT__DUT__DOT__instr)
                                                      ? 0U
                                                      : 
                                                     ((4U 
                                                       & vlSelfRef.tb_risc_v__DOT__DUT__DOT__instr)
                                                       ? 
                                                      ((2U 
                                                        & vlSelfRef.tb_risc_v__DOT__DUT__DOT__instr)
                                                        ? 
                                                       ((1U 
                                                         & vlSelfRef.tb_risc_v__DOT__DUT__DOT__instr)
                                                         ? 
                                                        (0xfffff000U 
                                                         & vlSelfRef.tb_risc_v__DOT__DUT__DOT__instr)
                                                         : 0U)
                                                        : 0U)
                                                       : 0U))
                                                     : 
                                                    ((8U 
                                                      & vlSelfRef.tb_risc_v__DOT__DUT__DOT__instr)
                                                      ? 0U
                                                      : 
                                                     ((4U 
                                                       & vlSelfRef.tb_risc_v__DOT__DUT__DOT__instr)
                                                       ? 0U
                                                       : 
                                                      ((2U 
                                                        & vlSelfRef.tb_risc_v__DOT__DUT__DOT__instr)
                                                        ? 
                                                       ((1U 
                                                         & vlSelfRef.tb_risc_v__DOT__DUT__DOT__instr)
                                                         ? 
                                                        (((- (IData)(
                                                                     (vlSelfRef.tb_risc_v__DOT__DUT__DOT__instr 
                                                                      >> 0x1fU))) 
                                                          << 0xcU) 
                                                         | ((0xfe0U 
                                                             & (vlSelfRef.tb_risc_v__DOT__DUT__DOT__instr 
                                                                >> 0x14U)) 
                                                            | (0x1fU 
                                                               & (vlSelfRef.tb_risc_v__DOT__DUT__DOT__instr 
                                                                  >> 7U))))
                                                         : 0U)
                                                        : 0U))))
                                                    : 
                                                   ((0x10U 
                                                     & vlSelfRef.tb_risc_v__DOT__DUT__DOT__instr)
                                                     ? 
                                                    ((8U 
                                                      & vlSelfRef.tb_risc_v__DOT__DUT__DOT__instr)
                                                      ? 0U
                                                      : 
                                                     ((4U 
                                                       & vlSelfRef.tb_risc_v__DOT__DUT__DOT__instr)
                                                       ? 
                                                      ((2U 
                                                        & vlSelfRef.tb_risc_v__DOT__DUT__DOT__instr)
                                                        ? 
                                                       ((1U 
                                                         & vlSelfRef.tb_risc_v__DOT__DUT__DOT__instr)
                                                         ? 
                                                        (0xfffff000U 
                                                         & vlSelfRef.tb_risc_v__DOT__DUT__DOT__instr)
                                                         : 0U)
                                                        : 0U)
                                                       : 
                                                      ((2U 
                                                        & vlSelfRef.tb_risc_v__DOT__DUT__DOT__instr)
                                                        ? 
                                                       ((1U 
                                                         & vlSelfRef.tb_risc_v__DOT__DUT__DOT__instr)
                                                         ? 
                                                        (((- (IData)(
                                                                     (vlSelfRef.tb_risc_v__DOT__DUT__DOT__instr 
                                                                      >> 0x1fU))) 
                                                          << 0xcU) 
                                                         | (vlSelfRef.tb_risc_v__DOT__DUT__DOT__instr 
                                                            >> 0x14U))
                                                         : 0U)
                                                        : 0U)))
                                                     : 
                                                    ((8U 
                                                      & vlSelfRef.tb_risc_v__DOT__DUT__DOT__instr)
                                                      ? 0U
                                                      : 
                                                     ((4U 
                                                       & vlSelfRef.tb_risc_v__DOT__DUT__DOT__instr)
                                                       ? 0U
                                                       : 
                                                      ((2U 
                                                        & vlSelfRef.tb_risc_v__DOT__DUT__DOT__instr)
                                                        ? 
                                                       ((1U 
                                                         & vlSelfRef.tb_risc_v__DOT__DUT__DOT__instr)
                                                         ? 
                                                        (((- (IData)(
                                                                     (vlSelfRef.tb_risc_v__DOT__DUT__DOT__instr 
                                                                      >> 0x1fU))) 
                                                          << 0xcU) 
                                                         | (vlSelfRef.tb_risc_v__DOT__DUT__DOT__instr 
                                                            >> 0x14U))
                                                         : 0U)
                                                        : 0U))))));
    vlSelfRef.tb_risc_v__DOT__DUT__DOT__regf_rs1_data 
        = vlSelfRef.tb_risc_v__DOT__DUT__DOT__regfile__DOT__register_file
        [(0x1fU & (vlSelfRef.tb_risc_v__DOT__DUT__DOT__instr 
                   >> 0xfU))];
    vlSelfRef.tb_risc_v__DOT__DUT__DOT__alu_src2 = 
        (((0x23U == (0x7fU & vlSelfRef.tb_risc_v__DOT__DUT__DOT__instr)) 
          | ((3U == (0x7fU & vlSelfRef.tb_risc_v__DOT__DUT__DOT__instr)) 
             | (0x13U == (0x7fU & vlSelfRef.tb_risc_v__DOT__DUT__DOT__instr))))
          ? vlSelfRef.tb_risc_v__DOT__DUT__DOT__imm
          : vlSelfRef.tb_risc_v__DOT__DUT__DOT__regfile__DOT__register_file
         [(0x1fU & (vlSelfRef.tb_risc_v__DOT__DUT__DOT__instr 
                    >> 0x14U))]);
    vlSelfRef.tb_risc_v__DOT__DUT__DOT__ctrl_flow_unit__DOT__base_addr 
        = vlSelfRef.tb_risc_v__DOT__DUT__DOT__pc;
    if ((0x67U == (0x7fU & vlSelfRef.tb_risc_v__DOT__DUT__DOT__instr))) {
        vlSelfRef.tb_risc_v__DOT__DUT__DOT__ctrl_flow_unit__DOT__base_addr 
            = vlSelfRef.tb_risc_v__DOT__DUT__DOT__regf_rs1_data;
    }
    vlSelfRef.tb_risc_v__DOT__DUT__DOT__alu_result 
        = ((8U & (IData)(vlSelfRef.tb_risc_v__DOT__DUT__DOT__alu_op))
            ? ((4U & (IData)(vlSelfRef.tb_risc_v__DOT__DUT__DOT__alu_op))
                ? ((2U & (IData)(vlSelfRef.tb_risc_v__DOT__DUT__DOT__alu_op))
                    ? ((1U & (IData)(vlSelfRef.tb_risc_v__DOT__DUT__DOT__alu_op))
                        ? ((vlSelfRef.tb_risc_v__DOT__DUT__DOT__regf_rs1_data 
                            >= vlSelfRef.tb_risc_v__DOT__DUT__DOT__alu_src2)
                            ? 1U : 0U) : ((vlSelfRef.tb_risc_v__DOT__DUT__DOT__regf_rs1_data 
                                           < vlSelfRef.tb_risc_v__DOT__DUT__DOT__alu_src2)
                                           ? 1U : 0U))
                    : ((1U & (IData)(vlSelfRef.tb_risc_v__DOT__DUT__DOT__alu_op))
                        ? (VL_GTES_III(32, vlSelfRef.tb_risc_v__DOT__DUT__DOT__regf_rs1_data, vlSelfRef.tb_risc_v__DOT__DUT__DOT__alu_src2)
                            ? 1U : 0U) : (VL_LTS_III(32, vlSelfRef.tb_risc_v__DOT__DUT__DOT__regf_rs1_data, vlSelfRef.tb_risc_v__DOT__DUT__DOT__alu_src2)
                                           ? 1U : 0U)))
                : ((2U & (IData)(vlSelfRef.tb_risc_v__DOT__DUT__DOT__alu_op))
                    ? ((1U & (IData)(vlSelfRef.tb_risc_v__DOT__DUT__DOT__alu_op))
                        ? ((vlSelfRef.tb_risc_v__DOT__DUT__DOT__regf_rs1_data 
                            != vlSelfRef.tb_risc_v__DOT__DUT__DOT__alu_src2)
                            ? 1U : 0U) : ((vlSelfRef.tb_risc_v__DOT__DUT__DOT__regf_rs1_data 
                                           == vlSelfRef.tb_risc_v__DOT__DUT__DOT__alu_src2)
                                           ? 1U : 0U))
                    : ((1U & (IData)(vlSelfRef.tb_risc_v__DOT__DUT__DOT__alu_op))
                        ? ((vlSelfRef.tb_risc_v__DOT__DUT__DOT__regf_rs1_data 
                            < vlSelfRef.tb_risc_v__DOT__DUT__DOT__alu_src2)
                            ? 1U : 0U) : (VL_LTS_III(32, vlSelfRef.tb_risc_v__DOT__DUT__DOT__regf_rs1_data, vlSelfRef.tb_risc_v__DOT__DUT__DOT__alu_src2)
                                           ? 1U : 0U))))
            : ((4U & (IData)(vlSelfRef.tb_risc_v__DOT__DUT__DOT__alu_op))
                ? ((2U & (IData)(vlSelfRef.tb_risc_v__DOT__DUT__DOT__alu_op))
                    ? ((1U & (IData)(vlSelfRef.tb_risc_v__DOT__DUT__DOT__alu_op))
                        ? VL_SHIFTRS_III(32,32,32, vlSelfRef.tb_risc_v__DOT__DUT__DOT__regf_rs1_data, vlSelfRef.tb_risc_v__DOT__DUT__DOT__alu_src2)
                        : VL_SHIFTR_III(32,32,32, vlSelfRef.tb_risc_v__DOT__DUT__DOT__regf_rs1_data, vlSelfRef.tb_risc_v__DOT__DUT__DOT__alu_src2))
                    : ((1U & (IData)(vlSelfRef.tb_risc_v__DOT__DUT__DOT__alu_op))
                        ? VL_SHIFTL_III(32,32,32, vlSelfRef.tb_risc_v__DOT__DUT__DOT__regf_rs1_data, vlSelfRef.tb_risc_v__DOT__DUT__DOT__alu_src2)
                        : (vlSelfRef.tb_risc_v__DOT__DUT__DOT__regf_rs1_data 
                           & vlSelfRef.tb_risc_v__DOT__DUT__DOT__alu_src2)))
                : ((2U & (IData)(vlSelfRef.tb_risc_v__DOT__DUT__DOT__alu_op))
                    ? ((1U & (IData)(vlSelfRef.tb_risc_v__DOT__DUT__DOT__alu_op))
                        ? (vlSelfRef.tb_risc_v__DOT__DUT__DOT__regf_rs1_data 
                           | vlSelfRef.tb_risc_v__DOT__DUT__DOT__alu_src2)
                        : (vlSelfRef.tb_risc_v__DOT__DUT__DOT__regf_rs1_data 
                           ^ vlSelfRef.tb_risc_v__DOT__DUT__DOT__alu_src2))
                    : ((1U & (IData)(vlSelfRef.tb_risc_v__DOT__DUT__DOT__alu_op))
                        ? (vlSelfRef.tb_risc_v__DOT__DUT__DOT__regf_rs1_data 
                           - vlSelfRef.tb_risc_v__DOT__DUT__DOT__alu_src2)
                        : (vlSelfRef.tb_risc_v__DOT__DUT__DOT__regf_rs1_data 
                           + vlSelfRef.tb_risc_v__DOT__DUT__DOT__alu_src2)))));
    vlSelfRef.tb_risc_v__DOT__DUT__DOT__target_pc = 
        (vlSelfRef.tb_risc_v__DOT__DUT__DOT__ctrl_flow_unit__DOT__base_addr 
         + vlSelfRef.tb_risc_v__DOT__DUT__DOT__imm);
    vlSelfRef.tb_risc_v__DOT__DUT__DOT__data_mem_r_data 
        = vlSelfRef.tb_risc_v__DOT__DUT__DOT__dmem__DOT__mem
        [(0x3ffU & (vlSelfRef.tb_risc_v__DOT__DUT__DOT__alu_result 
                    >> 2U))];
    vlSelfRef.tb_risc_v__DOT__DUT__DOT__next_pc = (
                                                   ((0x6fU 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelfRef.tb_risc_v__DOT__DUT__DOT__instr)) 
                                                    | ((0x67U 
                                                        == 
                                                        (0x7fU 
                                                         & vlSelfRef.tb_risc_v__DOT__DUT__DOT__instr)) 
                                                       | (vlSelfRef.tb_risc_v__DOT__DUT__DOT__alu_result 
                                                          & (0x63U 
                                                             == 
                                                             (0x7fU 
                                                              & vlSelfRef.tb_risc_v__DOT__DUT__DOT__instr)))))
                                                    ? vlSelfRef.tb_risc_v__DOT__DUT__DOT__target_pc
                                                    : 
                                                   ((IData)(4U) 
                                                    + vlSelfRef.tb_risc_v__DOT__DUT__DOT__pc));
    if ((2U & vlSelfRef.tb_risc_v__DOT__DUT__DOT__alu_result)) {
        vlSelfRef.tb_risc_v__DOT__DUT__DOT__ld_data_ext__DOT__byte_sel 
            = (0xffU & ((1U & vlSelfRef.tb_risc_v__DOT__DUT__DOT__alu_result)
                         ? (vlSelfRef.tb_risc_v__DOT__DUT__DOT__data_mem_r_data 
                            >> 0x18U) : (vlSelfRef.tb_risc_v__DOT__DUT__DOT__data_mem_r_data 
                                         >> 0x10U)));
        if ((2U & vlSelfRef.tb_risc_v__DOT__DUT__DOT__alu_result)) {
            vlSelfRef.tb_risc_v__DOT__DUT__DOT__ld_data_ext__DOT__halfword_sel 
                = (vlSelfRef.tb_risc_v__DOT__DUT__DOT__data_mem_r_data 
                   >> 0x10U);
        }
    } else {
        vlSelfRef.tb_risc_v__DOT__DUT__DOT__ld_data_ext__DOT__byte_sel 
            = (0xffU & ((1U & vlSelfRef.tb_risc_v__DOT__DUT__DOT__alu_result)
                         ? (vlSelfRef.tb_risc_v__DOT__DUT__DOT__data_mem_r_data 
                            >> 8U) : vlSelfRef.tb_risc_v__DOT__DUT__DOT__data_mem_r_data));
        vlSelfRef.tb_risc_v__DOT__DUT__DOT__ld_data_ext__DOT__halfword_sel 
            = (0xffffU & vlSelfRef.tb_risc_v__DOT__DUT__DOT__data_mem_r_data);
    }
}

void Vtb_risc_v___024root___timing_resume(Vtb_risc_v___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_risc_v__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_risc_v___024root___timing_resume\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_risc_v___024root___eval_triggers__act(Vtb_risc_v___024root* vlSelf);

bool Vtb_risc_v___024root___eval_phase__act(Vtb_risc_v___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_risc_v__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_risc_v___024root___eval_phase__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_risc_v___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtb_risc_v___024root___timing_resume(vlSelf);
        Vtb_risc_v___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_risc_v___024root___eval_phase__nba(Vtb_risc_v___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_risc_v__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_risc_v___024root___eval_phase__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_risc_v___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_risc_v___024root___dump_triggers__nba(Vtb_risc_v___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_risc_v___024root___dump_triggers__act(Vtb_risc_v___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_risc_v___024root___eval(Vtb_risc_v___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_risc_v__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_risc_v___024root___eval\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtb_risc_v___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("verif/tb_risc_v.sv", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtb_risc_v___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("verif/tb_risc_v.sv", 3, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtb_risc_v___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtb_risc_v___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_risc_v___024root___eval_debug_assertions(Vtb_risc_v___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_risc_v__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_risc_v___024root___eval_debug_assertions\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
