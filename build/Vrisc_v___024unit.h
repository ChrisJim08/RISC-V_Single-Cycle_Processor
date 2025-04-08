// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vrisc_v.h for the primary calling header

#ifndef VERILATED_VRISC_V___024UNIT_H_
#define VERILATED_VRISC_V___024UNIT_H_  // guard

#include "verilated.h"


class Vrisc_v__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vrisc_v___024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vrisc_v__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vrisc_v___024unit(Vrisc_v__Syms* symsp, const char* v__name);
    ~Vrisc_v___024unit();
    VL_UNCOPYABLE(Vrisc_v___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
