#include "Vtop.h" //modify
#include "verilated.h"
#include "verilated_vcd_c.h"

int main(int argc, char **argv , char **env) {
    int i;
    int clk;

    Verilated::commandArgs(argc, argv);
    Vtop* top= new Vtop; //modify

    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open("top.vcd"); //modify

    top->clk = 1;
    top->rst = 0;
    
    for(i=0;i<5000;i++){
        for (clk = 0; clk<2; clk++){
            tfp->dump(2*i+clk);
            top->clk = !top->clk;
            top->eval();
        }


        if (Verilated::gotFinish()) exit(0);
    }


    tfp->close();
    exit(0);
}
