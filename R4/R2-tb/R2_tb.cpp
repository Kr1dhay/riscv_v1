#include "Vcounter.h" //modify
#include "verilated.h"
#include "verilated_vcd_c.h"
//make sure to set parameters
int main(int argc, char **argv , char **env) {
    long i;
    int clk;
    int j;

    //parameters
    int immVal = 2;//immediate value here
    int addi;//addi code here
    int a0;//a0 here
    int bne;//bne code here

    Verilated::commandArgs(argc, argv);
    Vcounter* top= new Vcounter; //modify

    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open("counter.vcd"); //modify

    top->clk = 1;

    //addi testing for constant and immediate
    top->rd = a0;
    top->ALUsrc = 1;
    top->ImmOp = immVal; //immediate value here
    top->rs1 = 0;
    top->RegWrite = 1;
    top->ALUctrl = addi;
    
    for (clk = 0; clk<2; clk++){
        tfp->dump(2*i+clk);
        top->clk = !top->clk;
        top->eval();
    }
    if (Verilated::gotFinish()) exit(0);
        //check a0 to see if addi happened
    //preconfigure all registers to a value for testing below
    
    for(i=1;i<=31;i++){
        top->rd = i;
        top->ALUsrc = 1;
        top->ImmOp = i; //add registers with their own address values
        top->rs1 = 0;
        top->RegWrite = 1;
        top->ALUctrl = addi;
    
        for (clk = 0; clk<2; clk++){
            tfp->dump(2*i+clk);
            top->clk = !top->clk;
            top->eval();
        }
        if (Verilated::gotFinish()) exit(0);
    }

    //addi testing for all registers and immediate
    
    for(i=1;i<=31;i++){
        top->rd = a0;
        top->ALUsrc = 1;
        top->ImmOp = immVal;
        top->rs1 = i;
        top->RegWrite = 1;
        top->ALUctrl = addi;

        for (clk = 0; clk<2; clk++){
            tfp->dump(2*i+clk);
            top->clk = !top->clk;
            top->eval();
        }
        if (Verilated::gotFinish()) exit(0);
    }
        //check a0 for all registers
    //bne testing (all comparing to zero)
    //bne testing for equal
        //set a0 to 0 using addi a0, zero, 0
    top->rd = a0;
    top->ALUsrc = 1;
    top->ImmOp = 0;
    top->rs1 = 0;
    top->RegWrite = 1;
    top->ALUctrl = addi;
    
    for (clk = 0; clk<2; clk++){
        tfp->dump(2*i+clk);
        top->clk = !top->clk;
        top->eval();
    }
    if (Verilated::gotFinish()) exit(0);
        //bne
    top->ALUsrc = 0;
    top->rs1 = a0;
    top->rs2 = 0;
    top->RegWrite = 0;
    top->ALUctrl = bne;
    
    for (clk = 0; clk<2; clk++){
        tfp->dump(2*i+clk);
        top->clk = !top->clk;
        top->eval();
    }
    if (Verilated::gotFinish()) exit(0);
        //check eq now
    //bne testing for not equal
        //set a0 to something random using addi a0, immVal, 0
    top->rd = a0;
    top->ALUsrc = 1;
    top->ImmOp = immVal; //immediate value here
    top->rs1 = 0;
    top->RegWrite = 1;
    top->ALUctrl = addi;
    
    for (clk = 0; clk<2; clk++){
        tfp->dump(2*i+clk);
        top->clk = !top->clk;
        top->eval();
    }
    if (Verilated::gotFinish()) exit(0);
        //bne
    top->ALUsrc = 0;
    top->rs1 = a0;
    top->rs2 = 0;
    top->RegWrite = 0;
    top->ALUctrl = bne;
    
    for (clk = 0; clk<2; clk++){
        tfp->dump(2*i+clk);
        top->clk = !top->clk;
        top->eval();
    }
    if (Verilated::gotFinish()) exit(0);
        //check eq now

    tfp->close();
    exit(0);
}

