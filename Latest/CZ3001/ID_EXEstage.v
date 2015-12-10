`include "define.v"

module ID_EXE_stage (
	
	input  clk,  rst, 
	input [`DSIZE-1:0] rdata1_in_ID_EXE,
	input [`DSIZE-1:0] rdata2_in_ID_EXE,
	input [`DSIZE-1:0] wdata_in,
	input [`ASIZE-1:0] waddr_in_ID_EXE,
	input [`DSIZE-1:0] imm_in,
	input [`ISIZE-1:0] nPC_in,
	input [2:0] opcode_in,
	input wen,
	input branch,
	input memWrite,
	input memRead,
	input memtoReg,
	input jal, //Part 2
	output reg [`DSIZE-1:0] rdata1_out_ID_EXE,
	output reg [`DSIZE-1:0] rdata2_out_ID_EXE,
	output reg [`DSIZE-1:0] wdata_out_ID_EXE,
	output reg [`DSIZE-1:0] imm_out,
	output reg [`ISIZE - 1:0]nPC_out,
	output reg [2:0] opcode_out,
	output reg[`ASIZE-1:0]waddr_out_ID_EXE,
	output reg wen_out_ID_EXE,
	output reg branch_out_ID_EXE,
	output reg memWrite_out_ID_EXE,
	output reg memRead_out_ID_EXE,
	output reg memtoReg_out_ID_EXE,
	output reg jal_ID_EXE //Part 2

	
);



//here we have not taken write enable (wen) as it is always 1 for R and I type instructions.
//ID_EXE register to save the values.



always @ (posedge clk) begin
	if(rst)
	begin
		rdata1_out_ID_EXE <= 0;
		rdata2_out_ID_EXE <= 0;
		wdata_out_ID_EXE <=0;
		imm_out<=0;
		nPC_out<=0;
		opcode_out<=0;
		waddr_out_ID_EXE <= 0;
		wen_out_ID_EXE<=0;
		branch_out_ID_EXE<=0;
		memWrite_out_ID_EXE<=0;
		memRead_out_ID_EXE <= 0;
		memtoReg_out_ID_EXE<=0;
		jal_ID_EXE<=0; // Part 2.
	end
   else
	begin
		rdata1_out_ID_EXE <= rdata1_in_ID_EXE;
		rdata2_out_ID_EXE <= rdata2_in_ID_EXE;
		wdata_out_ID_EXE <= wdata_in;
		imm_out<= imm_in;
		nPC_out<=nPC_in;
		opcode_out<=opcode_in;
		waddr_out_ID_EXE <= waddr_in_ID_EXE;
		wen_out_ID_EXE<=wen;
		branch_out_ID_EXE<=branch;
		memWrite_out_ID_EXE<=memWrite;
		memRead_out_ID_EXE <= memRead;
		memtoReg_out_ID_EXE<=memtoReg;
		jal_ID_EXE<=jal; // Part 2.
	end
 
end
endmodule


