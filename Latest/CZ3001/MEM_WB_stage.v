`timescale 1ns / 1ps
`include "define.v"
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:54:29 11/02/2015 
// Design Name: 
// Module Name:    MEM_WB_stage 
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
module MEM_WB_stage(
		input  clk,  rst, 
		input  [`DSIZE-1:0] readData_DM_in_MEM_WB,
		input  [`DSIZE-1:0] alu_in_MEM_WB,
		input  [`ASIZE-1:0] waddr_in, 
		input  wen,
		input  memtoReg,
		input jal_EXE_MEM, // Part 2.
		input [`ISIZE-1:0] PC_OUT_EXE_MEM, // Part 2.
		output reg [`DSIZE-1:0] readData_DM_out_MEM_WB,
		output reg [`DSIZE-1:0] alu_out_MEM_WB,
		output reg [`ASIZE-1:0] waddr_out_MEM_WB, 
		output reg wen_out_MEM_WB,
		output reg memtoReg_out_MEM_WB,
		output reg jal_MEM_WB, // Part 2.
		output reg [`ISIZE-1:0] PC_OUT_MEM_WB // Part 2.
    );

	always @ (posedge clk) begin
		if(rst)
		begin
			PC_OUT_MEM_WB <= 0; // Part 2.
			readData_DM_out_MEM_WB<=0;
			alu_out_MEM_WB <=0;
			waddr_out_MEM_WB <= 0;
			wen_out_MEM_WB <= 0;
			memtoReg_out_MEM_WB <= 0;
			jal_MEM_WB <= 0;   // Part 2.
		end
		else
		begin
			PC_OUT_MEM_WB <= PC_OUT_EXE_MEM; // Part 2.
			readData_DM_out_MEM_WB <= readData_DM_in_MEM_WB;
			alu_out_MEM_WB<=alu_in_MEM_WB;
			waddr_out_MEM_WB <= waddr_in;
			wen_out_MEM_WB<=wen;
			memtoReg_out_MEM_WB<=memtoReg;
			jal_MEM_WB <= jal_EXE_MEM;	 // Part 2.
		end
	 
	end
endmodule
