#include "Vrom.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include "iostream"
#include "fstream"
#include "stringstream"

int main(int argc, char **argv, char **env){
    int i;
    int clk;

    Verilated::commandArgs(argc, argv);
    // init top verilog instance
    Vrom* top = new Vrom;
    // init trace dump
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace (tfp, 99);
    tfp->open ("rom.vcd");

    

    int flen = rand() % 256 // Random length of memory with address width 8
    fstream memfile;
    memfile.open("program.mem");
    std::stringstream conversionStream;
    for(i=0; i<flen; i++){
        conversionStream << std::hex << (rand() % 4294967296);
        
        
    }
    

    // initialize simulation inputs
    top->clk = 1;
    top->addr = 0;
    
    // run simulation for many clock cycles
    for (i=0; i<256; i++){

        // dump variables into VCD file and toggle clock
        for (clk=0; clk<2; clk++){
            tfp->dump (2*i+clk);    //units in ps
            top->clk = !top->clk;
            top->eval ();
        }
        top->addr = i;
        if (Verilated::gotFinish()) exit(0);
    }
    tfp->close();
    exit(0);
}