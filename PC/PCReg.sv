module PCReg#(
    parameter WIDTH = 8
)(
    input   logic   clk,
    input   logic   rst,
    input   logic [WIDTH-1:0]   next_PC,
    output  logic [WIDTH-1:0]   PC
);

reg [WIDTH-1:0] current_PC;

always_ff @ (posedge clk)
    if (rst) current_PC <= {WIDTH{1'b0}};
    else current_PC <= next_PC;

assign PC = current_PC;
endmodule
