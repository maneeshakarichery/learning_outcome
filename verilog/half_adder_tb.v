`include "half_adder.v"

module half_adder_tb;
    reg a, b;
    wire carry, sum;
    half_adder add1(a, b, carry, sum);

    initial 
    begin
        $dumpfile("half_adder.vcd");
        $dumpvars(0, half_adder_tb);

        a = 0;
        b = 0;
        #10; // Adding delay between assignments

        a = 0;
        b = 1;
        #10;

        a = 1;
        b = 0;
        #10;

        a = 1;
        b = 1;
        #10;

        $finish; // Terminate simulation
    end
endmodule

