// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtb_risc_v__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vtb_risc_v::Vtb_risc_v(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtb_risc_v__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vtb_risc_v::Vtb_risc_v(const char* _vcname__)
    : Vtb_risc_v(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtb_risc_v::~Vtb_risc_v() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtb_risc_v___024root___eval_debug_assertions(Vtb_risc_v___024root* vlSelf);
#endif  // VL_DEBUG
void Vtb_risc_v___024root___eval_static(Vtb_risc_v___024root* vlSelf);
void Vtb_risc_v___024root___eval_initial(Vtb_risc_v___024root* vlSelf);
void Vtb_risc_v___024root___eval_settle(Vtb_risc_v___024root* vlSelf);
void Vtb_risc_v___024root___eval(Vtb_risc_v___024root* vlSelf);

void Vtb_risc_v::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtb_risc_v::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtb_risc_v___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtb_risc_v___024root___eval_static(&(vlSymsp->TOP));
        Vtb_risc_v___024root___eval_initial(&(vlSymsp->TOP));
        Vtb_risc_v___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtb_risc_v___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

void Vtb_risc_v::eval_end_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+eval_end_step Vtb_risc_v::eval_end_step\n"); );
#ifdef VM_TRACE
    // Tracing
    if (VL_UNLIKELY(vlSymsp->__Vm_dumping)) vlSymsp->_traceDump();
#endif  // VM_TRACE
}

//============================================================
// Events and timing
bool Vtb_risc_v::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vtb_risc_v::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vtb_risc_v::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtb_risc_v___024root___eval_final(Vtb_risc_v___024root* vlSelf);

VL_ATTR_COLD void Vtb_risc_v::final() {
    Vtb_risc_v___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtb_risc_v::hierName() const { return vlSymsp->name(); }
const char* Vtb_risc_v::modelName() const { return "Vtb_risc_v"; }
unsigned Vtb_risc_v::threads() const { return 1; }
void Vtb_risc_v::prepareClone() const { contextp()->prepareClone(); }
void Vtb_risc_v::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vtb_risc_v::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vtb_risc_v___024root__trace_decl_types(VerilatedVcd* tracep);

void Vtb_risc_v___024root__trace_init_top(Vtb_risc_v___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vtb_risc_v___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_risc_v___024root*>(voidSelf);
    Vtb_risc_v__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vtb_risc_v___024root__trace_decl_types(tracep);
    Vtb_risc_v___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtb_risc_v___024root__trace_register(Vtb_risc_v___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vtb_risc_v::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vtb_risc_v::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vtb_risc_v___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
