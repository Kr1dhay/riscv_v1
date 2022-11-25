module red #(
    parameter ADDRESS_WIDTH = 5,
              DATA_WIDTH = 32
)(
    input wire clk,
    output wire [31:0] a0,
    input wire [ADDRESS_WIDTH - 1:0] ad1,
    input wire [ADDRESS_WIDTH - 1:0] ad2,
    input wire [ADDRESS_WIDTH - 1:0] ad3,
    input wire we3,
    input wire aluSrc,
    input wire [2:0] aluCTR,
    output wire eq,
    input wire [DATA_WIDTH - 1:0] immOp
);

wire [DATA_WIDTH - 1:0] aluOut;
wire [DATA_WIDTH - 1:0] aluOp1;
wire [DATA_WIDTH - 1:0] regOp2;
wire [DATA_WIDTH - 1:0] aluOp2;


regFile myRegFile(
    .ad1(ad1),
    .ad2(ad2),
    .ad3(ad3),
    .we3(we3),
    .wd3(aluOut),
    .rd1(aluOp1),
    .rd2(regOp2),
    .a0(a0),
    .clk(clk)
);

mux myMux(
    .regOp2(regOp2),
    .aluSrc(aluSrc),
    .immOp(immOp),
    .aluOp2(aluOp2)
);

alu myAlu(
    .aluOp1(aluOp1),
    .aluOp2(aluOp2),
    .aluCTR(aluCTR),
    .sum(aluOut),
    .eq(eq)
);

endmodule
