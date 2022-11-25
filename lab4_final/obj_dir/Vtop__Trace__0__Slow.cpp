// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+60,"clk", false,-1);
    tracep->declBit(c+61,"rst", false,-1);
    tracep->declBus(c+62,"a0", false,-1, 31,0);
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+60,"clk", false,-1);
    tracep->declBit(c+61,"rst", false,-1);
    tracep->declBus(c+62,"a0", false,-1, 31,0);
    tracep->declBit(c+1,"PCsrc", false,-1);
    tracep->declBus(c+2,"ImmOp", false,-1, 31,0);
    tracep->declBus(c+3,"pc", false,-1, 31,0);
    tracep->declBus(c+4,"ad1", false,-1, 4,0);
    tracep->declBus(c+5,"ad2", false,-1, 4,0);
    tracep->declBus(c+6,"ad3", false,-1, 4,0);
    tracep->declBit(c+7,"we3", false,-1);
    tracep->declBit(c+8,"aluSrc", false,-1);
    tracep->declBus(c+9,"aluCTR", false,-1, 2,0);
    tracep->declBit(c+10,"eq", false,-1);
    tracep->pushNamePrefix("alu ");
    tracep->declBus(c+63,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+64,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+60,"clk", false,-1);
    tracep->declBus(c+62,"a0", false,-1, 31,0);
    tracep->declBus(c+4,"ad1", false,-1, 4,0);
    tracep->declBus(c+5,"ad2", false,-1, 4,0);
    tracep->declBus(c+6,"ad3", false,-1, 4,0);
    tracep->declBit(c+7,"we3", false,-1);
    tracep->declBit(c+8,"aluSrc", false,-1);
    tracep->declBus(c+9,"aluCTR", false,-1, 2,0);
    tracep->declBit(c+10,"eq", false,-1);
    tracep->declBus(c+2,"immOp", false,-1, 31,0);
    tracep->declBus(c+11,"aluOut", false,-1, 31,0);
    tracep->declBus(c+12,"aluOp1", false,-1, 31,0);
    tracep->declBus(c+13,"regOp2", false,-1, 31,0);
    tracep->declBus(c+14,"aluOp2", false,-1, 31,0);
    tracep->pushNamePrefix("myAlu ");
    tracep->declBus(c+12,"aluOp1", false,-1, 31,0);
    tracep->declBus(c+14,"aluOp2", false,-1, 31,0);
    tracep->declBus(c+9,"aluCTR", false,-1, 2,0);
    tracep->declBus(c+11,"sum", false,-1, 31,0);
    tracep->declBit(c+10,"eq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("myMux ");
    tracep->declBus(c+13,"regOp2", false,-1, 31,0);
    tracep->declBus(c+2,"immOp", false,-1, 31,0);
    tracep->declBit(c+8,"aluSrc", false,-1);
    tracep->declBus(c+14,"aluOp2", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("myRegFile ");
    tracep->declBus(c+63,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+64,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+60,"clk", false,-1);
    tracep->declBus(c+4,"ad1", false,-1, 4,0);
    tracep->declBus(c+5,"ad2", false,-1, 4,0);
    tracep->declBus(c+6,"ad3", false,-1, 4,0);
    tracep->declBit(c+7,"we3", false,-1);
    tracep->declBus(c+11,"wd3", false,-1, 31,0);
    tracep->declBus(c+12,"rd1", false,-1, 31,0);
    tracep->declBus(c+13,"rd2", false,-1, 31,0);
    tracep->declBus(c+62,"a0", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+15+i*1,"rom_array", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ctr ");
    tracep->declBus(c+3,"PC", false,-1, 31,0);
    tracep->declBit(c+10,"EQ", false,-1);
    tracep->declBit(c+7,"RegWrite", false,-1);
    tracep->declBus(c+9,"ALUctrl", false,-1, 2,0);
    tracep->declBit(c+8,"ALUsrc", false,-1);
    tracep->declBit(c+1,"PCsrc", false,-1);
    tracep->declBus(c+4,"rs1", false,-1, 4,0);
    tracep->declBus(c+5,"rs2", false,-1, 4,0);
    tracep->declBus(c+6,"rd", false,-1, 4,0);
    tracep->declBus(c+2,"ImmOp", false,-1, 31,0);
    tracep->declBus(c+47,"ins", false,-1, 31,0);
    tracep->declBus(c+48,"ImmSrc", false,-1, 1,0);
    tracep->pushNamePrefix("cu ");
    tracep->declBit(c+10,"EQ", false,-1);
    tracep->declBus(c+49,"Op", false,-1, 6,0);
    tracep->declBus(c+50,"funct3", false,-1, 2,0);
    tracep->declBit(c+51,"funct7_5", false,-1);
    tracep->declBit(c+7,"RegWrite", false,-1);
    tracep->declBus(c+9,"ALUctrl", false,-1, 2,0);
    tracep->declBit(c+8,"ALUsrc", false,-1);
    tracep->declBus(c+48,"ImmSrc", false,-1, 1,0);
    tracep->declBit(c+1,"PCsrc", false,-1);
    tracep->declBus(c+52,"ALUOp", false,-1, 1,0);
    tracep->declBit(c+53,"Branch", false,-1);
    tracep->declBit(c+54,"NEG", false,-1);
    tracep->pushNamePrefix("ALUdec ");
    tracep->declBus(c+52,"ALUOp", false,-1, 1,0);
    tracep->declBus(c+50,"funct3", false,-1, 2,0);
    tracep->declBit(c+51,"funct7_5", false,-1);
    tracep->declBus(c+9,"ALUctrl", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MAINdec ");
    tracep->declBus(c+65,"LOAD", false,-1, 6,0);
    tracep->declBus(c+66,"I_AL", false,-1, 6,0);
    tracep->declBus(c+67,"JALR", false,-1, 6,0);
    tracep->declBus(c+68,"STORE", false,-1, 6,0);
    tracep->declBus(c+69,"REG", false,-1, 6,0);
    tracep->declBus(c+70,"BRANCH", false,-1, 6,0);
    tracep->declBus(c+71,"AUIPC", false,-1, 6,0);
    tracep->declBus(c+72,"LUI", false,-1, 6,0);
    tracep->declBus(c+73,"JAL", false,-1, 6,0);
    tracep->declBus(c+49,"Op", false,-1, 6,0);
    tracep->declBit(c+7,"RegWrite", false,-1);
    tracep->declBit(c+8,"ALUsrc", false,-1);
    tracep->declBus(c+52,"ALUOp", false,-1, 1,0);
    tracep->declBus(c+48,"ImmSrc", false,-1, 1,0);
    tracep->declBit(c+53,"Branch", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ext32 ");
    tracep->declBus(c+64,"OUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+48,"ImmSrc", false,-1, 1,0);
    tracep->declBus(c+55,"msb25", false,-1, 31,7);
    tracep->declBus(c+2,"ImmExt", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("rom ");
    tracep->declBus(c+64,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+74,"PRACTICAL_WIDTH", false,-1, 31,0);
    tracep->declBus(c+75,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+3,"A", false,-1, 31,0);
    tracep->declBus(c+47,"RD", false,-1, 31,0);
    tracep->declBus(c+56,"practA", false,-1, 20,1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("pcounter ");
    tracep->declBit(c+60,"clk", false,-1);
    tracep->declBit(c+61,"rst", false,-1);
    tracep->declBit(c+1,"PCsrc", false,-1);
    tracep->declBus(c+2,"ImmOp", false,-1, 31,0);
    tracep->declBus(c+3,"PC", false,-1, 31,0);
    tracep->declBus(c+57,"branch_PC", false,-1, 31,0);
    tracep->declBus(c+58,"inc_PC", false,-1, 31,0);
    tracep->declBus(c+59,"next_PC", false,-1, 31,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtop___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,((((vlSelf->top__DOT__ctr__DOT__ins 
                             >> 0xcU) ^ (vlSelf->top__DOT__alu__DOT__aluOp1 
                                         == vlSelf->top__DOT__alu__DOT__aluOp2)) 
                           & (0x63U == (0x7fU & vlSelf->top__DOT__ctr__DOT__ins)))));
    bufp->fullIData(oldp+2,(vlSelf->top__DOT__ImmOp),32);
    bufp->fullIData(oldp+3,(vlSelf->top__DOT__pc),32);
    bufp->fullCData(oldp+4,((0x1fU & (vlSelf->top__DOT__ctr__DOT__ins 
                                      >> 0xfU))),5);
    bufp->fullCData(oldp+5,((0x1fU & (vlSelf->top__DOT__ctr__DOT__ins 
                                      >> 0x14U))),5);
    bufp->fullCData(oldp+6,((0x1fU & (vlSelf->top__DOT__ctr__DOT__ins 
                                      >> 7U))),5);
    bufp->fullBit(oldp+7,(vlSelf->top__DOT__we3));
    bufp->fullBit(oldp+8,((1U & (~ ((0x33U == (0x7fU 
                                               & vlSelf->top__DOT__ctr__DOT__ins)) 
                                    | (0x63U == (0x7fU 
                                                 & vlSelf->top__DOT__ctr__DOT__ins)))))));
    bufp->fullCData(oldp+9,(vlSelf->top__DOT__aluCTR),3);
    bufp->fullBit(oldp+10,((vlSelf->top__DOT__alu__DOT__aluOp1 
                            == vlSelf->top__DOT__alu__DOT__aluOp2)));
    bufp->fullIData(oldp+11,(((0U == (IData)(vlSelf->top__DOT__aluCTR))
                               ? (vlSelf->top__DOT__alu__DOT__aluOp1 
                                  + vlSelf->top__DOT__alu__DOT__aluOp2)
                               : 0U)),32);
    bufp->fullIData(oldp+12,(vlSelf->top__DOT__alu__DOT__aluOp1),32);
    bufp->fullIData(oldp+13,(vlSelf->top__DOT__alu__DOT__myRegFile__DOT__rom_array
                             [(0x1fU & (vlSelf->top__DOT__ctr__DOT__ins 
                                        >> 0x14U))]),32);
    bufp->fullIData(oldp+14,(vlSelf->top__DOT__alu__DOT__aluOp2),32);
    bufp->fullIData(oldp+15,(vlSelf->top__DOT__alu__DOT__myRegFile__DOT__rom_array[0]),32);
    bufp->fullIData(oldp+16,(vlSelf->top__DOT__alu__DOT__myRegFile__DOT__rom_array[1]),32);
    bufp->fullIData(oldp+17,(vlSelf->top__DOT__alu__DOT__myRegFile__DOT__rom_array[2]),32);
    bufp->fullIData(oldp+18,(vlSelf->top__DOT__alu__DOT__myRegFile__DOT__rom_array[3]),32);
    bufp->fullIData(oldp+19,(vlSelf->top__DOT__alu__DOT__myRegFile__DOT__rom_array[4]),32);
    bufp->fullIData(oldp+20,(vlSelf->top__DOT__alu__DOT__myRegFile__DOT__rom_array[5]),32);
    bufp->fullIData(oldp+21,(vlSelf->top__DOT__alu__DOT__myRegFile__DOT__rom_array[6]),32);
    bufp->fullIData(oldp+22,(vlSelf->top__DOT__alu__DOT__myRegFile__DOT__rom_array[7]),32);
    bufp->fullIData(oldp+23,(vlSelf->top__DOT__alu__DOT__myRegFile__DOT__rom_array[8]),32);
    bufp->fullIData(oldp+24,(vlSelf->top__DOT__alu__DOT__myRegFile__DOT__rom_array[9]),32);
    bufp->fullIData(oldp+25,(vlSelf->top__DOT__alu__DOT__myRegFile__DOT__rom_array[10]),32);
    bufp->fullIData(oldp+26,(vlSelf->top__DOT__alu__DOT__myRegFile__DOT__rom_array[11]),32);
    bufp->fullIData(oldp+27,(vlSelf->top__DOT__alu__DOT__myRegFile__DOT__rom_array[12]),32);
    bufp->fullIData(oldp+28,(vlSelf->top__DOT__alu__DOT__myRegFile__DOT__rom_array[13]),32);
    bufp->fullIData(oldp+29,(vlSelf->top__DOT__alu__DOT__myRegFile__DOT__rom_array[14]),32);
    bufp->fullIData(oldp+30,(vlSelf->top__DOT__alu__DOT__myRegFile__DOT__rom_array[15]),32);
    bufp->fullIData(oldp+31,(vlSelf->top__DOT__alu__DOT__myRegFile__DOT__rom_array[16]),32);
    bufp->fullIData(oldp+32,(vlSelf->top__DOT__alu__DOT__myRegFile__DOT__rom_array[17]),32);
    bufp->fullIData(oldp+33,(vlSelf->top__DOT__alu__DOT__myRegFile__DOT__rom_array[18]),32);
    bufp->fullIData(oldp+34,(vlSelf->top__DOT__alu__DOT__myRegFile__DOT__rom_array[19]),32);
    bufp->fullIData(oldp+35,(vlSelf->top__DOT__alu__DOT__myRegFile__DOT__rom_array[20]),32);
    bufp->fullIData(oldp+36,(vlSelf->top__DOT__alu__DOT__myRegFile__DOT__rom_array[21]),32);
    bufp->fullIData(oldp+37,(vlSelf->top__DOT__alu__DOT__myRegFile__DOT__rom_array[22]),32);
    bufp->fullIData(oldp+38,(vlSelf->top__DOT__alu__DOT__myRegFile__DOT__rom_array[23]),32);
    bufp->fullIData(oldp+39,(vlSelf->top__DOT__alu__DOT__myRegFile__DOT__rom_array[24]),32);
    bufp->fullIData(oldp+40,(vlSelf->top__DOT__alu__DOT__myRegFile__DOT__rom_array[25]),32);
    bufp->fullIData(oldp+41,(vlSelf->top__DOT__alu__DOT__myRegFile__DOT__rom_array[26]),32);
    bufp->fullIData(oldp+42,(vlSelf->top__DOT__alu__DOT__myRegFile__DOT__rom_array[27]),32);
    bufp->fullIData(oldp+43,(vlSelf->top__DOT__alu__DOT__myRegFile__DOT__rom_array[28]),32);
    bufp->fullIData(oldp+44,(vlSelf->top__DOT__alu__DOT__myRegFile__DOT__rom_array[29]),32);
    bufp->fullIData(oldp+45,(vlSelf->top__DOT__alu__DOT__myRegFile__DOT__rom_array[30]),32);
    bufp->fullIData(oldp+46,(vlSelf->top__DOT__alu__DOT__myRegFile__DOT__rom_array[31]),32);
    bufp->fullIData(oldp+47,(vlSelf->top__DOT__ctr__DOT__ins),32);
    bufp->fullCData(oldp+48,(vlSelf->top__DOT__ctr__DOT__ImmSrc),2);
    bufp->fullCData(oldp+49,((0x7fU & vlSelf->top__DOT__ctr__DOT__ins)),7);
    bufp->fullCData(oldp+50,((7U & (vlSelf->top__DOT__ctr__DOT__ins 
                                    >> 0xcU))),3);
    bufp->fullBit(oldp+51,((1U & (vlSelf->top__DOT__ctr__DOT__ins 
                                  >> 0x1eU))));
    bufp->fullCData(oldp+52,(vlSelf->top__DOT__ctr__DOT__cu__DOT__ALUOp),2);
    bufp->fullBit(oldp+53,((0x63U == (0x7fU & vlSelf->top__DOT__ctr__DOT__ins))));
    bufp->fullBit(oldp+54,((1U & (vlSelf->top__DOT__ctr__DOT__ins 
                                  >> 0xcU))));
    bufp->fullIData(oldp+55,((vlSelf->top__DOT__ctr__DOT__ins 
                              >> 7U)),25);
    bufp->fullIData(oldp+56,((0xfffffU & vlSelf->top__DOT__pc)),20);
    bufp->fullIData(oldp+57,((vlSelf->top__DOT__pc 
                              + vlSelf->top__DOT__ImmOp)),32);
    bufp->fullIData(oldp+58,(((IData)(4U) + vlSelf->top__DOT__pc)),32);
    bufp->fullIData(oldp+59,(((((vlSelf->top__DOT__ctr__DOT__ins 
                                 >> 0xcU) ^ (vlSelf->top__DOT__alu__DOT__aluOp1 
                                             == vlSelf->top__DOT__alu__DOT__aluOp2)) 
                               & (0x63U == (0x7fU & vlSelf->top__DOT__ctr__DOT__ins)))
                               ? (vlSelf->top__DOT__pc 
                                  + vlSelf->top__DOT__ImmOp)
                               : ((IData)(4U) + vlSelf->top__DOT__pc))),32);
    bufp->fullBit(oldp+60,(vlSelf->clk));
    bufp->fullBit(oldp+61,(vlSelf->rst));
    bufp->fullIData(oldp+62,(vlSelf->a0),32);
    bufp->fullIData(oldp+63,(5U),32);
    bufp->fullIData(oldp+64,(0x20U),32);
    bufp->fullCData(oldp+65,(3U),7);
    bufp->fullCData(oldp+66,(0x13U),7);
    bufp->fullCData(oldp+67,(0x67U),7);
    bufp->fullCData(oldp+68,(0x23U),7);
    bufp->fullCData(oldp+69,(0x33U),7);
    bufp->fullCData(oldp+70,(0x63U),7);
    bufp->fullCData(oldp+71,(0x17U),7);
    bufp->fullCData(oldp+72,(0x37U),7);
    bufp->fullCData(oldp+73,(0x6fU),7);
    bufp->fullIData(oldp+74,(0x14U),32);
    bufp->fullIData(oldp+75,(8U),32);
}
