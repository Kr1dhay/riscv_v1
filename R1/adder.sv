// Adder to add PC and ImmOp (32bits Addition)
module adder (
    input  logic [31:0] op1,
    input  logic [31:0] op2,
    output logic [31:0] out
);
    // always_comb begin
    //     logic prev_carry_out = 0;

    //     for (int i = 0; i < 32; i++) begin
    //         out[i] = op1[i] ^ op2[i] ^ prev_carry_out;
    //         prev_carry_out = op1[i] & op2[i];
    //     end
    // end
    assign out = op1 + op2;

endmodule

