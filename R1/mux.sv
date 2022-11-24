module mux(
    input  logic        sel,
    input  logic [31:0] in1,
    input  logic [31:0] in2,
    output logic [31:0] out
);
    assign out = sel ? in1 : in2;
    //mux to select if it will perform type of Jump instruction

endmodule
