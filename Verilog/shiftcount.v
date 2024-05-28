//###################################
//solving https://hdlbits.01xz.net/wiki/Exams/review2015_shiftcount
//Anik
//email: toufiqhanik@umbc.edu
//its for practice purposes to stay uptodate
//use on your own risk

//1. Build a four-bit shift register that also acts as a down counter. 
/*Data is shifted in most-significant-bit first when shift_ena is 1.
 The number currently in the shift register is decremented when count_ena is 1. 
 Since the full system doesn't ever use shift_ena and count_ena together, 
 it does not matter what your circuit does if both control inputs are 1 
 (This mainly means that it doesn't matter which case gets higher priority).*/
//Note: 
//####################################

module shiftcount (
    input clk,
    input shift_ena,
    input count_ena,
    input data,
    output reg [3:0] q);
    
    always @ (posedge clk) 
        begin
            if (shift_ena) q <= {q[2:0], data};
            else if (count_ena) q <= q - 4'd1;
            else q <=q;
        end

endmodule