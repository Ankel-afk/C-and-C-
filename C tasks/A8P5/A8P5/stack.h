/*
 CH-230-A
 a8 p5.[c or cpp or h]
 Jose Biehl
 jbiehl@jacobs-university.de
 */

#ifndef stack_h
#define stack_h
#include <stdlib.h>
#include <stdio.h>
struct stack {
    unsigned int count;
    char array[30][30]; // Container
};

struct stack* pop(struct stack* list);
void push(char i[], struct stack* list);
void isFull(struct stack* list);
void isEmpty(struct stack* list);
void empty(struct stack* list);
void printstack(struct stack* my_list);
void* bettermalloc(int size);
char* concatstack(struct stack* my_list);
#endif /* stack_h */
