// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcontrol.h for the primary calling header

#include "verilated.h"

#include "Vcontrol___024root.h"

extern const VlUnpacked<CData/*0:0*/, 128> Vcontrol__ConstPool__TABLE_ha3782434_0;
extern const VlUnpacked<CData/*1:0*/, 128> Vcontrol__ConstPool__TABLE_h090a41b9_0;
extern const VlUnpacked<CData/*1:0*/, 128> Vcontrol__ConstPool__TABLE_h8146b397_0;

VL_INLINE_OPT void Vcontrol___024root___combo__TOP__0(Vcontrol___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcontrol__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol___024root___combo__TOP__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx1;
    CData/*6:0*/ __Vtableidx2;
    CData/*6:0*/ __Vtableidx3;
    // Body
    vlSelf->control__DOT__ins = ((vlSelf->control__DOT__rom__DOT__rom_array
                                  [(1U & vlSelf->PC)] 
                                  << 0x18U) | ((vlSelf->control__DOT__rom__DOT__rom_array
                                                [(1U 
                                                  & ((IData)(1U) 
                                                     + vlSelf->PC))] 
                                                << 0x10U) 
                                               | ((vlSelf->control__DOT__rom__DOT__rom_array
                                                   [
                                                   (1U 
                                                    & vlSelf->PC)] 
                                                   << 8U) 
                                                  | vlSelf->control__DOT__rom__DOT__rom_array
                                                  [
                                                  (1U 
                                                   & ((IData)(1U) 
                                                      + vlSelf->PC))])));
    vlSelf->ALUsrc = (0x33U != (0x7fU & vlSelf->control__DOT__ins));
    vlSelf->PCsrc = ((IData)(vlSelf->EQ) & (0x63U == 
                                            (0x7fU 
                                             & vlSelf->control__DOT__ins)));
    __Vtableidx2 = (0x7fU & vlSelf->control__DOT__ins);
    vlSelf->RegWrite = Vcontrol__ConstPool__TABLE_ha3782434_0
        [__Vtableidx2];
    __Vtableidx1 = (0x7fU & vlSelf->control__DOT__ins);
    vlSelf->control__DOT__cu__DOT__ALUOp = Vcontrol__ConstPool__TABLE_h090a41b9_0
        [__Vtableidx1];
    __Vtableidx3 = (0x7fU & vlSelf->control__DOT__ins);
    vlSelf->ImmSrc = Vcontrol__ConstPool__TABLE_h8146b397_0
        [__Vtableidx3];
    if ((0U == (IData)(vlSelf->control__DOT__cu__DOT__ALUOp))) {
        vlSelf->ALUctrl = 0U;
    } else if ((1U == (IData)(vlSelf->control__DOT__cu__DOT__ALUOp))) {
        vlSelf->ALUctrl = 1U;
    } else if ((2U == (IData)(vlSelf->control__DOT__cu__DOT__ALUOp))) {
        vlSelf->ALUctrl = ((3U & (IData)(vlSelf->ALUctrl)) 
                           | ((IData)((0x2000U == (0x6000U 
                                                   & vlSelf->control__DOT__ins))) 
                              << 2U));
        vlSelf->ALUctrl = ((5U & (IData)(vlSelf->ALUctrl)) 
                           | ((IData)((0x6000U == (0x6000U 
                                                   & vlSelf->control__DOT__ins))) 
                              << 1U));
        vlSelf->ALUctrl = ((6U & (IData)(vlSelf->ALUctrl)) 
                           | (1U & (((IData)((0x2000U 
                                              == (0x6000U 
                                                  & vlSelf->control__DOT__ins))) 
                                     | (IData)((0x3000U 
                                                == 
                                                (0x3000U 
                                                 & vlSelf->control__DOT__ins)))) 
                                    | (IData)((0x40000000U 
                                               == (0x40007000U 
                                                   & vlSelf->control__DOT__ins))))));
    } else {
        vlSelf->ALUctrl = 0U;
    }
    vlSelf->ImmExt = ((0xfffU & vlSelf->ImmExt) | (
                                                   (- (IData)(
                                                              (vlSelf->control__DOT__ins 
                                                               >> 0x1fU))) 
                                                   << 0xcU));
    vlSelf->ImmExt = ((2U & (IData)(vlSelf->ImmSrc))
                       ? ((1U & (IData)(vlSelf->ImmSrc))
                           ? (0xfffff000U & vlSelf->control__DOT__ins)
                           : ((0xfffff000U & vlSelf->ImmExt) 
                              | ((0x800U & (vlSelf->control__DOT__ins 
                                            << 4U)) 
                                 | ((0x7e0U & (vlSelf->control__DOT__ins 
                                               >> 0x14U)) 
                                    | (0x1eU & (vlSelf->control__DOT__ins 
                                                >> 7U))))))
                       : ((0xfffff000U & vlSelf->ImmExt) 
                          | (0xfffU & ((1U & (IData)(vlSelf->ImmSrc))
                                        ? ((0xfe0U 
                                            & (vlSelf->control__DOT__ins 
                                               >> 0x14U)) 
                                           | (0x1fU 
                                              & (vlSelf->control__DOT__ins 
                                                 >> 7U)))
                                        : (vlSelf->control__DOT__ins 
                                           >> 0x14U)))));
}

void Vcontrol___024root___eval(Vcontrol___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcontrol__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol___024root___eval\n"); );
    // Body
    Vcontrol___024root___combo__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
}

#ifdef VL_DEBUG
void Vcontrol___024root___eval_debug_assertions(Vcontrol___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcontrol__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->EQ & 0xfeU))) {
        Verilated::overWidthError("EQ");}
}
#endif  // VL_DEBUG
