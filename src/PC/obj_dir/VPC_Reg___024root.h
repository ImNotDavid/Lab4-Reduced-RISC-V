// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VPC_Reg.h for the primary calling header

#ifndef VERILATED_VPC_REG___024ROOT_H_
#define VERILATED_VPC_REG___024ROOT_H_  // guard

#include "verilated.h"

class VPC_Reg__Syms;

class VPC_Reg___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(next_PC,7,0);
    VL_OUT8(PC,7,0);
    CData/*7:0*/ PC_Reg__DOT__current_PC;
    CData/*0:0*/ __Vclklast__TOP__clk;

    // INTERNAL VARIABLES
    VPC_Reg__Syms* const vlSymsp;

    // CONSTRUCTORS
    VPC_Reg___024root(VPC_Reg__Syms* symsp, const char* name);
    ~VPC_Reg___024root();
    VL_UNCOPYABLE(VPC_Reg___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
