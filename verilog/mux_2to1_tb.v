module testbench_mux_2to1;

    // Inputs
    reg a, b, sel;
    
    // Output
    wire out;
    
    // Instantiate the DUT (Device Under Test)
    mux_2to1 uut (
        .a(a),
        .b(b),
        .sel(sel),
        .out(out)
    );
    
    // Stimulus
    initial begin
        // Test case 1: sel = 0, a = 1, b = 0
        sel = 0;
        a = 1;
        b = 0;
        #10; // Wait for some time for output stabilization
        if (out !== a) begin
            $display("Test case 1 failed: Expected out = %b, Actual out = %b", a, out);
        end else begin
            $display("Test case 1 passed");
        end
        
        // Test case 2: sel = 1, a = 1, b = 0
        sel = 1;
        a = 1;
        b = 0;
        #10; // Wait for some time for output stabilization
        if (out !== b) begin
            $display("Test case 2 failed: Expected out = %b, Actual out = %b", b, out);
        end else begin
            $display("Test case 2 passed");
        end
        
        // Add more test cases as needed
        
        // End simulation
        $finish;
    end

endmodule

