// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vreg_alu_top.h for the primary calling header

#include "verilated.h"

#include "Vreg_alu_top___024root.h"

VL_INLINE_OPT void Vreg_alu_top___024root___sequent__TOP__0(Vreg_alu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vreg_alu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreg_alu_top___024root___sequent__TOP__0\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__reg_alu_top__DOT__regfile__DOT__ram_array__v0;
    IData/*31:0*/ __Vdlyvval__reg_alu_top__DOT__regfile__DOT__ram_array__v0;
    CData/*0:0*/ __Vdlyvset__reg_alu_top__DOT__regfile__DOT__ram_array__v0;
    // Body
    __Vdlyvset__reg_alu_top__DOT__regfile__DOT__ram_array__v0 = 0U;
    if (vlSelf->RegWrite) {
        __Vdlyvval__reg_alu_top__DOT__regfile__DOT__ram_array__v0 
            = ((4U & (IData)(vlSelf->ALUctrl)) ? ((2U 
                                                   & (IData)(vlSelf->ALUctrl))
                                                   ? 0U
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->ALUctrl))
                                                    ? 
                                                   ((vlSelf->reg_alu_top__DOT__ALUop1 
                                                     < vlSelf->reg_alu_top__DOT__ALUop2)
                                                     ? 1U
                                                     : 0U)
                                                    : 0U))
                : ((2U & (IData)(vlSelf->ALUctrl)) ? 
                   ((1U & (IData)(vlSelf->ALUctrl))
                     ? (vlSelf->reg_alu_top__DOT__ALUop1 
                        | vlSelf->reg_alu_top__DOT__ALUop2)
                     : (vlSelf->reg_alu_top__DOT__ALUop1 
                        & vlSelf->reg_alu_top__DOT__ALUop2))
                    : ((1U & (IData)(vlSelf->ALUctrl))
                        ? (vlSelf->reg_alu_top__DOT__ALUop1 
                           - vlSelf->reg_alu_top__DOT__ALUop2)
                        : (vlSelf->reg_alu_top__DOT__ALUop1 
                           + vlSelf->reg_alu_top__DOT__ALUop2))));
        __Vdlyvset__reg_alu_top__DOT__regfile__DOT__ram_array__v0 = 1U;
        __Vdlyvdim0__reg_alu_top__DOT__regfile__DOT__ram_array__v0 
            = (0x1fU & (vlSelf->instr >> 7U));
    }
    if (__Vdlyvset__reg_alu_top__DOT__regfile__DOT__ram_array__v0) {
        vlSelf->reg_alu_top__DOT__regfile__DOT__ram_array[__Vdlyvdim0__reg_alu_top__DOT__regfile__DOT__ram_array__v0] 
            = __Vdlyvval__reg_alu_top__DOT__regfile__DOT__ram_array__v0;
    }
    vlSelf->a0 = vlSelf->reg_alu_top__DOT__regfile__DOT__ram_array
        [0xaU];
}

VL_INLINE_OPT void Vreg_alu_top___024root___combo__TOP__0(Vreg_alu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vreg_alu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreg_alu_top___024root___combo__TOP__0\n"); );
    // Body
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

void Vreg_alu_top___024root___eval(Vreg_alu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vreg_alu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreg_alu_top___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vreg_alu_top___024root___sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    Vreg_alu_top___024root___combo__TOP__0(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

#ifdef VL_DEBUG
void Vreg_alu_top___024root___eval_debug_assertions(Vreg_alu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vreg_alu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreg_alu_top___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->ALUsrc & 0xfeU))) {
        Verilated::overWidthError("ALUsrc");}
    if (VL_UNLIKELY((vlSelf->ALUctrl & 0xf8U))) {
        Verilated::overWidthError("ALUctrl");}
    if (VL_UNLIKELY((vlSelf->RegWrite & 0xfeU))) {
        Verilated::overWidthError("RegWrite");}
}
#endif  // VL_DEBUG
