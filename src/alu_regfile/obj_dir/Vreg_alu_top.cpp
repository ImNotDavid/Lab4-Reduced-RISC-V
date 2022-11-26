// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vreg_alu_top.h"
#include "Vreg_alu_top__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vreg_alu_top::Vreg_alu_top(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vreg_alu_top__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , ALUsrc{vlSymsp->TOP.ALUsrc}
    , ALUctrl{vlSymsp->TOP.ALUctrl}
    , RegWrite{vlSymsp->TOP.RegWrite}
    , EQ{vlSymsp->TOP.EQ}
    , instr{vlSymsp->TOP.instr}
    , ImmOp{vlSymsp->TOP.ImmOp}
    , a0{vlSymsp->TOP.a0}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vreg_alu_top::Vreg_alu_top(const char* _vcname__)
    : Vreg_alu_top(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vreg_alu_top::~Vreg_alu_top() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vreg_alu_top___024root___eval_initial(Vreg_alu_top___024root* vlSelf);
void Vreg_alu_top___024root___eval_settle(Vreg_alu_top___024root* vlSelf);
void Vreg_alu_top___024root___eval(Vreg_alu_top___024root* vlSelf);
#ifdef VL_DEBUG
void Vreg_alu_top___024root___eval_debug_assertions(Vreg_alu_top___024root* vlSelf);
#endif  // VL_DEBUG
void Vreg_alu_top___024root___final(Vreg_alu_top___024root* vlSelf);

static void _eval_initial_loop(Vreg_alu_top__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vreg_alu_top___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vreg_alu_top___024root___eval_settle(&(vlSymsp->TOP));
        Vreg_alu_top___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void Vreg_alu_top::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vreg_alu_top::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vreg_alu_top___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vreg_alu_top___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

const char* Vreg_alu_top::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vreg_alu_top::final() {
    Vreg_alu_top___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vreg_alu_top::hierName() const { return vlSymsp->name(); }
const char* Vreg_alu_top::modelName() const { return "Vreg_alu_top"; }
unsigned Vreg_alu_top::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> Vreg_alu_top::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vreg_alu_top___024root__trace_init_top(Vreg_alu_top___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vreg_alu_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vreg_alu_top___024root*>(voidSelf);
    Vreg_alu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vreg_alu_top___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vreg_alu_top___024root__trace_register(Vreg_alu_top___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vreg_alu_top::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vreg_alu_top::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vreg_alu_top___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
