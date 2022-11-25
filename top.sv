module top(
    input logic clk,
    input logic rst,
    output logic a0
);

    logic PCsrc,
    logic [31:0] ImmOp,
    logic [31:0] PC,
    logic [4:0] ad1,
    logic [4:0] ad2,
    logic [4:0] ad3,
    logic we3,
    logic aluSrc,
    logic [2:0] aluCTR,
    logic eq,
    logic [1:0] immSrc

program_counter pcounter(
    .clk (clk),
    .rst (rst),
    .PCsrc (PCsrc),
    .ImmOp (ImmOp),
    .PC (PC)
)

control ctr(
    .A (PC),
    .EQ (eq),
    .immSrc (immSrc),
    .rs1 (ad1),
    .rs2 (ad2),
    .rd (ad3),
    .RegWrite (we3),
    .ALUctrl (aluCTR),
    .ALUsrc (aluSrc),
    .ImmSrc (immSrc),
    .PCsrc (PCsrc),
    .ImmOp (ImmOp)
)

red alu(
    .clk (clk),
    .rst (rst),
    .a0 (a0),
    .ad1 (ad1),
    .ad2 (ad2),
    .ad3 (ad3),
    .we3 (we3),
    .aluSrc (aluSrc),
    .aluCTR (aluCTR),
    .eq (eq),
    .immOp (ImmOp)
)

endmodule
