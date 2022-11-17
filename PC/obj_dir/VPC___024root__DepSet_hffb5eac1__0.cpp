// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPC.h for the primary calling header

#include "verilated.h"

#include "VPC___024root.h"

VL_INLINE_OPT void VPC___024root___sequent__TOP__0(VPC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPC___024root___sequent__TOP__0\n"); );
    // Body
    vlSelf->PC__DOT__PCReg__DOT__current_PC = ((IData)(vlSelf->rst)
                                                ? 0U
                                                : (IData)(vlSelf->PC__DOT__branch_PC));
    vlSelf->PC_OUT = vlSelf->PC__DOT__PCReg__DOT__current_PC;
}

VL_INLINE_OPT void VPC___024root___combo__TOP__0(VPC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPC___024root___combo__TOP__0\n"); );
    // Body
    vlSelf->PC__DOT__branch_PC = (0xffU & ((IData)(vlSelf->jmp_sel)
                                            ? ((IData)(vlSelf->PC__DOT__PCReg__DOT__current_PC) 
                                               + (IData)(vlSelf->ImmOp))
                                            : ((IData)(4U) 
                                               + (IData)(vlSelf->PC__DOT__PCReg__DOT__current_PC))));
}

void VPC___024root___eval(VPC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPC___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        VPC___024root___sequent__TOP__0(vlSelf);
    }
    VPC___024root___combo__TOP__0(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

#ifdef VL_DEBUG
void VPC___024root___eval_debug_assertions(VPC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPC___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelf->jmp_sel & 0xfeU))) {
        Verilated::overWidthError("jmp_sel");}
}
#endif  // VL_DEBUG
