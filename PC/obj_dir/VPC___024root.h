// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VPC.h for the primary calling header

#ifndef VERILATED_VPC___024ROOT_H_
#define VERILATED_VPC___024ROOT_H_  // guard

#include "verilated.h"

class VPC__Syms;

class VPC___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(ImmOp,7,0);
    VL_IN8(rst,0,0);
    VL_IN8(jmp_sel,0,0);
    VL_OUT8(PC_OUT,7,0);
    CData/*7:0*/ PC__DOT__branch_PC;
    CData/*7:0*/ PC__DOT__PCReg__DOT__current_PC;
    CData/*0:0*/ __Vclklast__TOP__clk;

    // INTERNAL VARIABLES
    VPC__Syms* const vlSymsp;

    // CONSTRUCTORS
    VPC___024root(VPC__Syms* symsp, const char* name);
    ~VPC___024root();
    VL_UNCOPYABLE(VPC___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
