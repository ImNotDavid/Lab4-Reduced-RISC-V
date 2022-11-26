// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vreg_alu_top.h for the primary calling header

#include "verilated.h"

#include "Vreg_alu_top___024root.h"

VL_ATTR_COLD void Vreg_alu_top___024root___settle__TOP__0(Vreg_alu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vreg_alu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreg_alu_top___024root___settle__TOP__0\n"); );
    // Body
    vlSelf->a0 = vlSelf->reg_alu_top__DOT__regfile__DOT__ram_array
        [0xaU];
    vlSelf->reg_alu_top__DOT__ALUop1 = vlSelf->reg_alu_top__DOT__regfile__DOT__ram_array
        [(0x1fU & (vlSelf->instr >> 0xfU))];
    vlSelf->reg_alu_top__DOT__ALUop2 = ((IData)(vlSelf->ALUsrc)
                                         ? vlSelf->ImmOp
                                         : vlSelf->reg_alu_top__DOT__regfile__DOT__ram_array
                                        [(0x1fU & (vlSelf->instr 
                                                   >> 0x14U))]);
    vlSelf->EQ = (vlSelf->reg_alu_top__DOT__ALUop1 
                  == vlSelf->reg_alu_top__DOT__ALUop2);
}

VL_ATTR_COLD void Vreg_alu_top___024root___eval_initial(Vreg_alu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vreg_alu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreg_alu_top___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

VL_ATTR_COLD void Vreg_alu_top___024root___eval_settle(Vreg_alu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vreg_alu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreg_alu_top___024root___eval_settle\n"); );
    // Body
    Vreg_alu_top___024root___settle__TOP__0(vlSelf);
}

VL_ATTR_COLD void Vreg_alu_top___024root___final(Vreg_alu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vreg_alu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreg_alu_top___024root___final\n"); );
}

VL_ATTR_COLD void Vreg_alu_top___024root___ctor_var_reset(Vreg_alu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vreg_alu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreg_alu_top___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->ALUsrc = VL_RAND_RESET_I(1);
    vlSelf->ALUctrl = VL_RAND_RESET_I(3);
    vlSelf->RegWrite = VL_RAND_RESET_I(1);
    vlSelf->instr = VL_RAND_RESET_I(32);
    vlSelf->ImmOp = VL_RAND_RESET_I(32);
    vlSelf->a0 = VL_RAND_RESET_I(32);
    vlSelf->EQ = VL_RAND_RESET_I(1);
    vlSelf->reg_alu_top__DOT__ALUop1 = VL_RAND_RESET_I(32);
    vlSelf->reg_alu_top__DOT__ALUop2 = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->reg_alu_top__DOT__regfile__DOT__ram_array[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
