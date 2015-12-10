// Register File module
`include"define.v"
`timescale 1ns / 1ps

module regfile (
	clk,
	rst,
	wen,
	raddr1, 
	raddr2, 
	waddr, 
	wdata,

	rdata1,
	rdata2
	);

    
	input clk;
	input rst;
	input wen;
	input [`ASIZE-1:0] raddr1; 
	input [`ASIZE-1:0] raddr2; 
	input [`ASIZE-1:0] waddr; 
	input [`DSIZE-1:0] wdata;

	output [`DSIZE-1:0] rdata1;
	output [`DSIZE-1:0] rdata2;



	reg [`DSIZE-1:0] regdata [0:`NREG-1];
	
integer i;
	always@(posedge clk)
		begin
			if(rst)
				begin
						for (i=0; i<`NREG; i=i+1)
						//hardcoding few values into register file for initialization
						regdata[i] <=0; //R0 = 0 and any unoverwritten registers.
					
						//Specific Hardcoded registers (Would be reset once 'rst' clocks in 1)
						regdata[1] <=5; //R1 = 5
						regdata[2] <=1; //R2 = 1
						regdata[3] <=0; //R3 = 0
						regdata[4] <=36; //R4 = 36
						regdata[8] <=4; //R8 = 4
						regdata[14] <= 8; //R14 = 8
						regdata[15] <= 1; //R15 = 1
				end else
				regdata[waddr] <= (wen == 1) ? wdata : regdata[waddr];//when wen=1, then write wdata to LHS or mainintain the same data
		end
	
	assign rdata1 = ((wen) && (waddr == raddr1)) ? wdata : regdata[raddr1];//Here dataforwarding is done
	//when both wen=1 and waddr=raddr1, then rdata1=wdata (this enables us to get the wdata in the same clock cycle-more useful in pipeling)
	assign rdata2 = ((wen) && (waddr == raddr2)) ? wdata : regdata[raddr2];

endmodule 
