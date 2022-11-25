module ALUdec (
    input logic     [1:0]       ALUOp,
    input logic     [2:0]       funct3,
    input logic                 funct7_5,
    output logic    [2:0]       ALUctrl
);

/*ALUCtrl LOGIC:    this 3-bit control input has been decoded by mapping each bit from funct3 to ALUctrl with
                    a boolean expression.*/
always_comb
    case (ALUOp)
        //LOAD & STORE
        2'b00: ALUctrl = 3'b000;

        //BRANCH
        2'b01: ALUctrl = 3'b001;

        //ARITHMETIC & LOGIC (R or I)
        2'b10:  begin
                ALUctrl[2] = ~(funct3[2]) & funct3[1];
                ALUctrl[1] = funct3[2] & funct3[1];
                ALUctrl[0] = (~funct3[2] & funct3[1]) | (funct3[1] & funct3[0]) | ((funct3 == 000) & funct7_5);
                end

        default: ALUctrl = 3'b0;
    endcase

endmodule
