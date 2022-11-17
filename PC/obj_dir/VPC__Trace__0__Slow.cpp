// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VPC__Syms.h"


VL_ATTR_COLD void VPC___024root__trace_init_sub__TOP__0(VPC___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPC___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1,"ImmOp", false,-1, 7,0);
    tracep->declBit(c+2,"clk", false,-1);
    tracep->declBit(c+3,"rst", false,-1);
    tracep->declBit(c+4,"jmp_sel", false,-1);
    tracep->declBus(c+5,"PC_OUT", false,-1, 7,0);
    tracep->pushNamePrefix("PC ");
    tracep->declBus(c+8,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1,"ImmOp", false,-1, 7,0);
    tracep->declBit(c+2,"clk", false,-1);
    tracep->declBit(c+3,"rst", false,-1);
    tracep->declBit(c+4,"jmp_sel", false,-1);
    tracep->declBus(c+5,"PC_OUT", false,-1, 7,0);
    tracep->declBus(c+6,"branch_PC", false,-1, 7,0);
    tracep->declBus(c+7,"current_PC", false,-1, 7,0);
    tracep->pushNamePrefix("PCReg ");
    tracep->declBus(c+8,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+2,"clk", false,-1);
    tracep->declBit(c+3,"rst", false,-1);
    tracep->declBus(c+6,"next_PC", false,-1, 7,0);
    tracep->declBus(c+7,"PC", false,-1, 7,0);
    tracep->declBus(c+7,"current_PC", false,-1, 7,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void VPC___024root__trace_init_top(VPC___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPC___024root__trace_init_top\n"); );
    // Body
    VPC___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VPC___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VPC___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VPC___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VPC___024root__trace_register(VPC___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPC___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VPC___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VPC___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VPC___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VPC___024root__trace_full_sub_0(VPC___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VPC___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPC___024root__trace_full_top_0\n"); );
    // Init
    VPC___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VPC___024root*>(voidSelf);
    VPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VPC___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VPC___024root__trace_full_sub_0(VPC___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPC___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelf->ImmOp),8);
    bufp->fullBit(oldp+2,(vlSelf->clk));
    bufp->fullBit(oldp+3,(vlSelf->rst));
    bufp->fullBit(oldp+4,(vlSelf->jmp_sel));
    bufp->fullCData(oldp+5,(vlSelf->PC_OUT),8);
    bufp->fullCData(oldp+6,((0xffU & ((IData)(vlSelf->jmp_sel)
                                       ? ((IData)(vlSelf->PC__DOT__PCReg__DOT__current_PC) 
                                          + (IData)(vlSelf->ImmOp))
                                       : ((IData)(4U) 
                                          + (IData)(vlSelf->PC__DOT__PCReg__DOT__current_PC))))),8);
    bufp->fullCData(oldp+7,(vlSelf->PC__DOT__PCReg__DOT__current_PC),8);
    bufp->fullIData(oldp+8,(8U),32);
}
