// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_risc_v.h for the primary calling header

#include "Vtb_risc_v__pch.h"
#include "Vtb_risc_v__Syms.h"
#include "Vtb_risc_v___024root.h"

VL_INLINE_OPT VlCoroutine Vtb_risc_v___024root___eval_initial__TOP__Vtiming__0(Vtb_risc_v___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_risc_v__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_risc_v___024root___eval_initial__TOP__Vtiming__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    vlSelfRef.clk = 0U;
    vlSelfRef.rst = 1U;
    __Vtemp_1[0U] = 0x2e6d656dU;
    __Vtemp_1[1U] = 0x74657374U;
    __Vtemp_1[2U] = 0x6865782fU;
    VL_READMEM_N(true, 32, 1024, 0, VL_CVT_PACK_STR_NW(3, __Vtemp_1)
                 ,  &(vlSelfRef.tb_risc_v__DOT__DUT__DOT__imem__DOT__mem)
                 , 0, ~0ULL);
    vlSymsp->_vm_contextp__->dumpfile(std::string{"wave.vcd"});
    vlSymsp->_traceDumpOpen();
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "sim/tb_risc_v.sv", 
                                         30);
    vlSelfRef.rst = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                         nullptr, "sim/tb_risc_v.sv", 
                                         34);
    VL_FINISH_MT("sim/tb_risc_v.sv", 37, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_risc_v___024root___dump_triggers__act(Vtb_risc_v___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_risc_v___024root___eval_triggers__act(Vtb_risc_v___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_risc_v__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_risc_v___024root___eval_triggers__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.clk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0))));
    vlSelfRef.__VactTriggered.set(1U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_risc_v___024root___dump_triggers__act(vlSelf);
    }
#endif
}
