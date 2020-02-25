module display_decoder(
    input  wire clk,
   input wire a,
 input wire b,
input wire c,
input wire d,
output wire A,//1-bit variable register // a, b, c, d, e, f, g are the final outputs.
    output wire B,
    output wire C,
    output wire D,
  
    
);

 always @(posedge clk) begin
  A=a;
B=b;
C=c;
D=d;
end

endmodule