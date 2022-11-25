// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vreg_alu_top.h for the primary calling header

#ifndef VERILATED_VREG_ALU_TOP___024ROOT_H_
#define VERILATED_VREG_ALU_TOP___024ROOT_H_  // guard

#include "verilated.h"

class Vreg_alu_top__Syms;

class Vreg_alu_top___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(ALUsrc,0,0);
    VL_IN8(ALUctrl,2,0);
    VL_IN8(RegWrite,0,0);
    VL_OUT8(EQ,0,0);
    CData/*0:0*/ __Vclklast__TOP__clk;
    VL_IN(instr,31,0);
    VL_IN(ImmOp,31,0);
    VL_OUT(a0,31,0);
    IData/*31:0*/ reg_alu_top__DOT__ALUop1;
    IData/*31:0*/ reg_alu_top__DOT__ALUop2;
    VlUnpacked<IData/*31:0*/, 32> reg_alu_top__DOT__regfile__DOT__ram_array;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vreg_alu_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vreg_alu_top___024root(Vreg_alu_top__Syms* symsp, const char* name);
    ~Vreg_alu_top___024root();
    VL_UNCOPYABLE(Vreg_alu_top___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
