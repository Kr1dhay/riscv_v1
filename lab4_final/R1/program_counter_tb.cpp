#include "Vprogram_counter.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <assert.h>     /* assert */
#include <cstdlib>
#include <ctime>

#define MAX_INT_32 4294967295
#define MAX_SIM_CYC 100

int main(int argc, char **argv, char **env) {
  int simcyc;     // simulation clock count
  int tick;       // each clk cycle has two ticks for two edges

  Verilated::commandArgs(argc, argv);
  // init top verilog instance
  Vprogram_counter* top = new Vprogram_counter;
  //  init trace dump
  Verilated::traceEverOn(true);
  VerilatedVcdC* tfp = new VerilatedVcdC;
  top->trace(tfp, 99);
  tfp->open("program_counter.vcd");

  // initialize simulation input
  top->clk = 1;
  top->rst = 1;

  // Use current time as
  // seed for random generator
  srand(time(0));

  // expected PC value
  int prev_PC = 0;
  int prev_ImmOp = 0;

  // run simulation for MAX_SIM_CYC clock cycles
  for (simcyc=0; simcyc<MAX_SIM_CYC; simcyc++) {
    // dump variables into VCD file and toggle clock
    for (tick=0; tick<2; tick++) {
      tfp->dump(2*simcyc+tick);
      top->clk = !top->clk;
      top->eval();
    }
    // reset the module for the first 2 clock cycles
    top->rst = (simcyc < 2);

    // from the third clock cycle up to the 50th clock cycle the PC should be incremented by ImmOp
    printf("Simulation Cycle: %d\n", simcyc);
    if (simcyc < 50 && simcyc >= 2) {
      top->PCsrc = 0; // select branch_PC as next_PC and eventually PC output
      top->ImmOp = rand() % (MAX_INT_32 + 1); // set ImmOp to a random 32bit value
      printf("\tPCsrc: %d\n", top->PCsrc);
      printf("\tprev_ImmOp: %d\n", prev_ImmOp); 
      printf("\tprev_PC: %d\n", prev_PC);
      printf("\tPC: %d\n", top->PC);
      //assert (top->PC == (int32_t)(prev_ImmOp + prev_PC)); // check if the PC output is correct
      //prev_ImmOp = top->ImmOp;
      prev_PC = top->PC; // update the expected PC value in the c++ code
    } else if (simcyc >= 2) {
      top->PCsrc = 0; // select PC4 as next_PC and eventually PC output
      printf("\tPCsrc: %d\n", top->PCsrc);
      printf("\tprev_PC: %d\n", prev_PC);
      printf("\tPC: %d\n", top->PC);
      assert (top->PC == (int32_t)(prev_PC + 4)); // check if the PC output is correct
      prev_PC = top->PC; // update the expected PC value in the c++ code
    }

    if (Verilated::gotFinish())
      exit(0);
  }

  tfp->close();
  printf("Testing was successful\n");
  exit(0);
}