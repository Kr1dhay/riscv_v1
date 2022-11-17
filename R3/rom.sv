module ROM #(
    parameter   WIDTH = 32,    
)(
    input logic [WIDTH-1:0] A,
    output logic [WIDTH-1:0] RD
);

logic [WIDTH-1:0] rom_array [2**(WIDTH-2)-1:0]; //Byte addressing means that first 2 bits of address are not considered

initial begin
    $display("Loading rom.");
    $readmemh("program.mem", rom_array);
end;

always_comb begin
    // output is asynchronous
    RD = rom_array[A];
end

endmodule
