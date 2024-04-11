module top_module (
    input clk,
    input reset,
    output [3:0] q);
    reg [3:0] counter;
 always @(posedge clk) begin
        if (reset) begin
            counter <= 4'b0001;  // Reset counter to 0
            q <= 4'b0001;        // Reset output to 0
        end else begin
            if (counter == 4'b1011) begin
                counter <= 4'b0001;  // Reset counter to 0
                q <= 4'b0001;        // Reset output to 0
            end else begin
                counter <= counter + 1; // Increment counter
                q <= counter;           // Update output
            end
        end
 end

endmodule
