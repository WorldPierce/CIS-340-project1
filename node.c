#include <stdio.h>
#include <stdlib.h>
#include "node.h"

//recursive printlist method
void printlist(struct mynode *head){
	if(head != NULL){
		printf("%d", head->value);
		if(head->next != NULL){
			printf("<==>");
			printlist(head->next);
		}
	}
}

//finding the last node for our quicksort method
struct mynode* last_node(struct mynode *tail){
	while(tail->next != NULL){
		tail= tail->next;
	}
	return tail;
}
//method for swapping nodes in quicksort
void swapNode(struct mynode* node1, struct mynode* node2)
{
	if(node1->value!=node2->value)
	{
		int temp=*(int *)&node2->value;
		*(int *)&node2->value=*(int *)&node1->value;
		*(int *)&node1->value=temp;
	}
}
//finding our partition point to use in quicksort
struct mynode* partitionPoint(struct mynode* head, struct mynode* tail){
	struct mynode* i = (head)->prev;
	struct mynode* j = (head);
	while(j != tail){
		if(j->value <= tail->value){
			i = i->next;
			swapNode(i,j);
		}
		j=j->next;
	}
	swapNode(i->next,tail);
	return i->next;
}
//quicksort helper method we used to recursivly sort our list.
void quicksortRec(struct mynode *head,struct mynode *last)
{
	if((head) < (last)){
		struct mynode *q= partitionPoint(head,last);
		if(q->prev && q->prev!=head)
			quicksortRec(head,(q->prev));		
		if(q->next && q->next!=head)
			quicksortRec((q->next),last);
	}
}
//quicksort method we will call in main method
struct mynode* quicksort(struct mynode *head){
	struct mynode* last = last_node(head);
	quicksortRec(head,last);
	return head;
}
