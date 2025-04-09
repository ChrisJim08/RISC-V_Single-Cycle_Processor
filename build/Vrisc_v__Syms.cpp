// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vrisc_v__pch.h"
#include "Vrisc_v.h"
#include "Vrisc_v___024root.h"
#include "Vrisc_v___024unit.h"

// FUNCTIONS
Vrisc_v__Syms::~Vrisc_v__Syms()
{
}

Vrisc_v__Syms::Vrisc_v__Syms(VerilatedContext* contextp, const char* namep, Vrisc_v* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(79);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
