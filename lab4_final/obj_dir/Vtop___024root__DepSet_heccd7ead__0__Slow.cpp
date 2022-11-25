// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___initial__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___initial__TOP__0\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_h5fe04b9a__0;
    // Body
    VL_WRITEF("Loading rom.\n");
    __Vtemp_h5fe04b9a__0[0U] = 0x2e6d656dU;
    __Vtemp_h5fe04b9a__0[1U] = 0x6772616dU;
    __Vtemp_h5fe04b9a__0[2U] = 0x70726fU;
    VL_READMEM_N(true, 8, 1048576, 0, VL_CVT_PACK_STR_NW(3, __Vtemp_h5fe04b9a__0)
                 ,  &(vlSelf->top__DOT__ctr__DOT__rom__DOT__rom_array)
                 , 0, ~0ULL);
}

extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_ha3782434_0;
extern const VlUnpacked<CData/*1:0*/, 128> Vtop__ConstPool__TABLE_h090a41b9_0;
extern const VlUnpacked<CData/*1:0*/, 128> Vtop__ConstPool__TABLE_h8146b397_0;

VL_ATTR_COLD void Vtop___024root___settle__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx1;
    CData/*6:0*/ __Vtableidx2;
    CData/*6:0*/ __Vtableidx3;
    // Body
    vlSelf->a0 = vlSelf->top__DOT__alu__DOT__myRegFile__DOT__rom_array
        [0xaU];
    vlSelf->top__DOT__ctr__DOT__ins = ((vlSelf->top__DOT__ctr__DOT__rom__DOT__rom_array
                                        [(0xfffffU 
                                          & vlSelf->top__DOT__pc)] 
                                        << 0x18U) | 
                                       ((vlSelf->top__DOT__ctr__DOT__rom__DOT__rom_array
                                         [(0xfffffU 
                                           & ((IData)(1U) 
                                              + vlSelf->top__DOT__pc))] 
                                         << 0x10U) 
                                        | ((vlSelf->top__DOT__ctr__DOT__rom__DOT__rom_array
                                            [(0xfffffU 
                                              & ((IData)(2U) 
                                                 + vlSelf->top__DOT__pc))] 
                                            << 8U) 
                                           | vlSelf->top__DOT__ctr__DOT__rom__DOT__rom_array
                                           [(0xfffffU 
                                             & ((IData)(3U) 
                                                + vlSelf->top__DOT__pc))])));
    __Vtableidx2 = (0x7fU & vlSelf->top__DOT__ctr__DOT__ins);
    vlSelf->top__DOT__we3 = Vtop__ConstPool__TABLE_ha3782434_0
        [__Vtableidx2];
    __Vtableidx1 = (0x7fU & vlSelf->top__DOT__ctr__DOT__ins);
    vlSelf->top__DOT__ctr__DOT__cu__DOT__ALUOp = Vtop__ConstPool__TABLE_h090a41b9_0
        [__Vtableidx1];
    vlSelf->top__DOT__alu__DOT__aluOp1 = vlSelf->top__DOT__alu__DOT__myRegFile__DOT__rom_array
        [(0x1fU & (vlSelf->top__DOT__ctr__DOT__ins 
                   >> 0xfU))];
    __Vtableidx3 = (0x7fU & vlSelf->top__DOT__ctr__DOT__ins);
    vlSelf->top__DOT__ctr__DOT__ImmSrc = Vtop__ConstPool__TABLE_h8146b397_0
        [__Vtableidx3];
    if ((0U == (IData)(vlSelf->top__DOT__ctr__DOT__cu__DOT__ALUOp))) {
        vlSelf->top__DOT__aluCTR = 0U;
    } else if ((1U == (IData)(vlSelf->top__DOT__ctr__DOT__cu__DOT__ALUOp))) {
        vlSelf->top__DOT__aluCTR = 1U;
    } else if ((2U == (IData)(vlSelf->top__DOT__ctr__DOT__cu__DOT__ALUOp))) {
        vlSelf->top__DOT__aluCTR = ((3U & (IData)(vlSelf->top__DOT__aluCTR)) 
                                    | ((IData)((0x2000U 
                                                == 
                                                (0x6000U 
                                                 & vlSelf->top__DOT__ctr__DOT__ins))) 
                                       << 2U));
        vlSelf->top__DOT__aluCTR = ((5U & (IData)(vlSelf->top__DOT__aluCTR)) 
                                    | ((IData)((0x6000U 
                                                == 
                                                (0x6000U 
                                                 & vlSelf->top__DOT__ctr__DOT__ins))) 
                                       << 1U));
        vlSelf->top__DOT__aluCTR = ((6U & (IData)(vlSelf->top__DOT__aluCTR)) 
                                    | (1U & (((IData)(
                                                      (0x2000U 
                                                       == 
                                                       (0x6000U 
                                                        & vlSelf->top__DOT__ctr__DOT__ins))) 
                                              | (IData)(
                                                        (0x3000U 
                                                         == 
                                                         (0x3000U 
                                                          & vlSelf->top__DOT__ctr__DOT__ins)))) 
                                             | (IData)(
                                                       (0x40000000U 
                                                        == 
                                                        (0x40007000U 
                                                         & vlSelf->top__DOT__ctr__DOT__ins))))));
    } else {
        vlSelf->top__DOT__aluCTR = 0U;
    }
    vlSelf->top__DOT__ImmOp = ((0xfffU & vlSelf->top__DOT__ImmOp) 
                               | ((- (IData)((vlSelf->top__DOT__ctr__DOT__ins 
                                              >> 0x1fU))) 
                                  << 0xcU));
    vlSelf->top__DOT__ImmOp = ((2U & (IData)(vlSelf->top__DOT__ctr__DOT__ImmSrc))
                                ? ((1U & (IData)(vlSelf->top__DOT__ctr__DOT__ImmSrc))
                                    ? (0xfffff000U 
                                       & vlSelf->top__DOT__ctr__DOT__ins)
                                    : ((0xfffff000U 
                                        & vlSelf->top__DOT__ImmOp) 
                                       | ((0x800U & 
                                           (vlSelf->top__DOT__ctr__DOT__ins 
                                            << 4U)) 
                                          | ((0x7e0U 
                                              & (vlSelf->top__DOT__ctr__DOT__ins 
                                                 >> 0x14U)) 
                                             | (0x1eU 
                                                & (vlSelf->top__DOT__ctr__DOT__ins 
                                                   >> 7U))))))
                                : ((0xfffff000U & vlSelf->top__DOT__ImmOp) 
                                   | (0xfffU & ((1U 
                                                 & (IData)(vlSelf->top__DOT__ctr__DOT__ImmSrc))
                                                 ? 
                                                ((0xfe0U 
                                                  & (vlSelf->top__DOT__ctr__DOT__ins 
                                                     >> 0x14U)) 
                                                 | (0x1fU 
                                                    & (vlSelf->top__DOT__ctr__DOT__ins 
                                                       >> 7U)))
                                                 : 
                                                (vlSelf->top__DOT__ctr__DOT__ins 
                                                 >> 0x14U)))));
    vlSelf->top__DOT__alu__DOT__aluOp2 = (((0x33U == 
                                            (0x7fU 
                                             & vlSelf->top__DOT__ctr__DOT__ins)) 
                                           | (0x63U 
                                              == (0x7fU 
                                                  & vlSelf->top__DOT__ctr__DOT__ins)))
                                           ? vlSelf->top__DOT__alu__DOT__myRegFile__DOT__rom_array
                                          [(0x1fU & 
                                            (vlSelf->top__DOT__ctr__DOT__ins 
                                             >> 0x14U))]
                                           : vlSelf->top__DOT__ImmOp);
    vlSelf->top__DOT__pcounter__DOT__next_PC = ((((vlSelf->top__DOT__ctr__DOT__ins 
                                                   >> 0xcU) 
                                                  ^ 
                                                  (vlSelf->top__DOT__alu__DOT__aluOp1 
                                                   == vlSelf->top__DOT__alu__DOT__aluOp2)) 
                                                 & (0x63U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->top__DOT__ctr__DOT__ins)))
                                                 ? 
                                                (vlSelf->top__DOT__pc 
                                                 + vlSelf->top__DOT__ImmOp)
                                                 : 
                                                ((IData)(4U) 
                                                 + vlSelf->top__DOT__pc));
}

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    Vtop___024root___initial__TOP__0(vlSelf);
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Body
    Vtop___024root___settle__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vtop___024root___final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___final\n"); );
}

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->a0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ImmOp = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__we3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__aluCTR = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__pcounter__DOT__next_PC = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ctr__DOT__ins = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ctr__DOT__ImmSrc = VL_RAND_RESET_I(2);
    for (int __Vi0=0; __Vi0<1048576; ++__Vi0) {
        vlSelf->top__DOT__ctr__DOT__rom__DOT__rom_array[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->top__DOT__ctr__DOT__cu__DOT__ALUOp = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__alu__DOT__aluOp1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__alu__DOT__aluOp2 = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->top__DOT__alu__DOT__myRegFile__DOT__rom_array[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
