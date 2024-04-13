module clk_gating (
    input logic clk,  // Clock input
    input logic en,   // Enable input
    output logic en_latch,  // Latched enable
    output logic clk_gated  // Gated clock output
);

always_comb begin
    if (!clk)  // Negation of clk
        en_latch = en;
end

assign clk_gated = en_latch && clk;

endmodule

