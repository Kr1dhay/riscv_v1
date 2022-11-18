module cu #(
    parameter   OP_WIDTH = 7, 
                CTRL_WIDTH = 3
)(
    input logic                     EQ,         //high for OpA == OpB
    input logic [OP_WIDTH-1:0]      Op,         //Instruction_word[6:0]
    input logic [2:0]               funct3,     //Instruction_word[14:12]
    input logic [6:0]               funct7,     //Instruction_word[31:25]
    output logic                    RegWrite,   //Write enable for the register file
    output logic [CTRL_WIDTH-1]     ALUctrl,    //Configures ALU for required operation
    output logic                    ALUsrc,     //Selects register or immediate operand 
    output logic                    ImmSrc,     //Controls sign extension block
    output logic                    PCsrc       //Selects PC addressing between PC:=PC+4 and PC:=Imm32
);

/*RegWrite LOGIC:   only certain types of instructions write to regFiles, e.g. U-type do not.
                    The true cases are written but the false are given value 0 implicitly by default case*/
always_comb begin
    case (Op)
        //I-type
        7'd3: RegWrite = 1'b1; 
        7'd19: RegWrite = 1'b1;

        //R-type
        7'd51: RegWrite = 1'b1;

        //U-type
        7'd23: RegWrite = 1'b1;
        7'd55: RegWrite = 1'b1;

        default: RegWrite = 1'b0;
    endcase
end


//ALUsrc LOGIC: I-type instructions will use immediate operand (1), but others will have 0
always_comb begin
    case (Op)
        //I-type
        7'd3: ALUsrc = 1'b1;
        7'd19: ALUsrc = 1'b1;
        7'd103: ALUsrc = 1'b1;

        default: ALUsrc = 1'b0;
    endcase
end

/*ALUctrl LOGIC:    this 3-bit control input has been decoded by mapping each bit from funct3 to ALUctrl with
                    a boolean expression.*/
always_comb begin

    case (Op)
        //R-type & I-type arithmetic and logic operations
        7'd19:  begin
                ALUctrl[2] = ~(funct3[2]) & funct3[1];
                ALUctrl[1] = funct3[2] & funct3[1];
                ALUctrl[0] = ~(funct3[2])&funct3[1] | funct3[1] & funct3[0] | ~(funct3) 
                end

        7'd51:  begin //
                ALUctrl[2] = ~(funct3[2]) & funct3[1];
                ALUctrl[1] = funct3[2] & funct3[1];
                ALUctrl[0] = ~(funct3[2])&funct3[1] | funct3[1] & funct3[0] | ~(funct3) & (funct3 ==  7'h20);
                end

        //S-type DONT CARE
        //B-type DONT CARE
        //U-type add

        default: ALUctrl = 3'b0;
    endcase
end

//ImmSrc LOGIC
always_comb begin
    case (Op)
        //Loading instructions
        7'd3:   case(funct3)
                    3'd0:   ImmSrc = 1;
                    3'd1:   ImmSrc = 1;
                    default: ImmSrc = 0;
                endcase

        //Immediate instructions
        7'd19:  case (funct3)
                    3'd0:   ImmSrc = 1;
                    3'd2:   ImmSrc = 1;
                    3'd3:   ImmSrc = 1;
                    3'd4:   ImmSrc = 1;
                    3'd6:   ImmSrc = 1;
                    3'd7:   ImmSrc = 1;
                    default: ImmSrc = 0;
                endcase

        //Jump & Link register
        7'd103: ImmSrc = 1;

        default: ImmSrc = 0;
    endcase
end

endmodule
