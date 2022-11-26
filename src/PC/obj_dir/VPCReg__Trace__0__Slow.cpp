// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VPCReg__Syms.h"


VL_ATTR_COLD void VPCReg___024root__trace_init_sub__TOP__0(VPCReg___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VPCReg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPCReg___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"rst", false,-1);
    tracep->declBus(c+3,"next_PC", false,-1, 7,0);
    tracep->declBus(c+4,"PC", false,-1, 7,0);
    tracep->pushNamePrefix("PCReg ");
    tracep->declBus(c+6,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"rst", false,-1);
    tracep->declBus(c+3,"next_PC", false,-1, 7,0);
    tracep->declBus(c+4,"PC", false,-1, 7,0);
    tracep->declBus(c+5,"current_PC", false,-1, 7,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void VPCReg___024root__trace_init_top(VPCReg___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VPCReg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPCReg___024root__trace_init_top\n"); );
    // Body
    VPCReg___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VPCReg___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VPCReg___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VPCReg___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VPCReg___024root__trace_register(VPCReg___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VPCReg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPCReg___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VPCReg___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VPCReg___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VPCReg___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VPCReg___024root__trace_full_sub_0(VPCReg___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VPCReg___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPCReg___024root__trace_full_top_0\n"); );
    // Init
    VPCReg___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VPCReg___024root*>(voidSelf);
    VPCReg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VPCReg___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VPCReg___024root__trace_full_sub_0(VPCReg___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VPCReg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPCReg___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->clk));
    bufp->fullBit(oldp+2,(vlSelf->rst));
    bufp->fullCData(oldp+3,(vlSelf->next_PC),8);
    bufp->fullCData(oldp+4,(vlSelf->PC),8);
    bufp->fullCData(oldp+5,(vlSelf->PCReg__DOT__current_PC),8);
    bufp->fullIData(oldp+6,(8U),32);
}
