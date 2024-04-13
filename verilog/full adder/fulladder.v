module full_adder_behavioural (
    input a,
    input b,
    input carry_in,
    output sum_output,
    output carry_out
);


reg sum_output;
reg carry_out;

always @(*) begin

    sum_output = a ^ b ^ carry_in;

    carry_out = (a & b) | (carry_in & (a ^ b));
end

endmodule

