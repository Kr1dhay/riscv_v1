module regFile_2 #(
    parameter ADDRESS_WIDTH = 5,
              DATA_WIDTH = 32
)(
    input logic clk,
    input logic [ADDRESS_WIDTH-1:0] ad1,
    input logic [ADDRESS_WIDTH-1:0] ad2,
    input logic [ADDRESS_WIDTH-1:0] ad3,
    input logic we3,
    input logic [DATA_WIDTH-1:0] wd3,
    output logic [DATA_WIDTH-1:0] rd1,
    output logic [DATA_WIDTH-1:0] rd2,
    output logic a0
);

logic [DATA_WIDTH-1:0] rom_array [2**ADDRESS_WIDTH-1:0];


/* initial begin
    $readmemh("sinerom.mem", rom_array);
end; */

always_ff @(posedge clk)
begin
    rd1 <= rom_array[ad1];
    rd2 <= rom_array[ad2];
    
end
    
endmodule
