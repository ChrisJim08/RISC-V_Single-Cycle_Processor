// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_risc_v.h for the primary calling header

#include "Vtb_risc_v__pch.h"
#include "Vtb_risc_v__Syms.h"
#include "Vtb_risc_v___024root.h"

void Vtb_risc_v___024root___ctor_var_reset(Vtb_risc_v___024root* vlSelf);

Vtb_risc_v___024root::Vtb_risc_v___024root(Vtb_risc_v__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_risc_v___024root___ctor_var_reset(this);
}

void Vtb_risc_v___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_risc_v___024root::~Vtb_risc_v___024root() {
}
