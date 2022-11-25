// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"

class Vtop__Syms;

class Vtop___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    CData/*0:0*/ top__DOT__we3;
    CData/*2:0*/ top__DOT__aluCTR;
    CData/*1:0*/ top__DOT__ctr__DOT__ImmSrc;
    CData/*1:0*/ top__DOT__ctr__DOT__cu__DOT__ALUOp;
    CData/*0:0*/ __Vclklast__TOP__clk;
    VL_OUT(a0,31,0);
    IData/*31:0*/ top__DOT__ImmOp;
    IData/*31:0*/ top__DOT__pc;
    IData/*31:0*/ top__DOT__pcounter__DOT__next_PC;
    IData/*31:0*/ top__DOT__ctr__DOT__ins;
    IData/*31:0*/ top__DOT__alu__DOT__aluOp1;
    IData/*31:0*/ top__DOT__alu__DOT__aluOp2;
    VlUnpacked<CData/*7:0*/, 1048576> top__DOT__ctr__DOT__rom__DOT__rom_array;
    VlUnpacked<IData/*31:0*/, 32> top__DOT__alu__DOT__myRegFile__DOT__rom_array;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
