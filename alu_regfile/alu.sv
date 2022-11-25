

//  | 31-25 | 24-20 | 19-15 | 14-12 | 11-7 |  6-0  |
//  | func7 |  rd2  |  rd1  | func3 | rd   | opcode|

module alu #(

    DATA_WIDTH = 32, 
    CONTROL_WIDTH = 3

) (
    input logic [CONTROL_WIDTH-1:0]         ALUctrl,
    input logic [DATA_WIDTH-1:0]            ALUop1,
    input logic [DATA_WIDTH-1:0]            ALUop2,
    output logic [DATA_WIDTH-1:0]           ALUout,
    output logic                            EQ

);


always_comb begin
    //As encouraged by prof, implementing all alu functions although add only needed
    case (ALUctrl) //LECTURE 7 slide 19
    3'h0:   ALUout = ALUop1 + ALUop2;
    3'h1:   ALUout = ALUop1 - ALUop2;
    3'h2:   ALUout = ALUop1 & ALUop2;
    3'h3:   ALUout = ALUop1 | ALUop2;
    3'h5:   ALUout = ALUop1 < ALUop2 ? 1 : 0;
    default: ALUout = 0;
    endcase
    assign EQ = (ALUop1 == ALUop2);


end
endmodule
