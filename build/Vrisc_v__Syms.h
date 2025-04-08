// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VRISC_V__SYMS_H_
#define VERILATED_VRISC_V__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vrisc_v.h"

// INCLUDE MODULE CLASSES
#include "Vrisc_v___024root.h"
#include "Vrisc_v___024unit.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vrisc_v__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vrisc_v* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vrisc_v___024root              TOP;

    // CONSTRUCTORS
    Vrisc_v__Syms(VerilatedContext* contextp, const char* namep, Vrisc_v* modelp);
    ~Vrisc_v__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
