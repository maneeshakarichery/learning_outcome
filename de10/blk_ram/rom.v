module rom (
    input [1:0] key,
    output wire [3:0] led,
    input clk_50
);

    reg [1:0] key_reg;
    reg [3:0] address = 0;
    wire [3:0] data;
	 

    always @(posedge clk_50) begin
        key_reg <= key;

        if (key_reg[0] & !key_reg[0])
            address <= address + 1;

     
    end

    // You need to implement logic to read/write data from/to your block RAM here.

    // Placeholder assignment for led
    assign led[3:0] = data;

endmodule