module ext32 #(
    parameter IN_WIDTH = 12,
    parameter OUT_WIDTH = 32
)(
    input logic immSrc, //input that controls whether sign extension takes place.
    input logic [IN_WIDTH-1:0] imm12,
    output logic [OUT_WIDTH-1:0] immOp 
);

always_comb begin
    if (immSrc == 1) immOp = {{(OUT_WIDTH-12){imm12[11]}},imm12};
    else             immOp = {{(OUT_WIDTH-12){1'b0}},imm12};
end

endmodule