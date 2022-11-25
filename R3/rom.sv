module rom #(
    parameter   ADDRESS_WIDTH = 32,
                PRACTICAL_WIDTH = 20,
                DATA_WIDTH = 8    
)(
    input logic [ADDRESS_WIDTH-1:0] A,
    output logic [31:0] RD
);

logic [DATA_WIDTH-1:0] rom_array [2**PRACTICAL_WIDTH-1:0];
wire [PRACTICAL_WIDTH-1:0] practA = A[PRACTICAL_WIDTH-1:0];

initial begin
    $display("Loading rom.");
    $readmemh("program.mem", rom_array);
end

always_comb begin
    // output is asynchronous
    RD = {rom_array[practA], rom_array[practA+1], rom_array[practA+2], rom_array[practA+3]};
end

endmodule
