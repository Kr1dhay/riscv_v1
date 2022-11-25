module rom #(
    parameter   ADDRESS_WIDTH = 20,
                DATA_WIDTH = 8    
)(
    input logic [ADDRESS_WIDTH-1:0] A,
    output logic [31:0] RD
);

logic [DATA_WIDTH-1:0] rom_array [2**ADDRESS_WIDTH-1:0];

initial begin
    $display("Loading rom.");
    $readmemh("program.mem", rom_array);
end

always_comb begin
    // output is asynchronous
    RD = {rom_array[A], rom_array[A+1], rom_array[A+2], rom_array[A+3]};
end

endmodule
