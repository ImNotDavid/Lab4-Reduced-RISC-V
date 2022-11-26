// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPC_Reg.h for the primary calling header

#include "verilated.h"

#include "VPC_Reg___024root.h"

VL_ATTR_COLD void VPC_Reg___024root___settle__TOP__0(VPC_Reg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPC_Reg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPC_Reg___024root___settle__TOP__0\n"); );
    // Body
    vlSelf->PC = vlSelf->PC_Reg__DOT__current_PC;
}

VL_ATTR_COLD void VPC_Reg___024root___eval_initial(VPC_Reg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPC_Reg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPC_Reg___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

VL_ATTR_COLD void VPC_Reg___024root___eval_settle(VPC_Reg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPC_Reg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPC_Reg___024root___eval_settle\n"); );
    // Body
    VPC_Reg___024root___settle__TOP__0(vlSelf);
}

VL_ATTR_COLD void VPC_Reg___024root___final(VPC_Reg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPC_Reg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPC_Reg___024root___final\n"); );
}

VL_ATTR_COLD void VPC_Reg___024root___ctor_var_reset(VPC_Reg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPC_Reg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPC_Reg___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->next_PC = VL_RAND_RESET_I(8);
    vlSelf->PC = VL_RAND_RESET_I(8);
    vlSelf->PC_Reg__DOT__current_PC = VL_RAND_RESET_I(8);
}
