// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VPCReg.h"
#include "VPCReg__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VPCReg::VPCReg(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VPCReg__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , next_PC{vlSymsp->TOP.next_PC}
    , PC{vlSymsp->TOP.PC}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VPCReg::VPCReg(const char* _vcname__)
    : VPCReg(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VPCReg::~VPCReg() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VPCReg___024root___eval_initial(VPCReg___024root* vlSelf);
void VPCReg___024root___eval_settle(VPCReg___024root* vlSelf);
void VPCReg___024root___eval(VPCReg___024root* vlSelf);
#ifdef VL_DEBUG
void VPCReg___024root___eval_debug_assertions(VPCReg___024root* vlSelf);
#endif  // VL_DEBUG
void VPCReg___024root___final(VPCReg___024root* vlSelf);

static void _eval_initial_loop(VPCReg__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VPCReg___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VPCReg___024root___eval_settle(&(vlSymsp->TOP));
        VPCReg___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VPCReg::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VPCReg::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VPCReg___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VPCReg___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

const char* VPCReg::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VPCReg::final() {
    VPCReg___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VPCReg::hierName() const { return vlSymsp->name(); }
const char* VPCReg::modelName() const { return "VPCReg"; }
unsigned VPCReg::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> VPCReg::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VPCReg___024root__trace_init_top(VPCReg___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VPCReg___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VPCReg___024root*>(voidSelf);
    VPCReg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VPCReg___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VPCReg___024root__trace_register(VPCReg___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VPCReg::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VPCReg___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
