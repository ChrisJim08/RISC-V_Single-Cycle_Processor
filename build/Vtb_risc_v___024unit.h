// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_risc_v.h for the primary calling header

#ifndef VERILATED_VTB_RISC_V___024UNIT_H_
#define VERILATED_VTB_RISC_V___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_risc_v__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_risc_v___024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vtb_risc_v__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_risc_v___024unit(Vtb_risc_v__Syms* symsp, const char* v__name);
    ~Vtb_risc_v___024unit();
    VL_UNCOPYABLE(Vtb_risc_v___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
