`include "define.v"

module pipelined_regfile_5stage(
	clk, 
	rst, 
	fileid,
	PCOUT, 
	INST, 
	rdata1, 
	rdata2, 
	rdata2_ID_EXE, 
	imm_in,
	alusrc,
	aluop,
	zero,
	branch_out_ID_EXE, //branch	
	RegDst, //RegDst for Mux
	waddr_out_MEM_WB, 
	wen_out_MEM_WB,
	memtoReg_out_MEM_WB,
	wAddrMux,
	jalMux,
	wdata_WB,
	readData_DM
	);
	
	input clk;															
	input	rst;
	input [2:0] fileid; //Files in the imem_testX.txt (memory.v) & dmem_testX.txt (data_memory.v)
	output [`ISIZE-1:0] PCOUT;
	output [`DSIZE-1:0] INST;
	output [`DSIZE-1:0] rdata1,rdata2,rdata2_ID_EXE;
	output [`DSIZE-1:0] imm_in;
	output alusrc;
	output [2:0] aluop;
	output zero;
	output branch_out_ID_EXE;
	output RegDst;
	output [`ASIZE-1:0] waddr_out_MEM_WB; //??	
	output wen_out_MEM_WB;
	output memtoReg_out_MEM_WB;
	output [`ASIZE-1:0] wAddrMux; //Part 2
	output [`DSIZE-1:0] wdata_WB; //Part 2
	output [`DSIZE-1:0] jalMux; //Part 2
	output [`DSIZE-1:0] readData_DM; //???
							
//Program counter
wire [`ISIZE-1:0]PCIN, nPC;
wire [`DSIZE-1:0] imm_in, rdata2;
wire wen_ID_EXE;
wire [`ISIZE-1:0] res;//adder output
wire PCSrc, branch,memWrite, memRead, memtoReg;

wire [`DSIZE-1:0]rdata1_out_ID_EXE, rdata2_out_ID_EXE, wdata_out_ID_EXE;

wire [`DSIZE-1:0] imm_out;
wire [`ISIZE-1:0] nPC_out;
wire [2:0] opcode_out;
wire [`ASIZE-1:0]waddr_out_ID_EXE;
wire wen_out_ID_EXE;
wire memWrite_out_ID_EXE,memRead_out_ID_EXE, memtoReg_out_ID_EXE;

//Part 2 specific
wire jal_ID_EXE;
wire [`ISIZE-1:0]jump_address; // For JUMP MUX
wire [`ISIZE-1:0]jr_address;   // For JR MUX
wire [`ISIZE-1:0] PC_OUT_EXE_MEM; //???

//ALU 
wire [`DSIZE-1:0] aluout;

//EXE_MEM
wire [`DSIZE-1:0]aluResult_out_EXE_MEM,wdata_out_EXE_MEM;
wire [`ASIZE-1:0]waddr_out_EXE_MEM;
wire [`ISIZE-1:0] PC_OUT_MEM_WB; //Part 2
wire wen_out_EXE_MEM,memWrite_out_EXE_MEM,memRead_out_EXE_MEM,memtoReg_out_EXE_MEM;

wire jal_EXE_MEM, jal_MEM_WB; //Part 2


//MEM_WB
wire [`DSIZE-1:0]alu_out_MEM_WB, readData_DM, readData_DM_out_MEM_WB;
wire [`DSIZE-1:0] writeDataOut;

assign PCIN = PCOUT + 16'b1; 
assign res = nPC_out + imm_out; 
assign PCSrc = zero & branch_out_ID_EXE; //PCSrc determined by zero or branch value
assign imm_in={{12{INST[3]}},INST[3:0]};

