module control (
    input logic                     clk,
    input logic     [31:0]          PC,
    input logic                     EQ,
    output logic                    RegWrite,   //Write enable for the register file
    output logic    [2:0]           ALUctrl,    //Configures ALU for required operation
    output logic                    ALUsrc,     //Selects register or immediate operand 
    output logic    [1:0]           ImmSrc,     //Controls sign extension block
    output logic                    PCsrc,       //Selects PC addressing between PC:=PC+4 and PC:=Imm32
    output logic    [31:0]          ImmExt
);

logic [31:0] ins;
logic [31:0] PC1;

rom rom (
    .A(PC1),
    .RD(ins)
);

cu cu (
    .EQ(EQ),
    .Op(ins[6:0]),
    .funct3(ins[14:12]),
    .funct7_5(ins[30]),
    .RegWrite(RegWrite),
    .ALUctrl(ALUctrl),
    .ALUsrc(ALUsrc),
    .ImmSrc(ImmSrc),
    .PCsrc(PCsrc)
);

ext32 ext32 (
    .ImmSrc(ImmSrc),
    .msb25(ins[31:7]),
    .ImmExt(ImmExt)
);

always_ff @(posedge clk)
    PC1 <= PC;

endmodule
