module control (
    //input logic                     clk,
    input logic     [31:0]          PC,
    input logic                     EQ,

    output logic                    RegWrite,   //Write enable for the register file
    output logic    [2:0]           ALUctrl,    //Configures ALU for required operation
    output logic                    ALUsrc,     //Selects register or immediate operand 
    output logic                    PCsrc,       //Selects PC addressing between PC:=PC+4 and PC:=Imm32
    

    output logic    [4:0]           rs1,
    output logic    [4:0]           rs2,
    output logic    [4:0]           rd,

    output logic    [31:0]          ImmOp
);

logic [31:0]    ins;
logic [1:0]     ImmSrc;
//logic [31:0] PC1;

rom rom (
    .A(PC), //change to PC1 for individual testing
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
    .ImmExt(ImmOp)
);

assign rs1 = ins[19:15];
assign rs2 = ins[24:20];
assign rd = ins[11:7];

/*always_ff @(posedge clk)
    PC1 <= PC;*/

endmodule
