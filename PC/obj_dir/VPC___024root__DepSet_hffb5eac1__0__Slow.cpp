// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPC.h for the primary calling header

#include "verilated.h"

#include "VPC___024root.h"

VL_ATTR_COLD void VPC___024root___settle__TOP__0(VPC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPC___024root___settle__TOP__0\n"); );
    // Body
    vlSelf->PC_OUT = vlSelf->PC__DOT__PCReg__DOT__current_PC;
    vlSelf->PC__DOT__branch_PC = (0xffU & ((IData)(vlSelf->jmp_sel)
                                            ? ((IData)(vlSelf->PC__DOT__PCReg__DOT__current_PC) 
                                               + (IData)(vlSelf->ImmOp))
                                            : ((IData)(4U) 
                                               + (IData)(vlSelf->PC__DOT__PCReg__DOT__current_PC))));
}

VL_ATTR_COLD void VPC___024root___eval_initial(VPC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPC___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

VL_ATTR_COLD void VPC___024root___eval_settle(VPC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPC___024root___eval_settle\n"); );
    // Body
    VPC___024root___settle__TOP__0(vlSelf);
}

VL_ATTR_COLD void VPC___024root___final(VPC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPC___024root___final\n"); );
}

VL_ATTR_COLD void VPC___024root___ctor_var_reset(VPC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPC___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->ImmOp = VL_RAND_RESET_I(8);
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->jmp_sel = VL_RAND_RESET_I(1);
    vlSelf->PC_OUT = VL_RAND_RESET_I(8);
    vlSelf->PC__DOT__branch_PC = VL_RAND_RESET_I(8);
    vlSelf->PC__DOT__PCReg__DOT__current_PC = VL_RAND_RESET_I(8);
}
