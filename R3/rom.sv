module ROM #(
    parameter   ADDRESS_WIDTH = 32,
                DATA_WIDTH = 8    
)(
    input logic [WIDTH-1:0] A,
    output logic [(4*WIDTH)-1:0] RD
);

logic [DATA_WIDTH-1:0] rom_array [2**ADDRESS_WIDTH-1:0]; //Byte addressing means that first 2 bits of address are not considered

initial begin
    $display("Loading rom.");
    $readmemh("program.mem", rom_array);
end;

always_comb begin
    // output is asynchronous
    RD = {rom_array[A+3], rom_array[A+2], rom_array[A+1], rom_array[A]};
end

endmodule
