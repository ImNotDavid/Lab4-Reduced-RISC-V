#include "VPC.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include "iostream"

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
    bool error = false;


    /* PC Standard increment test
    Test input:
    [
        rst = 0
        ImmOp = 0
        jmp_sel = 0
    ]
    Expected output:
    [
        PC_OUT = 0, 4, 8, 12, 16 .... 1200
    ]
    */
    tfp->open ("test1.vcd");
    // initialize simulation inputs
    top->clk = 0;
    top->rst = 0;
    top->ImmOp = 0;
    top->jmp_sel = 0;
    // run simulation for many clock cycles
    for (i=0; i<3000; i++){
        // dump variables into VCD file and toggle clock
        for (clk=0; clk<2; clk++){
            tfp->dump (2*i+clk);    //units in ps
            top->clk = !top->clk;
            top->eval ();
        }
        if(top->PC_OUT != i*4 && !error){
            std::cout << "[FAIL] PC NOT INCREMENTING CORRECTLY" << std::endl;
            error = true;
        }
    }
    tfp->close();
    /* PC Jump test
    Test input:
    [
        rst = 0
        ImmOp = random address
        jmp_sel = 1 at random clock cycle
    ]
    */
    delete tfp;
    tfp = new VerilatedVcdC;
    tfp->open ("test2.vcd");
    error = false;
    // initialize simulation inputs
    int jump_clock = rand() % 3000;
    int jmp_location = rand() % 4294967296; //Random 32 bit address
    top->clk = 0;
    top->rst = 0;
    top->ImmOp = jmp_location;
    top->jmp_sel = 0;
    // run simulation for many clock cycles
    for (i=0; i<3000; i++){
        // dump variables into VCD file and toggle clock
        for (clk=0; clk<2; clk++){
            tfp->dump (2*i+clk);    //units in ps
            top->clk = !top->clk;
            top->eval ();
        }
        top->jmp_sel = (clk == jump_clock); //Jump once the clock has reached that point.
        if(clk == jump_clock+1){ //check on the next cycle
            if(top->PC_OUT != jmp_location && !error){
                std::cout << "[FAIL] PC NOT JUMPING CORRECTLY" << std::endl;
                error = true;
            }
        }
    }
    tfp->close();
    if(!error){
        std::cout << "[PASS]" << std::endl;
    }
    exit(error ? -1 : 0);
}