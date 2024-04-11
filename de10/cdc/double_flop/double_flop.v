module double_flop(
    input wire clk,
    input wire reset,
    input wire data_in,
    output wire data_out
);

reg flop1_out, flop2_out;

always @(posedge clk or posedge reset) begin
    if (reset) begin
        flop1_out <= 1'b0;
    end
    else begin
        flop1_out <= data_in;
    end
end

always @(posedge clk or posedge reset) begin
    if (reset) begin
        flop2_out <= 1'b0;
    end
    else begin
        flop2_out <= flop1_out;
    end
end

assign data_out = flop2_out;

endmodule
