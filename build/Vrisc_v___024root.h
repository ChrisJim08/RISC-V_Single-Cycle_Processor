// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vrisc_v.h for the primary calling header

#ifndef VERILATED_VRISC_V___024ROOT_H_
#define VERILATED_VRISC_V___024ROOT_H_  // guard

#include "verilated.h"


class Vrisc_v__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vrisc_v___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk_i,0,0);
    VL_IN8(rst_i,0,0);
    CData/*3:0*/ risc_v__DOT__alu_op;
    CData/*1:0*/ risc_v__DOT__regf_rd_src;
    CData/*7:0*/ risc_v__DOT__ld_data_ext__DOT__byte_sel;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk_i__0;
    CData/*0:0*/ __VactContinue;
    SData/*15:0*/ risc_v__DOT__ld_data_ext__DOT__halfword_sel;
    IData/*31:0*/ risc_v__DOT__target_pc;
    IData/*31:0*/ risc_v__DOT__pc;
    IData/*31:0*/ risc_v__DOT__next_pc;
    IData/*31:0*/ risc_v__DOT__alu_src2;
    IData/*31:0*/ risc_v__DOT__alu_result;
    IData/*31:0*/ risc_v__DOT__regf_rs1_data;
    IData/*31:0*/ risc_v__DOT__regf_rs2_data;
    IData/*31:0*/ risc_v__DOT__data_mem_r_data;
    IData/*31:0*/ risc_v__DOT__imm;
    IData/*31:0*/ risc_v__DOT__instr;
    IData/*31:0*/ risc_v__DOT__regfile__DOT__i;
    IData/*31:0*/ risc_v__DOT__ctrl_flow_unit__DOT__base_addr;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 1024> risc_v__DOT__imem__DOT__mem;
    VlUnpacked<IData/*31:0*/, 32> risc_v__DOT__regfile__DOT__register_file;
    VlUnpacked<IData/*31:0*/, 1024> risc_v__DOT__dmem__DOT__mem;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vrisc_v__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vrisc_v___024root(Vrisc_v__Syms* symsp, const char* v__name);
    ~Vrisc_v___024root();
    VL_UNCOPYABLE(Vrisc_v___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
