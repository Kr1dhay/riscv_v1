module mux_2(
    input logic [31:0] regOp2,
    input logic [31:0] immOp,
    input logic aluSrc,
    output logic [31:0] aluOp2
);

    always_comb(
        aluOp2 = aluSrc ? immOp : regOp2
    );


endmodule
