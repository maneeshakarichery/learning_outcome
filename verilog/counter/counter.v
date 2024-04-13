module counter (in,latch,dec,clock,zero);


input [3:0] in;
input latch,dec,clock;
output zero;
reg [3:0] value ;

always @(posedge  clock)
begin
	if (latch )
		begin
			value <= in;
		end
	else if (dec &&( value != 0))
		begin
			value <= value-1;
		end
end

assign zero = (value == 0);
endmodule
