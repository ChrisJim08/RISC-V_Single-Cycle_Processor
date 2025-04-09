// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vrisc_v__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vrisc_v::Vrisc_v(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vrisc_v__Syms(contextp(), _vcname__, this)}
    , clk_i{vlSymsp->TOP.clk_i}
    , rst_i{vlSymsp->TOP.rst_i}
    , imem_ld_i{vlSymsp->TOP.imem_ld_i}
    , imem_ld_addr_i{vlSymsp->TOP.imem_ld_addr_i}
    , imem_ld_data_i{vlSymsp->TOP.imem_ld_data_i}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vrisc_v::Vrisc_v(const char* _vcname__)
    : Vrisc_v(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vrisc_v::~Vrisc_v() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vrisc_v___024root___eval_debug_assertions(Vrisc_v___024root* vlSelf);
#endif  // VL_DEBUG
void Vrisc_v___024root___eval_static(Vrisc_v___024root* vlSelf);
void Vrisc_v___024root___eval_initial(Vrisc_v___024root* vlSelf);
void Vrisc_v___024root___eval_settle(Vrisc_v___024root* vlSelf);
void Vrisc_v___024root___eval(Vrisc_v___024root* vlSelf);

void Vrisc_v::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vrisc_v::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vrisc_v___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vrisc_v___024root___eval_static(&(vlSymsp->TOP));
        Vrisc_v___024root___eval_initial(&(vlSymsp->TOP));
        Vrisc_v___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vrisc_v___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vrisc_v::eventsPending() { return false; }

uint64_t Vrisc_v::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vrisc_v::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vrisc_v___024root___eval_final(Vrisc_v___024root* vlSelf);

VL_ATTR_COLD void Vrisc_v::final() {
    Vrisc_v___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vrisc_v::hierName() const { return vlSymsp->name(); }
const char* Vrisc_v::modelName() const { return "Vrisc_v"; }
unsigned Vrisc_v::threads() const { return 1; }
void Vrisc_v::prepareClone() const { contextp()->prepareClone(); }
void Vrisc_v::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vrisc_v::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vrisc_v___024root__trace_decl_types(VerilatedVcd* tracep);

void Vrisc_v___024root__trace_init_top(Vrisc_v___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vrisc_v___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vrisc_v___024root*>(voidSelf);
    Vrisc_v__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vrisc_v___024root__trace_decl_types(tracep);
    Vrisc_v___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vrisc_v___024root__trace_register(Vrisc_v___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vrisc_v::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vrisc_v::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vrisc_v___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
