module synchronizer (
    input           clk_slow,    
    input           rst_slow,     
    input   wire    [DATA_WIDTH-1:0] data_in, 
    output  reg     data_out,    
    input           clk_fast     
);


parameter SYNC_DEPTH = 2; 
parameter DATA_WIDTH = 1; 


reg [SYNC_DEPTH-1:0] sync_reg;
reg                 sync_out_reg;


always @(posedge clk_slow or posedge rst_slow) begin
    if (rst_slow) begin
        sync_reg <= {SYNC_DEPTH{1'b0}};
        sync_out_reg <= 1'b0;
    end else begin
        sync_reg <= {sync_reg[SYNC_DEPTH-2:0], data_in};
        sync_out_reg <= sync_reg[SYNC_DEPTH-1];
    end
end


always @(posedge clk_fast) begin
    data_out <= sync_out_reg;
end

endmodule

