// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrisc_v.h for the primary calling header

#include "Vrisc_v__pch.h"
#include "Vrisc_v__Syms.h"
#include "Vrisc_v___024unit.h"

void Vrisc_v___024unit___ctor_var_reset(Vrisc_v___024unit* vlSelf);

Vrisc_v___024unit::Vrisc_v___024unit(Vrisc_v__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vrisc_v___024unit___ctor_var_reset(this);
}

void Vrisc_v___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vrisc_v___024unit::~Vrisc_v___024unit() {
}
