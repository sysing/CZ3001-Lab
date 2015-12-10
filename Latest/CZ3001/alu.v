`include "define.v"// defines DSIZE, ADD, SUB etc


module alu(
   a,   //1st operand
   b,   //2nd operand
   op,   //3-bit operation
	zero, //new
   out   //output
   );


   
   input [`DSIZE-1:0] a, b;
   input [2:0] op;
	output zero;
   output [`DSIZE-1:0] out;
   

	reg [`DSIZE-1:0] out; 
      
always @(a or b or op )
begin
   case(op)
       `ADD: out = a+b; //ADDI gets to convert the aluop into 'ADD'
       `SUB: out = a - b;
       `AND: out = a & b;
       `XOR:  out = a^b;
       `SLL: out = a << b;
       `SRL: out = a >> b;
       `COM: out = a<=b;
       `MUL: out = a*b;
       default: out = 1'b0; //To prevent latches, unknown opcodes are meant to be no execution.
   endcase
end
assign zero = (out == 0) ? 1'b1:1'b0;
endmodule
   
       
