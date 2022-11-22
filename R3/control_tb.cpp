#include "verilated.h"
#include "verilated_vcd_c.h"
#include "Vcu.h"

int main(int argc, char **argv, char **env) {
    int cyc;
    int clk;

    Verilated::commandArgs(argc,argv);
    //init verilog instance
    Vcu* CU = new Vcu;
    //init trace dump
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace (tfp, 99);
    tfp->open ("Vcu.vcd");

    //intialize simulation inputs
    top->clk = 1;
    top->rst = 1;
    top->en = 0;

    for (cyc = 0; cyc < 5; cyc++) {
        
        //dump variables into VCD file and toggle clock
        for (clk = 0; clk<2; clk++) {
            tfp->dump (2*i+clk);            //unit is in ps!!!
            top->clk = !top->clk;
            top->eval ();
        }
    }
}