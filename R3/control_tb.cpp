#include "verilated.h"
#include "verilated_vcd_c.h"
#include "Vcontrol.h"

int main(int argc, char **argv, char **env) {
    int cyc;
    int clk;

    Verilated::commandArgs(argc,argv);
    //init verilog instance
    Vcontrol* top = new Vcontrol;
    //init trace dump
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace (tfp, 99);
    tfp->open ("Vcontrol.vcd");

    //intialize simulation inputs
    top->clk = 1;
    top->PC = 0;
    top->EQ = 1;

    for (cyc = 0; cyc < 5; cyc++) {
        
        //dump variables into VCD file and toggle clock
        for (clk = 0; clk<2; clk++) {
            tfp->dump (2*cyc+clk);            //unit is in ps!!!
            top->clk = !top->clk;
            top->eval ();
        }

        top->PC = cyc;
    }
}