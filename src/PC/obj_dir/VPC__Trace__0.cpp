// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VPC__Syms.h"


void VPC___024root__trace_chg_sub_0(VPC___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VPC___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPC___024root__trace_chg_top_0\n"); );
    // Init
    VPC___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VPC___024root*>(voidSelf);
    VPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VPC___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void VPC___024root__trace_chg_sub_0(VPC___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPC___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgIData(oldp+0,(vlSelf->ImmOp),32);
    bufp->chgBit(oldp+1,(vlSelf->clk));
    bufp->chgBit(oldp+2,(vlSelf->rst));
    bufp->chgBit(oldp+3,(vlSelf->jmp_sel));
    bufp->chgIData(oldp+4,(vlSelf->PC_OUT),32);
    bufp->chgIData(oldp+5,(((IData)(vlSelf->jmp_sel)
                             ? (vlSelf->PC__DOT__PCReg__DOT__current_PC 
                                + vlSelf->ImmOp) : 
                            ((IData)(4U) + vlSelf->PC__DOT__PCReg__DOT__current_PC))),32);
    bufp->chgIData(oldp+6,(vlSelf->PC__DOT__PCReg__DOT__current_PC),32);
}

void VPC___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPC___024root__trace_cleanup\n"); );
    // Init
    VPC___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VPC___024root*>(voidSelf);
    VPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
