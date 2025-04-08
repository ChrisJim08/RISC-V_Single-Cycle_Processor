// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrisc_v.h for the primary calling header

#include "Vrisc_v__pch.h"
#include "Vrisc_v__Syms.h"
#include "Vrisc_v___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vrisc_v___024root___dump_triggers__stl(Vrisc_v___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vrisc_v___024root___eval_triggers__stl(Vrisc_v___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrisc_v__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrisc_v___024root___eval_triggers__stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.set(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vrisc_v___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
