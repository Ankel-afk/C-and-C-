/*
 CH-230-A
 a8 p4.[c or cpp or h]
 Jose Biehl
 jbiehl@jacobs-university.de
 */
 
#ifndef stack_h
#define stack_h
#include <stdlib.h>
#include <stdio.h>
struct stack {
    unsigned int count;
    int array[12]; // Container
};

struct stack* pop(struct stack* list);
void push(int item, struct stack* list);
void isFull(struct stack* list);
void isEmpty(struct stack* list);
void empty(struct stack* list);
void printstack(struct stack* my_list);
#endif /* stack_h */
