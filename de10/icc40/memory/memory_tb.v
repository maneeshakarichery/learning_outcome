
`timescale 1 ns / 10 ps

// Define our testbench
module memory_tb();

    // Internal signals
    wire    [7:0]  r_data;
    

    // Storage elements (set initial values to 0)
    reg             clk = 0;
    reg             w_en = 0;
    reg             r_en = 0;
    reg     [3:0]   w_addr;
    reg     [3:0]   r_addr;
    reg     [7:0]   w_data;
    integer         i;

    // Simulation time: 10000 * 1 ns = 10 us
    localparam DURATION = 10000;
    
    // Generate clock signal: 1 / ((2 * 41.67) * 1 ns) = 11,999,040.08 MHz
    always begin
        #41.67
        clk = ~clk;
    end
    
    // Instantiate the unit under test (UUT)
    memory #(.INIT_FILE("mem_init.txt")) uut (
        .clk(clk),
        .w_en(w_en),
        .r_en(r_en),
        .w_addr(w_addr),
        .r_addr(r_addr),
        .w_data(w_data),
        .r_data(r_data)
    );
    
    // Run test: write to location and read value back
    initial begin
    
        // Test 1: read initial values
        for (i = 0; i < 16; i = i + 1) begin
            #(2 * 41.67)
            r_addr = i;
            r_en = 1;
            #(2 * 41.67)
            r_addr = 0;
            r_en = 0;
        end
        
        // Test 2: Write to address 0x0f and read it back
        #(2 * 41.67)
        w_addr = 'h0f;
        w_data = 'hA5;
        w_en = 1;
        #(2 * 41.67)
        w_addr = 0;
        w_data = 0;
        w_en = 0;
        r_addr = 'h0f;
        r_en = 1;
        #(2 * 41.67)
        r_addr = 0;
        r_en = 0;
        
        // Test 3: Read and write at same time
        #(2 * 41.67)
        w_addr = 'h0a;
        w_data = 'hef;
        w_en = 1;
        r_addr = 'h0a;
        r_en = 1;
        #(2 * 41.67)
        w_addr = 0;
        w_data = 0;
        w_en = 0;
        r_addr = 0;
        r_en = 0;
    end
    
    // Run simulation (output to .vcd file)
    initial begin
    
        // Create simulation output file 
        $dumpfile("memory_tb.vcd");
        $dumpvars(0, memory_tb);
        
        // Wait for given amount of time for simulation to complete
        #(DURATION)
        
        // Notify and end simulation
        $display("Finished!");
        $finish;
    end
    
endmodule
