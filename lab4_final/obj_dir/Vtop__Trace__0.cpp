// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+0,((((vlSelf->top__DOT__ctr__DOT__ins 
                                >> 0xcU) ^ (vlSelf->top__DOT__alu__DOT__aluOp1 
                                            == vlSelf->top__DOT__alu__DOT__aluOp2)) 
                              & (0x63U == (0x7fU & vlSelf->top__DOT__ctr__DOT__ins)))));
        bufp->chgIData(oldp+1,(vlSelf->top__DOT__ImmOp),32);
        bufp->chgIData(oldp+2,(vlSelf->top__DOT__pc),32);
        bufp->chgCData(oldp+3,((0x1fU & (vlSelf->top__DOT__ctr__DOT__ins 
                                         >> 0xfU))),5);
        bufp->chgCData(oldp+4,((0x1fU & (vlSelf->top__DOT__ctr__DOT__ins 
                                         >> 0x14U))),5);
        bufp->chgCData(oldp+5,((0x1fU & (vlSelf->top__DOT__ctr__DOT__ins 
                                         >> 7U))),5);
        bufp->chgBit(oldp+6,(vlSelf->top__DOT__we3));
        bufp->chgBit(oldp+7,((1U & (~ ((0x33U == (0x7fU 
                                                  & vlSelf->top__DOT__ctr__DOT__ins)) 
                                       | (0x63U == 
                                          (0x7fU & vlSelf->top__DOT__ctr__DOT__ins)))))));
        bufp->chgCData(oldp+8,(vlSelf->top__DOT__aluCTR),3);
        bufp->chgBit(oldp+9,((vlSelf->top__DOT__alu__DOT__aluOp1 
                              == vlSelf->top__DOT__alu__DOT__aluOp2)));
        bufp->chgIData(oldp+10,(((0U == (IData)(vlSelf->top__DOT__aluCTR))
                                  ? (vlSelf->top__DOT__alu__DOT__aluOp1 
                                     + vlSelf->top__DOT__alu__DOT__aluOp2)
                                  : 0U)),32);
        bufp->chgIData(oldp+11,(vlSelf->top__DOT__alu__DOT__aluOp1),32);
        bufp->chgIData(oldp+12,(vlSelf->top__DOT__alu__DOT__myRegFile__DOT__rom_array
                                [(0x1fU & (vlSelf->top__DOT__ctr__DOT__ins 
                                           >> 0x14U))]),32);
        bufp->chgIData(oldp+13,(vlSelf->top__DOT__alu__DOT__aluOp2),32);
        bufp->chgIData(oldp+14,(vlSelf->top__DOT__alu__DOT__myRegFile__DOT__rom_array[0]),32);
        bufp->chgIData(oldp+15,(vlSelf->top__DOT__alu__DOT__myRegFile__DOT__rom_array[1]),32);
        bufp->chgIData(oldp+16,(vlSelf->top__DOT__alu__DOT__myRegFile__DOT__rom_array[2]),32);
        bufp->chgIData(oldp+17,(vlSelf->top__DOT__alu__DOT__myRegFile__DOT__rom_array[3]),32);
        bufp->chgIData(oldp+18,(vlSelf->top__DOT__alu__DOT__myRegFile__DOT__rom_array[4]),32);
        bufp->chgIData(oldp+19,(vlSelf->top__DOT__alu__DOT__myRegFile__DOT__rom_array[5]),32);
        bufp->chgIData(oldp+20,(vlSelf->top__DOT__alu__DOT__myRegFile__DOT__rom_array[6]),32);
        bufp->chgIData(oldp+21,(vlSelf->top__DOT__alu__DOT__myRegFile__DOT__rom_array[7]),32);
        bufp->chgIData(oldp+22,(vlSelf->top__DOT__alu__DOT__myRegFile__DOT__rom_array[8]),32);
        bufp->chgIData(oldp+23,(vlSelf->top__DOT__alu__DOT__myRegFile__DOT__rom_array[9]),32);
        bufp->chgIData(oldp+24,(vlSelf->top__DOT__alu__DOT__myRegFile__DOT__rom_array[10]),32);
        bufp->chgIData(oldp+25,(vlSelf->top__DOT__alu__DOT__myRegFile__DOT__rom_array[11]),32);
        bufp->chgIData(oldp+26,(vlSelf->top__DOT__alu__DOT__myRegFile__DOT__rom_array[12]),32);
        bufp->chgIData(oldp+27,(vlSelf->top__DOT__alu__DOT__myRegFile__DOT__rom_array[13]),32);
        bufp->chgIData(oldp+28,(vlSelf->top__DOT__alu__DOT__myRegFile__DOT__rom_array[14]),32);
        bufp->chgIData(oldp+29,(vlSelf->top__DOT__alu__DOT__myRegFile__DOT__rom_array[15]),32);
        bufp->chgIData(oldp+30,(vlSelf->top__DOT__alu__DOT__myRegFile__DOT__rom_array[16]),32);
        bufp->chgIData(oldp+31,(vlSelf->top__DOT__alu__DOT__myRegFile__DOT__rom_array[17]),32);
        bufp->chgIData(oldp+32,(vlSelf->top__DOT__alu__DOT__myRegFile__DOT__rom_array[18]),32);
        bufp->chgIData(oldp+33,(vlSelf->top__DOT__alu__DOT__myRegFile__DOT__rom_array[19]),32);
        bufp->chgIData(oldp+34,(vlSelf->top__DOT__alu__DOT__myRegFile__DOT__rom_array[20]),32);
        bufp->chgIData(oldp+35,(vlSelf->top__DOT__alu__DOT__myRegFile__DOT__rom_array[21]),32);
        bufp->chgIData(oldp+36,(vlSelf->top__DOT__alu__DOT__myRegFile__DOT__rom_array[22]),32);
        bufp->chgIData(oldp+37,(vlSelf->top__DOT__alu__DOT__myRegFile__DOT__rom_array[23]),32);
        bufp->chgIData(oldp+38,(vlSelf->top__DOT__alu__DOT__myRegFile__DOT__rom_array[24]),32);
        bufp->chgIData(oldp+39,(vlSelf->top__DOT__alu__DOT__myRegFile__DOT__rom_array[25]),32);
        bufp->chgIData(oldp+40,(vlSelf->top__DOT__alu__DOT__myRegFile__DOT__rom_array[26]),32);
        bufp->chgIData(oldp+41,(vlSelf->top__DOT__alu__DOT__myRegFile__DOT__rom_array[27]),32);
        bufp->chgIData(oldp+42,(vlSelf->top__DOT__alu__DOT__myRegFile__DOT__rom_array[28]),32);
        bufp->chgIData(oldp+43,(vlSelf->top__DOT__alu__DOT__myRegFile__DOT__rom_array[29]),32);
        bufp->chgIData(oldp+44,(vlSelf->top__DOT__alu__DOT__myRegFile__DOT__rom_array[30]),32);
        bufp->chgIData(oldp+45,(vlSelf->top__DOT__alu__DOT__myRegFile__DOT__rom_array[31]),32);
        bufp->chgIData(oldp+46,(vlSelf->top__DOT__ctr__DOT__ins),32);
        bufp->chgCData(oldp+47,(vlSelf->top__DOT__ctr__DOT__ImmSrc),2);
        bufp->chgCData(oldp+48,((0x7fU & vlSelf->top__DOT__ctr__DOT__ins)),7);
        bufp->chgCData(oldp+49,((7U & (vlSelf->top__DOT__ctr__DOT__ins 
                                       >> 0xcU))),3);
        bufp->chgBit(oldp+50,((1U & (vlSelf->top__DOT__ctr__DOT__ins 
                                     >> 0x1eU))));
        bufp->chgCData(oldp+51,(vlSelf->top__DOT__ctr__DOT__cu__DOT__ALUOp),2);
        bufp->chgBit(oldp+52,((0x63U == (0x7fU & vlSelf->top__DOT__ctr__DOT__ins))));
        bufp->chgBit(oldp+53,((1U & (vlSelf->top__DOT__ctr__DOT__ins 
                                     >> 0xcU))));
        bufp->chgIData(oldp+54,((vlSelf->top__DOT__ctr__DOT__ins 
                                 >> 7U)),25);
        bufp->chgIData(oldp+55,((0xfffffU & vlSelf->top__DOT__pc)),20);
        bufp->chgIData(oldp+56,((vlSelf->top__DOT__pc 
                                 + vlSelf->top__DOT__ImmOp)),32);
        bufp->chgIData(oldp+57,(((IData)(4U) + vlSelf->top__DOT__pc)),32);
        bufp->chgIData(oldp+58,(((((vlSelf->top__DOT__ctr__DOT__ins 
                                    >> 0xcU) ^ (vlSelf->top__DOT__alu__DOT__aluOp1 
                                                == vlSelf->top__DOT__alu__DOT__aluOp2)) 
                                  & (0x63U == (0x7fU 
                                               & vlSelf->top__DOT__ctr__DOT__ins)))
                                  ? (vlSelf->top__DOT__pc 
                                     + vlSelf->top__DOT__ImmOp)
                                  : ((IData)(4U) + vlSelf->top__DOT__pc))),32);
    }
    bufp->chgBit(oldp+59,(vlSelf->clk));
    bufp->chgBit(oldp+60,(vlSelf->rst));
    bufp->chgIData(oldp+61,(vlSelf->a0),32);
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
