// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vcontrol__Syms.h"


VL_ATTR_COLD void Vcontrol___024root__trace_init_sub__TOP__0(Vcontrol___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcontrol__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+10,"clk", false,-1);
    tracep->declBus(c+11,"PC", false,-1, 31,0);
    tracep->declBit(c+12,"EQ", false,-1);
    tracep->declBit(c+13,"RegWrite", false,-1);
    tracep->declBus(c+14,"ALUctrl", false,-1, 2,0);
    tracep->declBit(c+15,"ALUsrc", false,-1);
    tracep->declBus(c+16,"ImmSrc", false,-1, 1,0);
    tracep->declBit(c+17,"PCsrc", false,-1);
    tracep->declBus(c+18,"ImmExt", false,-1, 31,0);
    tracep->pushNamePrefix("control ");
    tracep->declBit(c+10,"clk", false,-1);
    tracep->declBus(c+11,"PC", false,-1, 31,0);
    tracep->declBit(c+12,"EQ", false,-1);
    tracep->declBit(c+13,"RegWrite", false,-1);
    tracep->declBus(c+14,"ALUctrl", false,-1, 2,0);
    tracep->declBit(c+15,"ALUsrc", false,-1);
    tracep->declBus(c+16,"ImmSrc", false,-1, 1,0);
    tracep->declBit(c+17,"PCsrc", false,-1);
    tracep->declBus(c+18,"ImmExt", false,-1, 31,0);
    tracep->declBus(c+3,"ins", false,-1, 31,0);
    tracep->pushNamePrefix("cu ");
    tracep->declBit(c+12,"EQ", false,-1);
    tracep->declBus(c+4,"Op", false,-1, 6,0);
    tracep->declBus(c+5,"funct3", false,-1, 2,0);
    tracep->declBit(c+6,"funct7_5", false,-1);
    tracep->declBit(c+13,"RegWrite", false,-1);
    tracep->declBus(c+14,"ALUctrl", false,-1, 2,0);
    tracep->declBit(c+15,"ALUsrc", false,-1);
    tracep->declBus(c+16,"ImmSrc", false,-1, 1,0);
    tracep->declBit(c+17,"PCsrc", false,-1);
    tracep->declBus(c+7,"ALUOp", false,-1, 1,0);
    tracep->declBit(c+8,"Branch", false,-1);
    tracep->pushNamePrefix("ALUdec ");
    tracep->declBus(c+7,"ALUOp", false,-1, 1,0);
    tracep->declBus(c+5,"funct3", false,-1, 2,0);
    tracep->declBit(c+6,"funct7_5", false,-1);
    tracep->declBus(c+14,"ALUctrl", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MAINdec ");
    tracep->declBus(c+19,"LOAD", false,-1, 6,0);
    tracep->declBus(c+20,"I_AL", false,-1, 6,0);
    tracep->declBus(c+21,"JALR", false,-1, 6,0);
    tracep->declBus(c+22,"STORE", false,-1, 6,0);
    tracep->declBus(c+23,"REG", false,-1, 6,0);
    tracep->declBus(c+24,"BRANCH", false,-1, 6,0);
    tracep->declBus(c+25,"AUIPC", false,-1, 6,0);
    tracep->declBus(c+26,"LUI", false,-1, 6,0);
    tracep->declBus(c+27,"JAL", false,-1, 6,0);
    tracep->declBus(c+4,"Op", false,-1, 6,0);
    tracep->declBit(c+13,"RegWrite", false,-1);
    tracep->declBit(c+15,"ALUsrc", false,-1);
    tracep->declBus(c+7,"ALUOp", false,-1, 1,0);
    tracep->declBus(c+16,"ImmSrc", false,-1, 1,0);
    tracep->declBit(c+8,"Branch", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ext32 ");
    tracep->declBus(c+28,"OUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+16,"ImmSrc", false,-1, 1,0);
    tracep->declBus(c+9,"msb25", false,-1, 31,7);
    tracep->declBus(c+18,"ImmExt", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("rom ");
    tracep->declBus(c+28,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+29,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+11,"A", false,-1, 31,0);
    tracep->declBus(c+3,"RD", false,-1, 31,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+1+i*1,"rom_array", true,(i+-1), 7,0);
    }
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vcontrol___024root__trace_init_top(Vcontrol___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcontrol__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol___024root__trace_init_top\n"); );
    // Body
    Vcontrol___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vcontrol___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vcontrol___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vcontrol___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vcontrol___024root__trace_register(Vcontrol___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcontrol__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vcontrol___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vcontrol___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vcontrol___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vcontrol___024root__trace_full_sub_0(Vcontrol___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vcontrol___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol___024root__trace_full_top_0\n"); );
    // Init
    Vcontrol___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcontrol___024root*>(voidSelf);
    Vcontrol__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vcontrol___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vcontrol___024root__trace_full_sub_0(Vcontrol___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vcontrol__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelf->control__DOT__rom__DOT__rom_array[0]),8);
    bufp->fullCData(oldp+2,(vlSelf->control__DOT__rom__DOT__rom_array[1]),8);
    bufp->fullIData(oldp+3,(vlSelf->control__DOT__ins),32);
    bufp->fullCData(oldp+4,((0x7fU & vlSelf->control__DOT__ins)),7);
    bufp->fullCData(oldp+5,((7U & (vlSelf->control__DOT__ins 
                                   >> 0xcU))),3);
    bufp->fullBit(oldp+6,((1U & (vlSelf->control__DOT__ins 
                                 >> 0x1eU))));
    bufp->fullCData(oldp+7,(vlSelf->control__DOT__cu__DOT__ALUOp),2);
    bufp->fullBit(oldp+8,((0x63U == (0x7fU & vlSelf->control__DOT__ins))));
    bufp->fullIData(oldp+9,((vlSelf->control__DOT__ins 
                             >> 7U)),25);
    bufp->fullBit(oldp+10,(vlSelf->clk));
    bufp->fullIData(oldp+11,(vlSelf->PC),32);
    bufp->fullBit(oldp+12,(vlSelf->EQ));
    bufp->fullBit(oldp+13,(vlSelf->RegWrite));
    bufp->fullCData(oldp+14,(vlSelf->ALUctrl),3);
    bufp->fullBit(oldp+15,(vlSelf->ALUsrc));
    bufp->fullCData(oldp+16,(vlSelf->ImmSrc),2);
    bufp->fullBit(oldp+17,(vlSelf->PCsrc));
    bufp->fullIData(oldp+18,(vlSelf->ImmExt),32);
    bufp->fullCData(oldp+19,(3U),7);
    bufp->fullCData(oldp+20,(0x13U),7);
    bufp->fullCData(oldp+21,(0x67U),7);
    bufp->fullCData(oldp+22,(0x23U),7);
    bufp->fullCData(oldp+23,(0x33U),7);
    bufp->fullCData(oldp+24,(0x63U),7);
    bufp->fullCData(oldp+25,(0x17U),7);
    bufp->fullCData(oldp+26,(0x37U),7);
    bufp->fullCData(oldp+27,(0x6fU),7);
    bufp->fullIData(oldp+28,(0x20U),32);
    bufp->fullIData(oldp+29,(8U),32);
}
