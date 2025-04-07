// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_risc_v.h for the primary calling header

#include "Vtb_risc_v__pch.h"
#include "Vtb_risc_v___024root.h"

VL_ATTR_COLD void Vtb_risc_v___024root___eval_static(Vtb_risc_v___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_risc_v__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_risc_v___024root___eval_static\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_risc_v___024root___eval_initial__TOP(Vtb_risc_v___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_risc_v__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_risc_v___024root___eval_initial__TOP\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<4>/*127:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e6d656dU;
    __Vtemp_1[1U] = 0x74657374U;
    __Vtemp_1[2U] = 0x7269662fU;
    __Vtemp_1[3U] = 0x7665U;
    VL_READMEM_N(true, 32, 1024, 0, VL_CVT_PACK_STR_NW(4, __Vtemp_1)
                 ,  &(vlSelfRef.tb_risc_v__DOT__DUT__DOT__imem__DOT__mem)
                 , 0, ~0ULL);
    vlSelfRef.tb_risc_v__DOT__DUT__DOT__regfile__DOT__register_file[0U] = 0U;
}

VL_ATTR_COLD void Vtb_risc_v___024root___eval_final(Vtb_risc_v___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_risc_v__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_risc_v___024root___eval_final\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_risc_v___024root___dump_triggers__stl(Vtb_risc_v___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_risc_v___024root___eval_phase__stl(Vtb_risc_v___024root* vlSelf);

VL_ATTR_COLD void Vtb_risc_v___024root___eval_settle(Vtb_risc_v___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_risc_v__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_risc_v___024root___eval_settle\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtb_risc_v___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("verif/tb_risc_v.sv", 3, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtb_risc_v___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_risc_v___024root___dump_triggers__stl(Vtb_risc_v___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_risc_v__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_risc_v___024root___dump_triggers__stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_risc_v___024root___stl_sequent__TOP__0(Vtb_risc_v___024root* vlSelf);
VL_ATTR_COLD void Vtb_risc_v___024root____Vm_traceActivitySetAll(Vtb_risc_v___024root* vlSelf);

VL_ATTR_COLD void Vtb_risc_v___024root___eval_stl(Vtb_risc_v___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_risc_v__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_risc_v___024root___eval_stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtb_risc_v___024root___stl_sequent__TOP__0(vlSelf);
        Vtb_risc_v___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

extern const VlUnpacked<CData/*1:0*/, 2048> Vtb_risc_v__ConstPool__TABLE_h5257d03f_0;
extern const VlUnpacked<CData/*3:0*/, 2048> Vtb_risc_v__ConstPool__TABLE_h93cde9b4_0;

VL_ATTR_COLD void Vtb_risc_v___024root___stl_sequent__TOP__0(Vtb_risc_v___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_risc_v__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_risc_v___024root___stl_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*10:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
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

VL_ATTR_COLD void Vtb_risc_v___024root___eval_triggers__stl(Vtb_risc_v___024root* vlSelf);

VL_ATTR_COLD bool Vtb_risc_v___024root___eval_phase__stl(Vtb_risc_v___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_risc_v__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_risc_v___024root___eval_phase__stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_risc_v___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtb_risc_v___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_risc_v___024root___dump_triggers__act(Vtb_risc_v___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_risc_v__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_risc_v___024root___dump_triggers__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_risc_v___024root___dump_triggers__nba(Vtb_risc_v___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_risc_v__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_risc_v___024root___dump_triggers__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_risc_v___024root____Vm_traceActivitySetAll(Vtb_risc_v___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_risc_v__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_risc_v___024root____Vm_traceActivitySetAll\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

VL_ATTR_COLD void Vtb_risc_v___024root___ctor_var_reset(Vtb_risc_v___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_risc_v__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_risc_v___024root___ctor_var_reset\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->tb_risc_v__DOT__DUT__DOT__alu_op = VL_RAND_RESET_I(4);
    vlSelf->tb_risc_v__DOT__DUT__DOT__regf_rd_src = VL_RAND_RESET_I(2);
    vlSelf->tb_risc_v__DOT__DUT__DOT__target_pc = VL_RAND_RESET_I(32);
    vlSelf->tb_risc_v__DOT__DUT__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->tb_risc_v__DOT__DUT__DOT__next_pc = VL_RAND_RESET_I(32);
    vlSelf->tb_risc_v__DOT__DUT__DOT__alu_src2 = VL_RAND_RESET_I(32);
    vlSelf->tb_risc_v__DOT__DUT__DOT__alu_result = VL_RAND_RESET_I(32);
    vlSelf->tb_risc_v__DOT__DUT__DOT__regf_rs1_data = VL_RAND_RESET_I(32);
    vlSelf->tb_risc_v__DOT__DUT__DOT__regf_rs2_data = VL_RAND_RESET_I(32);
    vlSelf->tb_risc_v__DOT__DUT__DOT__data_mem_r_data = VL_RAND_RESET_I(32);
    vlSelf->tb_risc_v__DOT__DUT__DOT__imm = VL_RAND_RESET_I(32);
    vlSelf->tb_risc_v__DOT__DUT__DOT__instr = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->tb_risc_v__DOT__DUT__DOT__imem__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->tb_risc_v__DOT__DUT__DOT__regfile__DOT__i = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb_risc_v__DOT__DUT__DOT__regfile__DOT__register_file[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->tb_risc_v__DOT__DUT__DOT__ctrl_flow_unit__DOT__base_addr = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->tb_risc_v__DOT__DUT__DOT__dmem__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->tb_risc_v__DOT__DUT__DOT__ld_data_ext__DOT__byte_sel = VL_RAND_RESET_I(8);
    vlSelf->tb_risc_v__DOT__DUT__DOT__ld_data_ext__DOT__halfword_sel = VL_RAND_RESET_I(16);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
