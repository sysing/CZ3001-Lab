`timescale 1ns / 1ps
`include "define.v"
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:52:18 11/02/2015 
// Design Name: 
// Module Name:    data_memory 
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


module data_Mem( clk, rst, memWrite, memRead, addr, data_in, DMfileid, data_out);//This memory can be used as instuction as well as data memory

  input clk;
  input rst;
  input memWrite;
  input memRead;
  input [`ISIZE-1:0] addr;      // address input is 16 bit wide 
  input [`DSIZE-1:0] data_in;          // data input
  input [2:0] DMfileid;//file id selects which amoung the files given below (0-7 for different D-mem inputs)
  output [`DSIZE-1:0] data_out;    // data output

  reg [`DSIZE-1:0] memory [0:4095]; //size of the data memory = 64K = [16 words x 4096 blocks ] x 16 bit
  reg [8*`MAX_LINE_LENGTH:0] line; /* Line of text read from file */

integer fin, i, c, r;
reg [`ISIZE-1:0] t_addr;
reg [`DSIZE-1:0] t_data;


assign data_out = memRead ? memory[addr] : 16'b0;//Reading from the memory. Do note that there is a clock cycle delay for reading from the memory just to indicate that memories are slower.
always @(posedge clk)
  begin
    if(rst)
      begin
        
        case(DMfileid)
            0: fin = $fopen("dmem_test0.txt","r"); //Part 1
				1: fin = $fopen("dmem_test1.txt","r"); //Part 2
            2: fin = $fopen("dmem_test2.txt","r"); //Part 3(A)
				3: fin = $fopen("dmem_test3.txt","r"); //Part 3(B)
            4: fin = $fopen("dmem_test4.txt","r"); //Unused
				5: fin = $fopen("dmem_test5.txt","r"); //Unused
            6: fin = $fopen("dmem_test6.txt","r"); //Unused
            7: fin = $fopen("dmem_test7.txt","r"); //Unused
        endcase
        $write("Opening Fileid %d\n", DMfileid);

        while(!$feof(fin)) 
          begin
            c = $fgetc(fin);
            // check for comment
            if (c == "/" | c == "#" | c == "%")
              r = $fgets(line, fin);
            else
              begin
                // Push the character back to the file then read the next time
                r = $ungetc(c, fin);
                r = $fscanf(fin, "%h %h",t_addr, t_data);
                memory[t_addr]=t_data;
              end
          end
          $fclose(fin);
      end
    else
      begin
        
        if (memWrite)//memWrite is high
          begin            
            memory[addr] <= data_in;
          end
      end
  end

endmodule
