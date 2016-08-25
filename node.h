
#ifndef NODE_H
#define NODE_H
#endif
//node struct with CONST value
struct mynode {
    int const value;
    struct mynode *next;
    struct mynode *prev;
};
//declaring methods we will use in main
struct mynode* quicksort(struct mynode *);

void printList(struct mynode *);
