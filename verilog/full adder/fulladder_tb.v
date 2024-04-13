`timescale 1ns / 1ps
`include "fulladder.v"

module fulladder_tb;


reg a, b, carry_in;

wire sum_output, carry_out;

 fulladder fa(a,b,carry_in);



initial begin
    $dumpfile("tb_full_adder_behavioural.vcd");
    $dumpvars(0, fulladder_tb);


    a = 0; b = 0; carry_in = 0;
    #10 a = 0; b = 0; carry_in = 1;
    #10 a = 0; b = 1; carry_in = 0;
    #10 a = 0; b = 1; carry_in = 1;
    #10 a = 1; b = 0; carry_in = 0;
    #10 a = 1; b = 0; carry_in = 1;
    #10 a = 1; b = 1; carry_in = 0;
    #10 a = 1; b = 1; carry_in = 1;
    #10 $finish;
end

endmodule

