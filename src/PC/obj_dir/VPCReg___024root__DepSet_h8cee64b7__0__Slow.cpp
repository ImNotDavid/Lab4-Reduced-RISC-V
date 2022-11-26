// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPCReg.h for the primary calling header

#include "verilated.h"

#include "VPCReg___024root.h"

VL_ATTR_COLD void VPCReg___024root___settle__TOP__0(VPCReg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPCReg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPCReg___024root___settle__TOP__0\n"); );
    // Body
    vlSelf->PC = vlSelf->PCReg__DOT__current_PC;
}

VL_ATTR_COLD void VPCReg___024root___eval_initial(VPCReg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPCReg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPCReg___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

VL_ATTR_COLD void VPCReg___024root___eval_settle(VPCReg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPCReg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPCReg___024root___eval_settle\n"); );
    // Body
    VPCReg___024root___settle__TOP__0(vlSelf);
}

VL_ATTR_COLD void VPCReg___024root___final(VPCReg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPCReg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPCReg___024root___final\n"); );
}

VL_ATTR_COLD void VPCReg___024root___ctor_var_reset(VPCReg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPCReg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPCReg___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->next_PC = VL_RAND_RESET_I(8);
    vlSelf->PC = VL_RAND_RESET_I(8);
    vlSelf->PCReg__DOT__current_PC = VL_RAND_RESET_I(8);
}
