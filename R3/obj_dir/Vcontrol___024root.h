// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcontrol.h for the primary calling header

#ifndef VERILATED_VCONTROL___024ROOT_H_
#define VERILATED_VCONTROL___024ROOT_H_  // guard

#include "verilated.h"

class Vcontrol__Syms;

class Vcontrol___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(EQ,0,0);
    VL_OUT8(RegWrite,0,0);
    VL_OUT8(ALUctrl,2,0);
    VL_OUT8(ALUsrc,0,0);
    VL_OUT8(ImmSrc,1,0);
    VL_OUT8(PCsrc,0,0);
    CData/*1:0*/ control__DOT__cu__DOT__ALUOp;
    CData/*0:0*/ __Vclklast__TOP__clk;
    VL_IN(PC,31,0);
    VL_OUT(ImmExt,31,0);
    IData/*31:0*/ control__DOT__ins;
    IData/*31:0*/ control__DOT__PC1;
    VlUnpacked<CData/*7:0*/, 1048576> control__DOT__rom__DOT__rom_array;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vcontrol__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcontrol___024root(Vcontrol__Syms* symsp, const char* name);
    ~Vcontrol___024root();
    VL_UNCOPYABLE(Vcontrol___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
