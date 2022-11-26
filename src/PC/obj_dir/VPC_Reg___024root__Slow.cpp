// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPC_Reg.h for the primary calling header

#include "verilated.h"

#include "VPC_Reg__Syms.h"
#include "VPC_Reg___024root.h"

void VPC_Reg___024root___ctor_var_reset(VPC_Reg___024root* vlSelf);

VPC_Reg___024root::VPC_Reg___024root(VPC_Reg__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VPC_Reg___024root___ctor_var_reset(this);
}

void VPC_Reg___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VPC_Reg___024root::~VPC_Reg___024root() {
}
