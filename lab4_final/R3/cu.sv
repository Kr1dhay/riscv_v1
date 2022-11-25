module cu (
    input logic                     EQ,         //high for OpA == OpB
    input logic     [6:0]           Op,         //Ins[6:0]
    input logic     [2:0]           funct3,     //Ins[14:12]
    input logic                     funct7_5,   //Ins[30]
    output logic                    RegWrite,   //Write enable for the register file
    output logic    [2:0]           ALUctrl,    //Configures ALU for required operation
    output logic                    ALUsrc,     //Selects register or immediate operand 
    output logic    [1:0]           ImmSrc,     //Controls sign extension block
    output logic                    PCsrc       //Selects PC addressing between PC:=PC+4 and PC:=Imm32
);

logic   [1:0]         ALUOp;
logic                 Branch;
logic                 NEG;

assign NEG = funct3[0];

ALUdec ALUdec (
    .ALUOp(ALUOp),
    .funct3(funct3),
    .funct7_5(funct7_5),
    .ALUctrl(ALUctrl)
);

MAINdec MAINdec (
    .Op(Op),
    .RegWrite(RegWrite),
    .ALUsrc(ALUsrc),
    .ALUOp(ALUOp),
    .ImmSrc(ImmSrc),
    .Branch(Branch)  
);

//PCsrc logic
always_comb
    PCsrc = (NEG ^ EQ) & Branch;
endmodule
