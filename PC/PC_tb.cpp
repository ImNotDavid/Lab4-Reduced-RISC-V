#include "VPC.h"
#include "verilated.h"
#include "verilated_vcd_c.h"

int main(int argc, char **argv, char **env){
    int i;
    int clk;

    Verilated::commandArgs(argc, argv);
    // init top verilog instance
    VPC* top = new VPC;
    // init trace dump
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace (tfp, 99);
    tfp->open ("PC.vcd");

    // initialize simulation inputs
    top->clk = 1;
    top->rst = 0;
    top->ImmOp = 0;
    top->jmp_sel = 0;

    // run simulation for many clock cycles
    for (i=0; i<300; i++){

       
        // dump variables into VCD file and toggle clock
        for (clk=0; clk<2; clk++){
             if (i == 100 && clk==1){
            top->ImmOp = 42;
            }
            tfp->dump (2*i+clk);    //units in ps
            top->clk = !top->clk;
            top->eval ();
        }
        
        top->rst = (i==150);
        top->jmp_sel = (i==175);
        
        if (Verilated::gotFinish()) exit(0);
    }
    tfp->close();
    exit(0);
}