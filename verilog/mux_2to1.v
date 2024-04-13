module mux_21 (
	input a,b,sel, output out );
reg out;
always @(*)
begin

	if (sel ==0)
	begin 

		out =  a;
	end
	else
	begin
		out =b;

	end
end
endmodule

