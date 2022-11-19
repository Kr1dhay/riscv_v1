module top(
    input wire clk,
    input wire rst,
    output wire a0,
    input wire ad1,
    input wire ad2,
    input wire ad3,
    input wire we3,
    input wire aluSrc,
    input wire aluCTR,
    output wire eq,
    input wire immOp
);

wire aluOut;
wire aluOp1;
wire regOp2;
wire aluOp2;


regFile myRegFile(
    .ad1(ad1),
    .ad2(ad2),
    .ad3(ad3),
    .we3(we3),
    .wd3(aluOut),
    .rd1(),
    .rd2(),
    .a0(),
    .clk(clk)
);

mux myMux(
    
);

alu myAlu(
    
);

endmodule
