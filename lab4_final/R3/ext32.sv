module ext32 #(
    parameter OUT_WIDTH = 32
)(
    input logic     [1:0]               ImmSrc, //input that controls whether sign extension takes place.
    input logic     [31:7]              msb25,
    output logic    [OUT_WIDTH-1:0]     ImmExt
);

always_comb begin
    ImmExt[31:12] = {20{msb25[31]}};
    case(ImmSrc)
        /*I*/   2'b00:  ImmExt[11:0] = msb25[31:20];
        /*S*/   2'b01:  ImmExt[11:0] = {msb25[31:25], msb25[11:7]};
        /*B*/   2'b10:  ImmExt[11:0] = {msb25[7], msb25[30:25], msb25[11:8], 1'b0};
        /*U*/   2'b11:  ImmExt = {msb25[31:12], 12'b0};
    endcase
end

endmodule
