`timescale 1ns / 1ps
`include "define.v"
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:48:24 11/02/2015 
// Design Name: 
// Module Name:    EXE_MEM_stage 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module EXE_MEM_stage(
	input  clk,  rst,
	input [`DSIZE-1:0] aluResult_in_EXE_MEM,
	input [`DSIZE-1:0] wdata_in_EXE_MEM,
	input [`ISIZE-1:0] PC_OUT_ID_EXE, // Part 2 Signal - PC_OUT_ID_EXE
	input [`ASIZE-1:0] waddr_in,
	input wen,
	input memWrite,
	input memRead,
	input memtoReg,
	input jal_ID_EXE, // Part 2 Signal - jal_ID_EXE
	output reg [`DSIZE-1:0] aluResult_out_EXE_MEM,
	output reg [`DSIZE-1:0] wdata_out_EXE_MEM,
	output reg [`ISIZE-1:0] PC_OUT_EXE_MEM, // Part 2 Signal - PC_OUT_EXE_MEM
	output reg [`ASIZE-1:0] waddr_out_EXE_MEM,
	output reg wen_out_EXE_MEM,
	output reg memWrite_out_EXE_MEM,
	output reg memRead_out_EXE_MEM,
	output reg memtoReg_out_EXE_MEM,
	output reg jal_EXE_MEM // Part 2 Signal - jal_EXE_MEM
    );

always @ (posedge clk) begin
	if(rst)
	begin
		aluResult_out_EXE_MEM <= 0;
		wdata_out_EXE_MEM <=0;
		waddr_out_EXE_MEM <= 0;
		wen_out_EXE_MEM <= 0;
		memWrite_out_EXE_MEM <= 0;
		memRead_out_EXE_MEM <= 0;
		memtoReg_out_EXE_MEM <= 0;
		jal_EXE_MEM <= 0; // Part 2 Signal - jal_EXE_MEM
		PC_OUT_EXE_MEM <= 0; // Part 2 Signal - PC_OUT_EXE_MEM
	end
   else
	begin
		aluResult_out_EXE_MEM <= aluResult_in_EXE_MEM;
		wdata_out_EXE_MEM <= wdata_in_EXE_MEM;
		waddr_out_EXE_MEM <= waddr_in;
		wen_out_EXE_MEM <= wen;
		memWrite_out_EXE_MEM <= memWrite;
		memRead_out_EXE_MEM <= memRead;
		memtoReg_out_EXE_MEM <= memtoReg;
		jal_EXE_MEM<=jal_ID_EXE; // Part 2 Signal - jal_EXE_MEM
		PC_OUT_EXE_MEM <= PC_OUT_ID_EXE; // Part 2 Signal - PC_OUT_EXE_MEM
	end
 
end
endmodule
