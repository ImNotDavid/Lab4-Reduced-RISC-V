module PC #(
    parameter WIDTH = 8
) (
    input   logic [WIDTH-1:0]   ImmOp,
    input   logic               clk,
    input   logic               rst,
    input   logic               jmp_sel,
    output  logic [WIDTH-1:0]   PC_OUT
);

logic [WIDTH-1:0] branch_PC;
logic [WIDTH-1:0] current_PC;

register PCReg(
    .PC(current_PC),
    .next_PC(branch_PC),
    .clk(clk),
    .rst(rst)
);

always_comb begin
    branch_PC = (jmp_sel) ? current_PC+ImmOp:current_PC+4;
end

assign PC_OUT = current_PC;
endmodule
