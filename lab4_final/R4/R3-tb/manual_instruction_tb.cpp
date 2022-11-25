#include "Vcounter.h" //modify
#include "verilated.h"
#include "verilated_vcd_c.h"
#include "vector"
//set parameters first
int main(int argc, char **argv , char **env) {
    long i;
    int clk;
    
    //parameters
    std::vector<int> instruction_input = {1,2,3,4};//set instructions here
    int eq_test;//set the cycle for testing eq
    int ext_test//set sign extention testing cycle

    Verilated::commandArgs(argc, argv);
    Vcounter* top= new Vcounter; //modify

    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open("counter.vcd"); //modify
    
    for(i=0;i<500000;i++){
        for (clk = 0; clk<2; clk++){
            tfp->dump(2*i+clk);
            //top->clk = !top->clk;
            top->eval();
        }

        top->A = instruction_input[i];//feed instructions in
        

        if(i==eq_test){//time for eq test
            top->eq = 1;
        }
        if(i==ext_test){//time for sign extention test
            top->ImmSrc = 1;
        }
        //observe all the outputs
        if (Verilated::gotFinish()) exit(0);
    }


    tfp->close();
    exit(0);
}
