module regfile #(
    ADDRESS_WIDTH = 5, 
    DATA_WIDTH = 32 

) (
    input logic                             clk,
    input logic [ADDRESS_WIDTH-1:0]         AD1,
    input logic [ADDRESS_WIDTH-1:0]         AD2,
    input logic [ADDRESS_WIDTH-1:0]         AD3,
    input logic                             WE3,
    input logic [DATA_WIDTH-1:0]            WD3,
    output logic [DATA_WIDTH-1:0]           RD1,
    output logic [DATA_WIDTH-1:0]           RD2,
    output logic [DATA_WIDTH-1:0]           a0

);

logic [DATA_WIDTH-1:0] ram_array [2**ADDRESS_WIDTH-1:0];

always_comb begin
    assign RD1 = ram_array[AD1];
    assign RD2 = ram_array[AD2];
    assign a0 = ram_array[10];
end

always_ff @(posedge clk) begin
    if(WE3 == 1'b1)
        ram_array[AD3] <= WD3;
end

endmodule