//Mux 
assign rdata2_ID_EXE = alusrc ? imm_in : rdata2;
//RAddr2's input depends on the mux of rt/imm and rd
wire [`ASIZE-1:0]raddr2 = RegDst ? INST[11:8] : INST[3:0];

//WData's input depends on the mux of ReadData in DM and ALU output
assign wdata_WB = memtoReg_out_MEM_WB ? alu_out_MEM_WB : readData_DM_out_MEM_WB;

assign nPC = PCSrc ? (res-1'b1) : PCIN;

// mux used to decided whether to take in PCIN+INST or PC_Address
assign jump_address = jump ? {PCIN[15:12],INST[11:0]}: nPC; 

// mux used to decided whether to take in rdata1 or jump_address
assign jr_address = jr ? rdata2:jump_address;

//program counter
PC1 pc(
	.clk(clk),
	.rst(rst),
	.nPC(jr_address),
	.currPC(PCOUT)
	);
	
//IM (1 cycle delay)
memory im(
	.clk(clk), 
	.rst(rst), 
	.wen(1'b0), 
	.addr(PCOUT), 
	.data_in(16'b0), 
	.IMfileid(fileid),
	.data_out(INST)
	);

//Control
control C0(
	.inst(INST[15:12]),
	.wen(wen),
	.RegDst(RegDst),
	.memWrite(memWrite),
	.memRead(memRead),
	.memtoReg(memtoReg),
	.branch(branch),
	.alusrc(alusrc), 
	.aluop(aluop),
	.jump(jump), //Part 2
	.jal(jal), //Part 2
	.jr(jr) //Part 2
	);
	
//Register File
regfile  RF0(
	.clk(clk), 
	.rst(rst), 
	.wen(wen_out_MEM_WB), 
	.raddr1(INST[7:4]), 
	.raddr2(raddr2),
	.waddr(wAddrMux),
	.wdata(wdata_WB),
	.rdata1(rdata1), 
	.rdata2(rdata2)
	);
	
//ID_EXE_stage
ID_EXE_stage PIPE1(
	.clk(clk), 
	.rst(rst), 
	.rdata1_in_ID_EXE(rdata1),
	.rdata2_in_ID_EXE(rdata2_ID_EXE),
	.wdata_in(rdata2),
	.waddr_in_ID_EXE(INST[11:8]),
	.imm_in(imm_in),
	.nPC_in(PCIN),
	.opcode_in(aluop),
	.wen(wen),
	.branch(branch),
	.jal(jal), //Part 2
	.memWrite(memWrite),
	.memRead(memRead),
	.memtoReg(memtoReg),
	.rdata1_out_ID_EXE(rdata1_out_ID_EXE),
	.rdata2_out_ID_EXE(rdata2_out_ID_EXE),
	.wdata_out_ID_EXE(wdata_out_ID_EXE),
	.imm_out(imm_out),
	.nPC_out(nPC_out),
	.opcode_out(opcode_out),
	.waddr_out_ID_EXE(waddr_out_ID_EXE),
	.wen_out_ID_EXE(wen_out_ID_EXE),
	.branch_out_ID_EXE(branch_out_ID_EXE),
	.memWrite_out_ID_EXE(memWrite_out_ID_EXE),
	.memRead_out_ID_EXE(memRead_out_ID_EXE),
	.memtoReg_out_ID_EXE(memtoReg_out_ID_EXE),
	.jal_ID_EXE(jal_ID_EXE) //Part 2
	);

//ALU 
alu ALU0(
	.a(rdata1_out_ID_EXE), 
	.b(rdata2_out_ID_EXE), 
	.op(opcode_out), 
	.out(aluout),
	.zero(zero)
	);
	
//PIPE2 - EXE_Mem
EXE_MEM_stage PIPE2(
	.clk(clk), 
	.rst(rst),
	.aluResult_in_EXE_MEM(aluout),
	.wdata_in_EXE_MEM(wdata_out_ID_EXE),
	.PC_OUT_ID_EXE(nPC_out), //Part 2
	.waddr_in(waddr_out_ID_EXE), 
	.wen(wen_out_ID_EXE),
	.memWrite(memWrite_out_ID_EXE),
	.memRead(memRead_out_ID_EXE),
	.memtoReg(memtoReg_out_ID_EXE),
	.jal_ID_EXE(jal_ID_EXE), //Part 2
	.aluResult_out_EXE_MEM(aluResult_out_EXE_MEM),
	.wdata_out_EXE_MEM(wdata_out_EXE_MEM),
	.waddr_out_EXE_MEM(waddr_out_EXE_MEM),
	.PC_OUT_EXE_MEM(PC_OUT_EXE_MEM), //Part 2
	.wen_out_EXE_MEM(wen_out_EXE_MEM),
	.memWrite_out_EXE_MEM(memWrite_out_EXE_MEM),
	.memRead_out_EXE_MEM(memRead_out_EXE_MEM),
	.memtoReg_out_EXE_MEM(memtoReg_out_EXE_MEM),
	.jal_EXE_MEM(jal_EXE_MEM) //Part 2
    );
	 
//DM
data_Mem data_memory(
	.clk(clk), .rst(rst),
	.memWrite(memWrite_out_EXE_MEM), 
	.memRead(memRead_out_EXE_MEM), 
	.addr(aluResult_out_EXE_MEM), 
	.data_in(wdata_out_EXE_MEM), 
	.DMfileid(fileid),
	.data_out(readData_DM) 
	);
	
//PIPE3 - MEM_WB_Stage

MEM_WB_stage PIPE3(
	.clk(clk), .rst(rst),
	.readData_DM_in_MEM_WB(readData_DM),
	.alu_in_MEM_WB(aluResult_out_EXE_MEM),
	.waddr_in(waddr_out_EXE_MEM), 
	.wen(wen_out_EXE_MEM),
	.memtoReg(memtoReg_out_EXE_MEM),
	.jal_EXE_MEM(jal_EXE_MEM), // Part 2.
	.PC_OUT_EXE_MEM(PC_OUT_EXE_MEM), // Part 2.
	.readData_DM_out_MEM_WB(readData_DM_out_MEM_WB),
	.alu_out_MEM_WB(alu_out_MEM_WB),
	.waddr_out_MEM_WB(waddr_out_MEM_WB), 
	.wen_out_MEM_WB(wen_out_MEM_WB),
	.memtoReg_out_MEM_WB(memtoReg_out_MEM_WB),
	.jal_MEM_WB(jal_MEM_WB), // Part 2.
	.PC_OUT_MEM_WB(PC_OUT_MEM_WB) // Part 2.
	);

//MUX for write (data) back
assign writeDataOut = memtoReg_out_MEM_WB ? wdata_WB : readData_DM;

//MUX for jal
assign jalMux = jal_MEM_WB ? PC_OUT_MEM_WB : writeDataOut;

//MUX for wAddr 
assign wAddrMux = jal_MEM_WB? `ASIZE'd15: waddr_out_MEM_WB; 
endmodule


