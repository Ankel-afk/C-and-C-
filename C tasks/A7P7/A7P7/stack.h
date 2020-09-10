/*
 CH-230-A
 a7p7.[c or cpp or h]
 Jose Biehl
 jbiehl@jacobs-university.de
 */

#ifndef _STACK_H
#define _STACK_H

struct stack {
    unsigned int count;
    int array[12]; // Container
};

struct stack* pop(struct stack* list);
void push(int item, struct stack* list);
void isFull(struct stack* list);
void isEmpty(struct stack* list);
void empty(struct stack* list);
#endif /* stack_h */
