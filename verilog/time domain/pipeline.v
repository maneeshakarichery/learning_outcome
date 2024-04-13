module multiply_add_pipeline (
    input  wire [7:0] a,
    input  wire [7:0] b,
    input  wire [7:0] c,
    input  wire [7:0] d,
    output reg  [15:0] result
);

reg [15:0] mult_result1, mult_result2;

always @(*) begin

    mult_result1 = a * b;
end

always @(*) begin

    mult_result2 = mult_result1 * c;
end

always @(*) begin

    result = mult_result2 + d;
end

endmodule

