//  PC Register that maintains the program counter  - D Flip Flop
module register(
    input  logic        clk,
    input  logic        rst,
    input  logic [31:0] in,
    output logic [31:0] out
);
    always_ff @(posedge clk) begin
        if (rst) out <= 32'h0;
        else out <= in;
    end

endmodule
