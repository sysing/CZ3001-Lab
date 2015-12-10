//control unit for write enable and ALU control

`include "define.v"

module control(
  input [3:0] inst, 
  output reg wen,
  output reg RegDst,memWrite,memRead,memtoReg,
  output reg branch,
  output reg alusrc,
  output reg [2:0] aluop,
  output reg jump,jal,jr //Part 2 specific
  );
  
  always@(*)
  begin
	 //List of default values. (Applies if the following 'inst' does not have specific overwrites in property)
    wen=1;
    RegDst=0;
    memWrite=0;
    memRead=0;
    memtoReg=1;
    branch=0;
    alusrc=0;
	 //Part 2 specific
	 jump=0;
	 jal=0;
	 jr=0;
    
    case(inst)
      `ADD: 
			begin
				aluop=inst[2:0]; //aluop = 000 (ADD)
			end
       `SUB: 
			begin
				aluop=inst[2:0]; //aluop = 001 (SUB)
         end
       `AND: 
		   begin
				aluop=inst[2:0]; //aluop = 010 (AND)
         end
       `XOR: 
			begin
				aluop=inst[2:0]; //aluop = 011 (XOR)
			end
       `SLL: 
			begin
				alusrc=1;
            aluop=inst[2:0]; //aluop = 100 (SLL)
			end
       `SRL: 
			begin
				alusrc=1;
            aluop=inst[2:0]; //aluop = 101 (SRL)
			end
       `COM: 
			begin
				aluop=inst[2:0]; //aluop = 110 (COM)
			end
       `MUL: 
			begin
				aluop=inst[2:0]; //aluop = 111 (MUL)
			end
		 `LW: 
			begin
				memRead=1;
				memtoReg=0;
            alusrc=1;
            aluop=3'b000; //aluop = 000 (ADD)
			end
       `SW: 
			begin
				wen=0;
            RegDst=1;
            memWrite=1;
            alusrc=1;
            aluop=3'b000; //aluop = 000 (ADD)
			end
       `BEQ: 
			begin
				wen=0;  
				RegDst=1;
				branch=1;
				aluop=3'b001; //aluop = 001 (SUB)
			end
		//Part 2 specific
		`J: 
			begin
				wen=0;  
				jump=1;
				aluop=3'b000; //aluop = 000 (ADD) - Expected to jump forward (Towards another subroutine).
			end

		`JR: 
			begin
				wen=0;  
				jr=1;
				aluop=3'b001; //aluop = 001 (SUB) - Expected to jump backwards ('Return').
			end
			
		`JAL:
			begin
				jump=1;
				jal=1;
				aluop=3'b000; //aluop = 000 (ADD) - Expected to jump forward (Calls a function).
			end
		`ADDI:
			begin
				alusrc=1;
				aluop=3'b000; //aluop = 000 (ADD) - Difference between ADD & ADDI is just Register or Immediate value to add.			
			end			

			default: aluop=3'b111; //aluop = 111 - That will generate an alu output of 000 (No ALU execution)
    endcase
  end
  
endmodule
