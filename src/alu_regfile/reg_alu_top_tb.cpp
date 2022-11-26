#include "verilated.h"
#include "verilated_vcd_c.h"
#include "Vreg_alu_top.h"

#define MAX_SIM_CYC 25

int main(int argc, char **argv, char **env)
{
    int simcyc = 0; // simulation clock count

    int tick; // each clk cycle has two ticks for two edges

    Verilated::commandArgs(argc, argv);
    // init top verilog instance
    Vreg_alu_top *top = new Vreg_alu_top;
    // init trace dump
    Verilated::traceEverOn(true);
    VerilatedVcdC *tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open("reg_alu_top.vcd");

    // initialize simulation inputs
    //  | 31-25 | 24-20 | 19-15 | 14-12 | 11-7 |  6-0 |
    //  | func7 |  rs2  |  rs1  | func3 |  rd  |opcode|
    //  |    imm 11:0   |  rs1  | func3 |  rd  |opcode|
    top->clk = 1;
    top->ALUsrc = 0;
    top->ALUctrl = 0;
    top->RegWrite = 0;
    top->instr = 0;
    top->ImmOp = 0;

    // pre-loop tests
    //  TEST ONE: Add Immediate, effective Load Immediate: s2 <= 0xF3
    for (tick = 0; tick < 2; tick++)
    {
        tfp->dump(2 * simcyc + tick);
        top->clk = !top->clk;
        top->eval();
    }
    top->RegWrite = 1;
    top->instr = 0x0f300913; // addi s2 , zero,  0xF3. ALUsrc = 1, chooses ImmOp
    top->ImmOp = 0xF3;       // SPECIFY CUSTOM ImmOp FOR TESTING, SignExtend should do this
    top->ALUctrl = 0;        // SPECIFY CUSTOM ALUctrl FOR TESTING, ControlUnit should do this
    top->ALUsrc = 1;         // SPECIFY CUSTOM ALUsrc FOR TESTING, ControlUnit should do this
    simcyc++;

    // TEST TWO: Add Immediate, effective  Immediate: a1 <= s2
    for (tick = 0; tick < 2; tick++)
    {
        tfp->dump(2 * simcyc + tick);
        top->clk = !top->clk;
        top->eval();
    }
    top->RegWrite = 1;
    top->instr = 0x00090593; // addi a1 , s2,  0x0. ALUsrc = 0,chooses RD2 aka s2
    top->ImmOp = 0;          // SPECIFY CUSTOM ImmOp FOR TESTING, SignExtend should do this
    top->ALUctrl = 0;        // SPECIFY CUSTOM ALUctrl FOR TESTING, ControlUnit should do this
    top->ALUsrc = 0;         // SPECIFY CUSTOM ALUsrc FOR TESTING, ControlUnit should do this

    simcyc++;

    // run simulation for MAX_SIM_CYC clock cycles
    for (; simcyc < MAX_SIM_CYC; simcyc++)
    {
        // dump variables into VCD file and toggle clock
        for (tick = 0; tick < 2; tick++)
        {
            tfp->dump(2 * simcyc + tick);
            top->clk = !top->clk;
            top->eval();
        }
        top->RegWrite = 1;
        top->instr = 0x00150513; // addi a0 , a0,  0x1
        top->ALUsrc = 1;         // SPECIFY CUSTOM ALUsrc FOR TESTING, ControlUnit should do this
        top->ImmOp = 1;          // SPECIFY CUSTOM ImmOp FOR TESTING, SignExtend should do this

        if (Verilated::gotFinish())
            exit(0);
    }

    tfp->close();
    exit(0);
}