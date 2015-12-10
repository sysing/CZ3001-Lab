`include "define.v"


module PC1(
       clk,
		 rst,       
		 nPC,		 
		 currPC);
		 
		  
		 input clk,rst;		 
		 input [`ISIZE - 1:0]nPC;		 //instruction address is 16 bit as it can address more memory locations
		 output reg [`ISIZE - 1:0]currPC;
		 
		 
		 
	always @( posedge clk)
	begin
	if (rst) 
		begin
		currPC <= 16'h0000;
		end 
	else 
		begin
		currPC <= nPC;
		end

	end
endmodule	
