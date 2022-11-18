#include "Vcounter.h" //modify
#include "verilated.h"
#include "verilated_vcd_c.h"

int main(int argc, char **argv , char **env) {
    long i;
    int clk;

    Verilated::commandArgs(argc, argv);
    Vcounter* top= new Vcounter; //modify

    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open("counter.vcd"); //modify

    top->clk = 1;
    top->rst = 1;
    
    for(i=0;i<500000;i++){
        for (clk = 0; clk<2; clk++){
            tfp->dump(2*i+clk);
            top->clk = !top->clk;
            top->eval();
        }

        top->rst = (i==50);//after checking 50 clocks, reset

        if(i==51){
            top->ImmOp = 65535; // then set ImmOp and check afterwards
        }
        if (Verilated::gotFinish()) exit(0);
    }


    tfp->close();
    exit(0);
}
