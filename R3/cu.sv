module cu #(
    parameter OP_WIDTH = 7
)(
    input logic EQ,
    input logic [OP_WIDTH-1:0] Op,
    output logic RegWrite,
    output logic ALUctrl,
    output logic ALUsrc,
    output logic ImmSrc,
    output logic PCsrc
);

always_comb begin
    
end

endmodule
