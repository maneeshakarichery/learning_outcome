module top_module(
    input clk,
    input areset,  
    input load,
    input ena,
    input [3:0] data,
    output reg [3:0] q); 
   always @(posedge clk or posedge areset) begin
        if (areset) begin
            q <= 4'b0000; // Reset shift register to 0 asynchronously
        end else begin
            if (load) begin
                q = data; // Load data when load signal is asserted
            end else if (ena) begin
                // Shift right (q[3] becomes 0, q[0] is shifted out)
                q = {1'b0, q[3:1]};
            end
        end
    end
endmodul
