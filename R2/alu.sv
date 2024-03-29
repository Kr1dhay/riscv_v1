module alu (
    input logic [31:0] aluOp1,
    input logic [31:0] aluOp2,
    input logic [2:0] aluCTR,
    output logic [31:0] sum,
    output logic eq
);

always_comb begin
    if(aluCTR == 3'b0) sum = aluOp1 + aluOp2;
    else sum = 32'b0;
    if(aluOp1 == aluOp2) eq = 1;
    else eq = 0;
end

endmodule
