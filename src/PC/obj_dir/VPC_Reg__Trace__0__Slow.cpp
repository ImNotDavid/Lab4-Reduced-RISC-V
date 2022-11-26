// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VPC_Reg__Syms.h"


VL_ATTR_COLD void VPC_Reg___024root__trace_init_sub__TOP__0(VPC_Reg___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VPC_Reg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPC_Reg___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"rst", false,-1);
    tracep->declBus(c+3,"next_PC", false,-1, 7,0);
    tracep->declBus(c+4,"PC", false,-1, 7,0);
    tracep->pushNamePrefix("PC_Reg ");
    tracep->declBus(c+6,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"rst", false,-1);
    tracep->declBus(c+3,"next_PC", false,-1, 7,0);
    tracep->declBus(c+4,"PC", false,-1, 7,0);
    tracep->declBus(c+5,"current_PC", false,-1, 7,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void VPC_Reg___024root__trace_init_top(VPC_Reg___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VPC_Reg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPC_Reg___024root__trace_init_top\n"); );
    // Body
    VPC_Reg___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VPC_Reg___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VPC_Reg___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VPC_Reg___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VPC_Reg___024root__trace_register(VPC_Reg___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VPC_Reg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPC_Reg___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VPC_Reg___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VPC_Reg___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VPC_Reg___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VPC_Reg___024root__trace_full_sub_0(VPC_Reg___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VPC_Reg___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPC_Reg___024root__trace_full_top_0\n"); );
    // Init
    VPC_Reg___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VPC_Reg___024root*>(voidSelf);
    VPC_Reg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VPC_Reg___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VPC_Reg___024root__trace_full_sub_0(VPC_Reg___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VPC_Reg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPC_Reg___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->clk));
    bufp->fullBit(oldp+2,(vlSelf->rst));
    bufp->fullCData(oldp+3,(vlSelf->next_PC),8);
    bufp->fullCData(oldp+4,(vlSelf->PC),8);
    bufp->fullCData(oldp+5,(vlSelf->PC_Reg__DOT__current_PC),8);
    bufp->fullIData(oldp+6,(8U),32);
}
