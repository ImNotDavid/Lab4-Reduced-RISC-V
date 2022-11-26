// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPC_Reg.h for the primary calling header

#include "verilated.h"

#include "VPC_Reg___024root.h"

VL_INLINE_OPT void VPC_Reg___024root___sequent__TOP__0(VPC_Reg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPC_Reg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPC_Reg___024root___sequent__TOP__0\n"); );
    // Body
    vlSelf->PC_Reg__DOT__current_PC = ((IData)(vlSelf->rst)
                                        ? 0U : (IData)(vlSelf->next_PC));
    vlSelf->PC = vlSelf->PC_Reg__DOT__current_PC;
}

void VPC_Reg___024root___eval(VPC_Reg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPC_Reg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPC_Reg___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        VPC_Reg___024root___sequent__TOP__0(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

#ifdef VL_DEBUG
void VPC_Reg___024root___eval_debug_assertions(VPC_Reg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPC_Reg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPC_Reg___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
