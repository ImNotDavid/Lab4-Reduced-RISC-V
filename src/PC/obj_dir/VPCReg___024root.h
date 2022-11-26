// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VPCReg.h for the primary calling header

#ifndef VERILATED_VPCREG___024ROOT_H_
#define VERILATED_VPCREG___024ROOT_H_  // guard

#include "verilated.h"

class VPCReg__Syms;

class VPCReg___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(next_PC,7,0);
    VL_OUT8(PC,7,0);
    CData/*7:0*/ PCReg__DOT__current_PC;
    CData/*0:0*/ __Vclklast__TOP__clk;

    // INTERNAL VARIABLES
    VPCReg__Syms* const vlSymsp;

    // CONSTRUCTORS
    VPCReg___024root(VPCReg__Syms* symsp, const char* name);
    ~VPCReg___024root();
    VL_UNCOPYABLE(VPCReg___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
