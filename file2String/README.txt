Group Members and their contribution (in percentage) :
	
	Group B:
	Joe Ayoub      CSU ID: 2640829	(33.33%)
	William Pierce CSU ID: 2643343	(33.33%)	
	Dhruv Patel    CSU ID: 2652790	(33.33%)
----------------------------------------------------------------
Existence of Bugs (un-finished sections):

	No Bugs in the following Project.
----------------------------------------------------------------
Project Discription:

	Part2:	In the second part of the following project we have two 
source code files file2string.c and custout.c. First off in file2string.c
 our main method will read from the very first command line  argument an 
input file, and copies it to a character (char) array which we will name
farray. Whether the input file ends or doesn't end with a '\0' character,
it will be added. In-addition to that in our main method we have created
an array of constant character pointer named sarray that gives the contents
of farray as an array of null terminated strings. We set the value of the last 
index in the sarray as NULL, so that the array of strings is null terminated.
		
		In the second source code file custout.c we have a flag that 
determines how the strings of sarray should be written to standard output. If 
the flag is empty, then the output is exactly as sarray. Otherwise if flag is 
a proper non empty form "-x" the output will be in the opposite order of sarray.
------------------------------------------------------------------------
Compling Instructions:
Part 2:
wipierce@grail:~/Group_B/part2$ make
gcc -o main file2string.c custout.c
------------------------------------------------------------------------
Sample Test Runs:
Part 2:
wipierce@grail:~/Group_B/part2$ ./main ifile
Original input
ua  z3q 66
Custom output
ua

z3q
66
wipierce@grail:~/Group_B/part2$ ./main ifile -f
Original input
ua  z3q 66
Custom output

66
ua
z3q
wipierce@grail:~/Group_B/part2$ ./main ifile -b
Original input
ua  z3q 66
Custom output
z3q
ua
66
		