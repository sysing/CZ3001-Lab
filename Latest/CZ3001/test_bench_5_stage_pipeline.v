`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   22:34:17 11/10/2015
// Design Name:   pipelined_regfile_5stage
// Module Name:   D:/Dropbox/CZ3001 Project/Samuel/Project596/test_bench_5_stage_pipeline.v
// Project Name:  Project596
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: pipelined_regfile_5stage
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test_bench_5_stage_pipeline;

	// Inputs
	reg clk;
	reg rst;
	reg [2:0] fileid;

	// Outputs
	wire [15:0] PCOUT;
	wire [15:0] INST;
	wire [15:0] rdata1;
	wire [15:0] rdata2;
	wire [15:0] rdata2_ID_EXE;
	wire [15:0] imm_in;
	wire alusrc;
	wire [2:0] aluop;
	wire zero;
	wire branch_out_ID_EXE;
	wire RegDst;
	wire [3:0] waddr_out_MEM_WB;
	wire wen_out_MEM_WB;
	wire memtoReg_out_MEM_WB;
	wire [3:0] wAddrMux;
	wire [15:0] jalMux;
	wire [15:0] wdata_WB;
	wire [15:0] readData_DM;

	// Instantiate the Unit Under Test (UUT)
	pipelined_regfile_5stage uut (
		.clk(clk), 
		.rst(rst), 
		.fileid(fileid), 
		.PCOUT(PCOUT), 
		.INST(INST), 
		.rdata1(rdata1), 
		.rdata2(rdata2), 
		.rdata2_ID_EXE(rdata2_ID_EXE), 
		.imm_in(imm_in), 
		.alusrc(alusrc), 
		.aluop(aluop), 
		.zero(zero), 
		.branch_out_ID_EXE(branch_out_ID_EXE), 
		.RegDst(RegDst), 
		.waddr_out_MEM_WB(waddr_out_MEM_WB), 
		.wen_out_MEM_WB(wen_out_MEM_WB), 
		.memtoReg_out_MEM_WB(memtoReg_out_MEM_WB), 
		.wAddrMux(wAddrMux), 
		.jalMux(jalMux), 
		.wdata_WB(wdata_WB), 
		.readData_DM(readData_DM)
	);

	always #15 clk = ~clk;

	initial begin
		// Initialize Inputs
		clk = 0;
		rst = 0;
		fileid = 2;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		#25 rst = 1; //Clock resets at every 25ns
		#25 rst = 0;
	end
      
endmodule

