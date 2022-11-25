// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcontrol.h for the primary calling header

#include "verilated.h"

#include "Vcontrol___024root.h"

VL_ATTR_COLD void Vcontrol___024root___initial__TOP__0(Vcontrol___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcontrol__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol___024root___initial__TOP__0\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_h5fe04b9a__0;
    // Body
    VL_WRITEF("Loading rom.\n");
    __Vtemp_h5fe04b9a__0[0U] = 0x2e6d656dU;
    __Vtemp_h5fe04b9a__0[1U] = 0x6772616dU;
    __Vtemp_h5fe04b9a__0[2U] = 0x70726fU;
    VL_READMEM_N(true, 8, 1048576, 0, VL_CVT_PACK_STR_NW(3, __Vtemp_h5fe04b9a__0)
                 ,  &(vlSelf->control__DOT__rom__DOT__rom_array)
                 , 0, ~0ULL);
}

extern const VlUnpacked<CData/*0:0*/, 128> Vcontrol__ConstPool__TABLE_ha3782434_0;
extern const VlUnpacked<CData/*1:0*/, 128> Vcontrol__ConstPool__TABLE_h090a41b9_0;
extern const VlUnpacked<CData/*1:0*/, 128> Vcontrol__ConstPool__TABLE_h8146b397_0;

VL_ATTR_COLD void Vcontrol___024root___settle__TOP__0(Vcontrol___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcontrol__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol___024root___settle__TOP__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx1;
    CData/*6:0*/ __Vtableidx2;
    CData/*6:0*/ __Vtableidx3;
    // Body
    vlSelf->control__DOT__ins = ((vlSelf->control__DOT__rom__DOT__rom_array
                                  [(0xfffffU & vlSelf->control__DOT__PC1)] 
                                  << 0x18U) | ((vlSelf->control__DOT__rom__DOT__rom_array
                                                [(0xfffffU 
                                                  & ((IData)(1U) 
                                                     + vlSelf->control__DOT__PC1))] 
                                                << 0x10U) 
                                               | ((vlSelf->control__DOT__rom__DOT__rom_array
                                                   [
                                                   (0xfffffU 
                                                    & ((IData)(2U) 
                                                       + vlSelf->control__DOT__PC1))] 
                                                   << 8U) 
                                                  | vlSelf->control__DOT__rom__DOT__rom_array
                                                  [
                                                  (0xfffffU 
                                                   & ((IData)(3U) 
                                                      + vlSelf->control__DOT__PC1))])));
    vlSelf->ALUsrc = (0x33U != (0x7fU & vlSelf->control__DOT__ins));
    vlSelf->PCsrc = (((vlSelf->control__DOT__ins >> 0xcU) 
                      ^ (IData)(vlSelf->EQ)) & (0x63U 
                                                == 
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

VL_ATTR_COLD void Vcontrol___024root___eval_initial(Vcontrol___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcontrol__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol___024root___eval_initial\n"); );
    // Body
    Vcontrol___024root___initial__TOP__0(vlSelf);
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

VL_ATTR_COLD void Vcontrol___024root___eval_settle(Vcontrol___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcontrol__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol___024root___eval_settle\n"); );
    // Body
    Vcontrol___024root___settle__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vcontrol___024root___final(Vcontrol___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcontrol__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol___024root___final\n"); );
}

VL_ATTR_COLD void Vcontrol___024root___ctor_var_reset(Vcontrol___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcontrol__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->PC = VL_RAND_RESET_I(32);
    vlSelf->EQ = VL_RAND_RESET_I(1);
    vlSelf->RegWrite = VL_RAND_RESET_I(1);
    vlSelf->ALUctrl = VL_RAND_RESET_I(3);
    vlSelf->ALUsrc = VL_RAND_RESET_I(1);
    vlSelf->ImmSrc = VL_RAND_RESET_I(2);
    vlSelf->PCsrc = VL_RAND_RESET_I(1);
    vlSelf->ImmExt = VL_RAND_RESET_I(32);
    vlSelf->control__DOT__ins = VL_RAND_RESET_I(32);
    vlSelf->control__DOT__PC1 = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<1048576; ++__Vi0) {
        vlSelf->control__DOT__rom__DOT__rom_array[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->control__DOT__cu__DOT__ALUOp = VL_RAND_RESET_I(2);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
