/* verilator lint_off UNUSED*/
// above line to stop verilator from nagging me for not using all the bits of instr

module reg_alu_top #(
    IMMOP_WIDTH = 32,
    INSTR_WIDTH = 32,
    ADDRESS_WIDTH = 5, 
    DATA_WIDTH = 32, 
    CONTROL_WIDTH = 3

) (
    input logic                           clk,
    input logic                           ALUsrc,
    input logic [CONTROL_WIDTH-1:0]       ALUctrl,
    input logic                           RegWrite,
    input logic  [INSTR_WIDTH-1:0]        instr, //combine rs1, rs2. rd into one for brevity
    input logic  [IMMOP_WIDTH-1:0]        ImmOp,
    output logic [DATA_WIDTH-1:0]         a0,
    output logic                          EQ
);


//  | 31-25 | 24-20 | 19-15 | 14-12 | 11-7 |  6-0 |
//  | func7 |  rs2  |  rs1  | func3 |  rd  |opcode| 
//  |    imm 11:0   |  rs1  | func3 |  rd  |opcode| 


logic [ADDRESS_WIDTH-1:0] rs2 = instr[24:20];
logic [ADDRESS_WIDTH-1:0] rs1 = instr[19:15];
logic [ADDRESS_WIDTH-1:0] rd = instr[11:7];
logic [DATA_WIDTH-1:0] ALUop1;
logic [DATA_WIDTH-1:0] ALUop2;
logic [DATA_WIDTH-1:0] regOp2;
logic [DATA_WIDTH-1:0] ALUout;

assign ALUop2 = ALUsrc ? ImmOp : regOp2; //shortcut method, no need for a mux module

regfile regfile (
    .clk (clk),
    .AD1 (rs1),
    .AD2 (rs2),
    .AD3 (rd),
    .WE3 (RegWrite),
    .WD3 (ALUout),
    .RD1 (ALUop1),
    .RD2 (regOp2),
    .a0 (a0)
);


alu alu (
    .ALUop1 (ALUop1),
    .ALUop2 (ALUop2), 
    .ALUctrl (ALUctrl),
    .ALUout (ALUout),
    .EQ (EQ)
);

endmodule
