module MAINdec #(
    parameter   /*I-type Op*/   LOAD = 7'd3, I_AL = 7'd19, JALR = 7'd103,
                /*S-type Op*/   STORE = 7'd35,
                /*R-type Op*/   REG = 7'd51,
                /*B-type Op*/   BRANCH = 7'd99,
                /*U-type Op*/   AUIPC = 7'd23, LUI = 7'd55,
                /*J-type Op*/   JAL = 7'd111
)(
    input logic     [6:0]           Op,         //Instruction_word[6:0]
    output logic                    RegWrite,   //Write enable for the register file
    output logic                    ALUsrc,     //Inverted flag for R-type Op
    output logic    [1:0]           ALUOp,      //Control signal for ALUdec
    output logic    [1:0]           ImmSrc,     //Controls sign extension block
    output logic                    Branch      //Flag for B-type Op
);

//ALUOp logic: ALUOp determines how the ALUCtrl is decoded.
always_comb
    case(Op)
        //Load and Store employ the ALU add configuration
        LOAD: ALUOp = 2'b00;
        STORE: ALUOp = 2'b00;

        //Branch (beq) employs the ALU subtract configuration
        BRANCH: ALUOp = 2'b01;

        //Arithmetic & Logic (A&L) map funct3 to ALUCtrl, using funct7[5] to differentiate add from sub
        REG: ALUOp = 2'b10;
        I_AL: ALUOp = 2'b10; 

        default: ALUOp = 2'b00;
    endcase
    
/*RegWrite LOGIC:   only certain types of instructions write to regFiles, e.g. U-type do not.
                    The true cases are written but the false are given value 0 implicitly by default case*/
always_comb begin
    case (Op)
        //I-type
        LOAD: RegWrite = 1'b1; 
        I_AL: RegWrite = 1'b1;
        JALR: RegWrite = 1'b1;

        //R-type
        REG: RegWrite = 1'b1;

        //U-type
        AUIPC: RegWrite = 1'b1;
        LUI: RegWrite = 1'b1;

        //J-type
        JAL: RegWrite = 1'b1;

        default: RegWrite = 1'b0;
    endcase
end

//ALUsrc LOGIC: all instructions use a form of the immediate (1) apart from R type (0)
always_comb begin
    ALUsrc = ~(Op == REG);
end

/*ImmSrc LOGIC: The immediate operand is represented by different sections of the instruction word
                depending on the instruction type (I, U, S, B). R-type is don't care*/
always_comb begin
    case (Op)
        //I-type
        LOAD: ImmSrc = 2'b00;
        I_AL: ImmSrc = 2'b00;
        JALR: ImmSrc = 2'b00;

        //S-type
        STORE: ImmSrc = 2'b01;

        //B-type
        BRANCH: ImmSrc = 2'b10;

        //U-type
        AUIPC: ImmSrc = 2'b11;
        LUI:   ImmSrc = 2'b11;

        //R-type XX set to 00

        default: ImmSrc = 2'b00;
    endcase
end

//BRANCH Logic: identity whether instruction is B-type
always_comb
    Branch = (Op == BRANCH);

endmodule
