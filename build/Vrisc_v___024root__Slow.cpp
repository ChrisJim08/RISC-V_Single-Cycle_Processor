// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrisc_v.h for the primary calling header

#include "Vrisc_v__pch.h"
#include "Vrisc_v__Syms.h"
#include "Vrisc_v___024root.h"

void Vrisc_v___024root___ctor_var_reset(Vrisc_v___024root* vlSelf);

Vrisc_v___024root::Vrisc_v___024root(Vrisc_v__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vrisc_v___024root___ctor_var_reset(this);
}

void Vrisc_v___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vrisc_v___024root::~Vrisc_v___024root() {
}
