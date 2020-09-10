/*
 CH-230-A
 a7 p7.[c or cpp or h]
 Jose Biehl
 jbiehl@jacobs-university.de
 */

#include<stdio.h>
#include<stdlib.h>

#include "stack.h"

int main(int argc, char** argv) {
    struct stack* my_stack;
    my_stack = (struct stack*)malloc(sizeof(struct stack));
    if (my_stack == NULL) {exit(1);}
    my_stack->count = 0; //start off with empty stack
    char input;
    char c;
    int newel;
    
    while (input != 'q') {
        scanf("%c", &c);
        switch (c)
        {
            case 's':
                scanf("%d", &newel);
                push(newel, my_stack);
                break;
            case 'p':
                my_stack = pop(my_stack);
                break;
            case 'e':
                empty(my_stack);
                break;
            case 'q':
                input = 'q';
                printf("Quit\n");
                break;
        }
    }
    return 0;
    
}
