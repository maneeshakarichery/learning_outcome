module bcd_adder (a,b,c_in,sum,c_out);
input [3:0] a;
input [3:0] b;
input c_in;
output reg[3:0]  sum;
output carry;
output reg  c_out;


reg [3:0] sum_temp;

always @ (a,b,c_in)
	begin
		sum_temp = a+b+c_in;
		if (sum_temp > 9)
		begin
			sum = sum_temp+6;
			c_out = 1;
		end
		else
			c_out = 0;
			sum = sum_temp;


	end

endmodule
