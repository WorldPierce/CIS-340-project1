// Name: Joe Ayoub, William Pierce, Dhruv Patel 
// CSU ID: 2640829, 2643343, 2652790 
// CIS 340: Project #1A
// Description: Creates doubly linked list and uses quicksort to sort
#include <stdio.h>
#include <stdlib.h>
#include "node.h"

void freelist(struct mynode *);
int main(){
    // creating structers we need for populating and traversing the list
    struct mynode *list = (struct mynode *)malloc(sizeof(struct mynode)); 
    struct mynode *node = list; 
    struct mynode *previous = NULL;

    printf("Enter node values, enter 0 to stop\n");
    int entered;
    //keyboard input to populate the list
    scanf("%d", &(entered));
    while (entered != 0) {    
	    	node->next = (struct mynode *)malloc(sizeof(struct mynode));
		previous=node;	
	    	node = node->next;
	    	node->prev=previous;
		*(int *)&node->value=entered;
        	scanf("%d", &(entered));	
	}
	//setting list to first element
	list = list->next;
	printf("\nGiven List:\n");
	printlist(list);
	printf("\n");

	quicksort(list);
	printf("\nSorted List:\n");	
	printlist(list);
	printf("\n");

	freelist(list->prev);	
	return 0;
}
//method for garbage collection
void freelist(struct mynode *head)
{
    struct mynode *temp, *node = head;
    while (node) {
        temp = node;
        node = node->next;
        free(temp);
    }
    head = NULL;
}
