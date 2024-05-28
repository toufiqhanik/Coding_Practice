//###################################
//solving https://hdlbits.01xz.net/wiki/Exams/review2015_count1k
//Anik
//email: toufiqhanik@umbc.edu
//its for practice purposes to stay uptodate
//use on your own risk

//1. Build a counter that counts from 0 to 999, inclusive, with a period of 1000 cycles. The reset input is synchronous, and should reset the counter to 0.*/
//Note: 
//####################################

module count1k (
    input clk,
    input reset,
    output reg [9:0] q);
    
    always @ (posedge clk)
        begin
            if (reset) q <= 10'd0;
            else begin
                if ( q == 10'd 999) q <= 10'd0;
                else q <= q + 10'd1;
            end
        end

endmodule