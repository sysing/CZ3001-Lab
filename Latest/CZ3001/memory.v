`include "define.v"

module memory( clk, rst, wen, addr, data_in, IMfileid, data_out);//This memory can be used as instruction as well as data memory

  input clk;
  input rst;
  input wen;
  input [`ISIZE-1:0] addr;      // address input is 16 bit wide 
  input [`DSIZE-1:0] data_in;          // data input
  input [2:0] IMfileid;//file id selects which amoung the files given below (0-7 for different inputs for imem)
  output [`DSIZE-1:0] data_out;    // data output

  reg [`DSIZE-1:0] memory [0:4095]; //size of the memory
  reg [8*`MAX_LINE_LENGTH:0] line; /* Line of text read from file */

integer fin, i, c, r;
reg [`ISIZE-1:0] t_addr;
reg [`DSIZE-1:0] t_data;

reg [`ISIZE-1:0] addr_r;

assign data_out = memory[addr_r];//Reading from the memory. Do note that there is a clock cycle delay for reading from the memory just to indicate that memories are slower.

  always @(posedge clk)
    begin
      if(rst)
        begin
			addr_r <=0;
			case(IMfileid)
				0: fin = $fopen("imem_test0.txt","r"); //Part 1
				1: fin = $fopen("imem_test1.txt","r"); //Part 2
				2: fin = $fopen("imem_test2.txt","r"); //Part 3(A)
				3: fin = $fopen("imem_test3.txt","r"); //Part 3(B)
				4: fin = $fopen("imem_test4.txt","r"); //Unused
				5: fin = $fopen("imem_test5.txt","r"); //Unused
				6: fin = $fopen("imem_test6.txt","r"); //Unused
				7: fin = $fopen("imem_test7.txt","r"); //Unused
			endcase
			$write("Opening Fileid %d\n", IMfileid);

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
			addr_r <= addr;
         if (wen)// active-high write enable
            begin            
              memory[addr] <= data_in;
            end
		  end
    end

endmodule