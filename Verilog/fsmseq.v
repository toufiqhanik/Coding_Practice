//###################################
//solving https://hdlbits.01xz.net/wiki/Exams/review2015_fsmseq
//Anik
//email: toufiqhanik@umbc.edu
//its for practice purposes to stay uptodate
//use on your own risk

//1. Build a four-bit shift register that also acts as a down counter. 
/*Build a finite-state machine that searches for the sequence 1101 in an input bit stream. 
When the sequence is found, it should set start_shifting to 1, forever, until reset. 
Getting stuck in the final state is intended to model going to other states in a bigger FSM
 that is not yet implemented. We will be extending this FSM in the next few exercises.*/
//Note: Start from MSB
//####################################

module fsmseq (
    input clk,
    input reset,      // Synchronous reset
    input data,
    output start_shifting);
    
    localparam s0 = 3'd0, s1 = 3'd1, s2 = 3'd2, s3 = 3'd3, s4 = 3'd04, s5 = 3'd5;
    
    reg [2:0] state;
    
    always @ (posedge clk) 
        begin
            if (reset) 
                begin
                	start_shifting <=1'd0;
                    state <= 3'd0;
                    
                end
            else begin
                case (state) //check 1101
                    s0: 
                        begin
                            if (data ==1'd1) state <=s1; //1
                            else state <= s0; //0
                    	end
                    
                    s1: 
                        begin
                            if (data ==1'd1) state <=s2; //11
                            else state <= s0; //10
                    	end
                    
                    s2: 
                        begin
                            if (data ==1'd0) state <=s3; //110
                            else state <= s2; //11
                    	end
                    
                    s3: 
                        begin
                            if (data ==1'd1)
                                begin
                                    state <=s4; //1101
                                    start_shifting <=1'd1;
                                end
                            else state <= s0; //00
                    	end
                    
                    s4: 
                        begin
                           start_shifting <=1'd1;
                            state <= s4;
                    	end
                    
                    default: state <= s0;
                endcase
                 
            end
        end

endmodule
