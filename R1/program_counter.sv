// module program_counter (
//     input  logic        clk,
//     input  logic        rst,
//     input  logic        PCsrc,
//     input  logic [31:0] ImmOp,
//     output logic [31:0] PC
// );
//     logic [31:0] branch_PC;
//     logic [31:0] inc_PC;
//     logic [31:0] next_PC;

//     adder branch_adder(
//         .op1(PC),
//         .op2(ImmOp),
//         .out(branch_PC)
//     );

//     adder inc_adder(
//         .op1(PC),
//         .op2(32'd4),
//         .out(inc_PC)
//     );

//     mux branch_sel(
//         .in1(branch_PC),
//         .in2(inc_PC),
//         .sel(PCsrc),
//         .out(next_PC)
//     );

//     register PCReg(
//         .clk(clk),
//         .rst(rst),
//         .in(next_PC),
//         .out(PC)
//     );

// endmodule

module program_counter (
    input  logic        clk,
    input  logic        rst,
    input  logic        PCsrc,
    input  logic [31:0] ImmOp,
    output logic [31:0] PC
);
    logic [31:0] branch_PC;
    logic [31:0] inc_PC;
    logic [31:0] next_PC;

    assign branch_PC = PC + ImmOp;
    assign inc_PC = PC + 32'd4;
    assign next_PC = PCsrc ? branch_PC : inc_PC;

    always_ff @(posedge clk) begin
        if (rst) PC <= 32'd0;
        else PC <= next_PC;
    end

endmodule
