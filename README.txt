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
	
	Part1:	In the first part of the following project
we developed a doubly linked list written in the C programming
language.A Doubly Linked List is a linked data structure that
consists of sequentially linked nodes. Each node contains three
attributes, a next pointer that references to the next node in 
the sequence, a previous pointer that references to the previous
node, and a integer value stored as a constant in each one of the
nodes. In this project we allowed the user to input the constant 
value integer via the keyboard until he/she enters 0 followed by 
enter to end the linked list ( where 0 is not to be included
in the linked list). Following that step, our program would apply
a quicksorting algorithm in-order to sort the order of the value in 
ascending order. Finally the program will print to the users screen,
the unsorted list first, followed by the sorted list in ascending order
next.
------------------------------------------------------------------------
Compling Instructions:
Part 1:
wipierce@grail:~/Group_B/part1$ make
gcc -o main main.c node.c
wipierce@grail:~/Group_B/part1$
----------------------------------------
Sample Test Run:
Part 1:
wipierce@grail:~/Group_B/part1$ ./main
Enter node values, enter 0 to stop
9 1 8 2 7 3 6 4 5 0

Given List:
9<==>1<==>8<==>2<==>7<==>3<==>6<==>4<==>5

Sorted List:
1<==>2<==>3<==>4<==>5<==>6<==>7<==>8<==>9



	
		