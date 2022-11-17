module cu #(
    parameter   OP_WIDTH = 7, 
                CTRL_WIDTH = 3
)(
    input logic                     EQ,         //high for OpA == OpB
    input logic [OP_WIDTH-1:0]      Op,         //Instruction_word[6:0]
    input logic [2:0]               funct3,     //Instruction_word[14:12]
    output logic                    RegWrite,   //Write enable for the register file
    output logic [CTRL_WIDTH-1]     ALUctrl,    //Configures ALU for required operation
    output logic                    ALUsrc,     //Selects register or immediate operand 
    output logic                    ImmSrc,     //Controls sign extension block
    output logic                    PCsrc       //Selects PC addressing between PC:=PC+4 and PC:=Imm32
);

//RegWrite LOGIC
always_comb begin
    case (Op)
        //I-type
        7'd3: RegWrite = 1'b1; 
        7'd19: RegWrite = 1'b1;

        //U-type
        7'd23: RegWrite = 1'b1;
        7'd55: RegWrite = 1'b1;

        //B-type
        7'd99: RegWrite = 1'b0;

        default: RegWrite = 1'b0;
    endcase
end


//ALUsrc LOGIC
always_comb begin
    case (Op)
        //I-type
        7'd3: ALUsrc = 1'b1;
        7'd19: ALUsrc = 1'b1;
        7'd103: ALUsrc = 1'b1;

        //R-type
        7'd51: ALUsrc = 1'b1;

        default: ALUsrc = 1'b0;
    endcase
end

//ALUctrl LOGIC
always_comb begin
    OpDC5 = {Op[6],Op[4:0]};
    case (OpDC5)
        //R-type
        7'd19:  case (funct3)
                    3'b000: ALUctrl = 3'b0;
                    //3'b001: ALUctrl = 3';
                    3'b010: ALUctrl = 3'b101;
                    3'b011: ALUctrl = 3'b101;
                    //3'b100:
                    //3'b101: ALU
                    3'b110: ALUctrl = 3'b011;
                    3'b111: ALUctrl = 3'b000;
                    default: ALUctrl = 3'b0;
                endcase

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
