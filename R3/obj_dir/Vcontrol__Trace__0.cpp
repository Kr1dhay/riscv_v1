// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vcontrol__Syms.h"


void Vcontrol___024root__trace_chg_sub_0(Vcontrol___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vcontrol___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol___024root__trace_chg_top_0\n"); );
    // Init
    Vcontrol___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcontrol___024root*>(voidSelf);
    Vcontrol__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vcontrol___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vcontrol___024root__trace_chg_sub_0(Vcontrol___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vcontrol__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgCData(oldp+0,(vlSelf->control__DOT__rom__DOT__rom_array[0]),8);
        bufp->chgCData(oldp+1,(vlSelf->control__DOT__rom__DOT__rom_array[1]),8);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+2,(vlSelf->control__DOT__ins),32);
        bufp->chgCData(oldp+3,((0x7fU & vlSelf->control__DOT__ins)),7);
        bufp->chgCData(oldp+4,((7U & (vlSelf->control__DOT__ins 
                                      >> 0xcU))),3);
        bufp->chgBit(oldp+5,((1U & (vlSelf->control__DOT__ins 
                                    >> 0x1eU))));
        bufp->chgCData(oldp+6,(vlSelf->control__DOT__cu__DOT__ALUOp),2);
        bufp->chgBit(oldp+7,((0x63U == (0x7fU & vlSelf->control__DOT__ins))));
        bufp->chgIData(oldp+8,((vlSelf->control__DOT__ins 
                                >> 7U)),25);
    }
    bufp->chgBit(oldp+9,(vlSelf->clk));
    bufp->chgIData(oldp+10,(vlSelf->PC),32);
    bufp->chgBit(oldp+11,(vlSelf->EQ));
    bufp->chgBit(oldp+12,(vlSelf->RegWrite));
    bufp->chgCData(oldp+13,(vlSelf->ALUctrl),3);
    bufp->chgBit(oldp+14,(vlSelf->ALUsrc));
    bufp->chgCData(oldp+15,(vlSelf->ImmSrc),2);
    bufp->chgBit(oldp+16,(vlSelf->PCsrc));
    bufp->chgIData(oldp+17,(vlSelf->ImmExt),32);
}

void Vcontrol___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol___024root__trace_cleanup\n"); );
    // Init
    Vcontrol___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcontrol___024root*>(voidSelf);
    Vcontrol__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
