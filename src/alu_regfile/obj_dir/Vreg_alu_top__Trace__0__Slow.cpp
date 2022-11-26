// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vreg_alu_top__Syms.h"


VL_ATTR_COLD void Vreg_alu_top___024root__trace_init_sub__TOP__0(Vreg_alu_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vreg_alu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreg_alu_top___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+33,"clk", false,-1);
    tracep->declBit(c+34,"ALUsrc", false,-1);
    tracep->declBus(c+35,"ALUctrl", false,-1, 2,0);
    tracep->declBit(c+36,"RegWrite", false,-1);
    tracep->declBus(c+37,"instr", false,-1, 31,0);
    tracep->declBus(c+38,"ImmOp", false,-1, 31,0);
    tracep->declBus(c+39,"a0", false,-1, 31,0);
    tracep->declBit(c+40,"EQ", false,-1);
    tracep->pushNamePrefix("reg_alu_top ");
    tracep->declBus(c+48,"IMMOP_WIDTH", false,-1, 31,0);
    tracep->declBus(c+48,"INSTR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+49,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+48,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+50,"CONTROL_WIDTH", false,-1, 31,0);
    tracep->declBit(c+33,"clk", false,-1);
    tracep->declBit(c+34,"ALUsrc", false,-1);
    tracep->declBus(c+35,"ALUctrl", false,-1, 2,0);
    tracep->declBit(c+36,"RegWrite", false,-1);
    tracep->declBus(c+37,"instr", false,-1, 31,0);
    tracep->declBus(c+38,"ImmOp", false,-1, 31,0);
    tracep->declBus(c+39,"a0", false,-1, 31,0);
    tracep->declBit(c+40,"EQ", false,-1);
    tracep->declBus(c+41,"rs2", false,-1, 4,0);
    tracep->declBus(c+42,"rs1", false,-1, 4,0);
    tracep->declBus(c+43,"rd", false,-1, 4,0);
    tracep->declBus(c+44,"ALUop1", false,-1, 31,0);
    tracep->declBus(c+45,"ALUop2", false,-1, 31,0);
    tracep->declBus(c+46,"regOp2", false,-1, 31,0);
    tracep->declBus(c+47,"ALUout", false,-1, 31,0);
    tracep->pushNamePrefix("alu ");
    tracep->declBus(c+48,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+50,"CONTROL_WIDTH", false,-1, 31,0);
    tracep->declBus(c+35,"ALUctrl", false,-1, 2,0);
    tracep->declBus(c+44,"ALUop1", false,-1, 31,0);
    tracep->declBus(c+45,"ALUop2", false,-1, 31,0);
    tracep->declBus(c+47,"ALUout", false,-1, 31,0);
    tracep->declBit(c+40,"EQ", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("regfile ");
    tracep->declBus(c+49,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+48,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+33,"clk", false,-1);
    tracep->declBus(c+42,"AD1", false,-1, 4,0);
    tracep->declBus(c+41,"AD2", false,-1, 4,0);
    tracep->declBus(c+43,"AD3", false,-1, 4,0);
    tracep->declBit(c+36,"WE3", false,-1);
    tracep->declBus(c+47,"WD3", false,-1, 31,0);
    tracep->declBus(c+44,"RD1", false,-1, 31,0);
    tracep->declBus(c+46,"RD2", false,-1, 31,0);
    tracep->declBus(c+39,"a0", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1+i*1,"ram_array", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vreg_alu_top___024root__trace_init_top(Vreg_alu_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vreg_alu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreg_alu_top___024root__trace_init_top\n"); );
    // Body
    Vreg_alu_top___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vreg_alu_top___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vreg_alu_top___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vreg_alu_top___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vreg_alu_top___024root__trace_register(Vreg_alu_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vreg_alu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreg_alu_top___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vreg_alu_top___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vreg_alu_top___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vreg_alu_top___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vreg_alu_top___024root__trace_full_sub_0(Vreg_alu_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vreg_alu_top___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreg_alu_top___024root__trace_full_top_0\n"); );
    // Init
    Vreg_alu_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vreg_alu_top___024root*>(voidSelf);
    Vreg_alu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vreg_alu_top___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vreg_alu_top___024root__trace_full_sub_0(Vreg_alu_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vreg_alu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreg_alu_top___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->reg_alu_top__DOT__regfile__DOT__ram_array[0]),32);
    bufp->fullIData(oldp+2,(vlSelf->reg_alu_top__DOT__regfile__DOT__ram_array[1]),32);
    bufp->fullIData(oldp+3,(vlSelf->reg_alu_top__DOT__regfile__DOT__ram_array[2]),32);
    bufp->fullIData(oldp+4,(vlSelf->reg_alu_top__DOT__regfile__DOT__ram_array[3]),32);
    bufp->fullIData(oldp+5,(vlSelf->reg_alu_top__DOT__regfile__DOT__ram_array[4]),32);
    bufp->fullIData(oldp+6,(vlSelf->reg_alu_top__DOT__regfile__DOT__ram_array[5]),32);
    bufp->fullIData(oldp+7,(vlSelf->reg_alu_top__DOT__regfile__DOT__ram_array[6]),32);
    bufp->fullIData(oldp+8,(vlSelf->reg_alu_top__DOT__regfile__DOT__ram_array[7]),32);
    bufp->fullIData(oldp+9,(vlSelf->reg_alu_top__DOT__regfile__DOT__ram_array[8]),32);
    bufp->fullIData(oldp+10,(vlSelf->reg_alu_top__DOT__regfile__DOT__ram_array[9]),32);
    bufp->fullIData(oldp+11,(vlSelf->reg_alu_top__DOT__regfile__DOT__ram_array[10]),32);
    bufp->fullIData(oldp+12,(vlSelf->reg_alu_top__DOT__regfile__DOT__ram_array[11]),32);
    bufp->fullIData(oldp+13,(vlSelf->reg_alu_top__DOT__regfile__DOT__ram_array[12]),32);
    bufp->fullIData(oldp+14,(vlSelf->reg_alu_top__DOT__regfile__DOT__ram_array[13]),32);
    bufp->fullIData(oldp+15,(vlSelf->reg_alu_top__DOT__regfile__DOT__ram_array[14]),32);
    bufp->fullIData(oldp+16,(vlSelf->reg_alu_top__DOT__regfile__DOT__ram_array[15]),32);
    bufp->fullIData(oldp+17,(vlSelf->reg_alu_top__DOT__regfile__DOT__ram_array[16]),32);
    bufp->fullIData(oldp+18,(vlSelf->reg_alu_top__DOT__regfile__DOT__ram_array[17]),32);
    bufp->fullIData(oldp+19,(vlSelf->reg_alu_top__DOT__regfile__DOT__ram_array[18]),32);
    bufp->fullIData(oldp+20,(vlSelf->reg_alu_top__DOT__regfile__DOT__ram_array[19]),32);
    bufp->fullIData(oldp+21,(vlSelf->reg_alu_top__DOT__regfile__DOT__ram_array[20]),32);
    bufp->fullIData(oldp+22,(vlSelf->reg_alu_top__DOT__regfile__DOT__ram_array[21]),32);
    bufp->fullIData(oldp+23,(vlSelf->reg_alu_top__DOT__regfile__DOT__ram_array[22]),32);
    bufp->fullIData(oldp+24,(vlSelf->reg_alu_top__DOT__regfile__DOT__ram_array[23]),32);
    bufp->fullIData(oldp+25,(vlSelf->reg_alu_top__DOT__regfile__DOT__ram_array[24]),32);
    bufp->fullIData(oldp+26,(vlSelf->reg_alu_top__DOT__regfile__DOT__ram_array[25]),32);
    bufp->fullIData(oldp+27,(vlSelf->reg_alu_top__DOT__regfile__DOT__ram_array[26]),32);
    bufp->fullIData(oldp+28,(vlSelf->reg_alu_top__DOT__regfile__DOT__ram_array[27]),32);
    bufp->fullIData(oldp+29,(vlSelf->reg_alu_top__DOT__regfile__DOT__ram_array[28]),32);
    bufp->fullIData(oldp+30,(vlSelf->reg_alu_top__DOT__regfile__DOT__ram_array[29]),32);
    bufp->fullIData(oldp+31,(vlSelf->reg_alu_top__DOT__regfile__DOT__ram_array[30]),32);
    bufp->fullIData(oldp+32,(vlSelf->reg_alu_top__DOT__regfile__DOT__ram_array[31]),32);
    bufp->fullBit(oldp+33,(vlSelf->clk));
    bufp->fullBit(oldp+34,(vlSelf->ALUsrc));
    bufp->fullCData(oldp+35,(vlSelf->ALUctrl),3);
    bufp->fullBit(oldp+36,(vlSelf->RegWrite));
    bufp->fullIData(oldp+37,(vlSelf->instr),32);
    bufp->fullIData(oldp+38,(vlSelf->ImmOp),32);
    bufp->fullIData(oldp+39,(vlSelf->a0),32);
    bufp->fullBit(oldp+40,(vlSelf->EQ));
    bufp->fullCData(oldp+41,((0x1fU & (vlSelf->instr 
                                       >> 0x14U))),5);
    bufp->fullCData(oldp+42,((0x1fU & (vlSelf->instr 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+43,((0x1fU & (vlSelf->instr 
                                       >> 7U))),5);
    bufp->fullIData(oldp+44,(vlSelf->reg_alu_top__DOT__ALUop1),32);
    bufp->fullIData(oldp+45,(vlSelf->reg_alu_top__DOT__ALUop2),32);
    bufp->fullIData(oldp+46,(vlSelf->reg_alu_top__DOT__regfile__DOT__ram_array
                             [(0x1fU & (vlSelf->instr 
                                        >> 0x14U))]),32);
    bufp->fullIData(oldp+47,(((4U & (IData)(vlSelf->ALUctrl))
                               ? ((2U & (IData)(vlSelf->ALUctrl))
                                   ? 0U : ((1U & (IData)(vlSelf->ALUctrl))
                                            ? ((vlSelf->reg_alu_top__DOT__ALUop1 
                                                < vlSelf->reg_alu_top__DOT__ALUop2)
                                                ? 1U
                                                : 0U)
                                            : 0U)) : 
                              ((2U & (IData)(vlSelf->ALUctrl))
                                ? ((1U & (IData)(vlSelf->ALUctrl))
                                    ? (vlSelf->reg_alu_top__DOT__ALUop1 
                                       | vlSelf->reg_alu_top__DOT__ALUop2)
                                    : (vlSelf->reg_alu_top__DOT__ALUop1 
                                       & vlSelf->reg_alu_top__DOT__ALUop2))
                                : ((1U & (IData)(vlSelf->ALUctrl))
                                    ? (vlSelf->reg_alu_top__DOT__ALUop1 
                                       - vlSelf->reg_alu_top__DOT__ALUop2)
                                    : (vlSelf->reg_alu_top__DOT__ALUop1 
                                       + vlSelf->reg_alu_top__DOT__ALUop2))))),32);
    bufp->fullIData(oldp+48,(0x20U),32);
    bufp->fullIData(oldp+49,(5U),32);
    bufp->fullIData(oldp+50,(3U),32);
}
