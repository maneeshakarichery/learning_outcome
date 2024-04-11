module testbenc ;
reg A,B,C,D,E,F;
wire Y;
gate DUT (A,B,C,D,E,F,Y);



initial
 $monitor ($time, " A=%b ,B=%b, C=%b , D=%b, E=%b,F=%b,Y=%b",A,B,C,D,E,F,Y);
end
endmodule
