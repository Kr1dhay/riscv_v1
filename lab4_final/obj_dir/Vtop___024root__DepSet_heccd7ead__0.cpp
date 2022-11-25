// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_ha3782434_0;
extern const VlUnpacked<CData/*1:0*/, 128> Vtop__ConstPool__TABLE_h090a41b9_0;
extern const VlUnpacked<CData/*1:0*/, 128> Vtop__ConstPool__TABLE_h8146b397_0;

VL_INLINE_OPT void Vtop___024root___sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx1;
    CData/*6:0*/ __Vtableidx2;
    CData/*6:0*/ __Vtableidx3;
    CData/*4:0*/ __Vdlyvdim0__top__DOT__alu__DOT__myRegFile__DOT__rom_array__v0;
    IData/*31:0*/ __Vdlyvval__top__DOT__alu__DOT__myRegFile__DOT__rom_array__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__alu__DOT__myRegFile__DOT__rom_array__v0;
    // Body
    __Vdlyvset__top__DOT__alu__DOT__myRegFile__DOT__rom_array__v0 = 0U;
    if (vlSelf->top__DOT__we3) {
        __Vdlyvval__top__DOT__alu__DOT__myRegFile__DOT__rom_array__v0 
            = ((0U == (IData)(vlSelf->top__DOT__aluCTR))
                ? (vlSelf->top__DOT__alu__DOT__aluOp1 
                   + vlSelf->top__DOT__alu__DOT__aluOp2)
                : 0U);
        __Vdlyvset__top__DOT__alu__DOT__myRegFile__DOT__rom_array__v0 = 1U;
        __Vdlyvdim0__top__DOT__alu__DOT__myRegFile__DOT__rom_array__v0 
            = (0x1fU & (vlSelf->top__DOT__ctr__DOT__ins 
                        >> 7U));
    }
    vlSelf->top__DOT__pc = ((IData)(vlSelf->rst) ? 0U
                             : vlSelf->top__DOT__pcounter__DOT__next_PC);
    if (__Vdlyvset__top__DOT__alu__DOT__myRegFile__DOT__rom_array__v0) {
        vlSelf->top__DOT__alu__DOT__myRegFile__DOT__rom_array[__Vdlyvdim0__top__DOT__alu__DOT__myRegFile__DOT__rom_array__v0] 
            = __Vdlyvval__top__DOT__alu__DOT__myRegFile__DOT__rom_array__v0;
    }
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

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vtop___024root___sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
