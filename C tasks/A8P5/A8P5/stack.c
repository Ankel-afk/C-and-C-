/*
 CH-230-A
 a8 p5.[c or cpp or h]
 Jose Biehl
 jbiehl@jacobs-university.de
 */
 
#include "stack.h"
#include <stdio.h>
#include <string.h>
//pushes element down stack

//pops element on top of stack
struct stack* pop(struct stack* my_list) {
    if (my_list->count > 0) {
        my_list->count = my_list->count -1;
        printf("Popping %s\n", my_list->array[my_list->count]);
    }
    else {
        printf("Pushing Stack Overflow\n");
    }
    return my_list;
}
void push(char i[], struct stack* my_list){
    if (my_list->count < 30) {
        //printf("Pushing %d\n", i);
        strcpy(my_list->array[my_list->count], i);
        my_list->count = my_list->count + 1;
    }
    else{
        printf("Popping Stack Underflow\n");
    }
}

//checks if count of stack is zero
void isEmpty(struct stack* my_list) {
    if (my_list->count == 0) {
        printf("The stack is empty\n");
    }
}
//checks if count of stack is full
void isFull(struct stack* my_list) {
    if (my_list->count == 30) {
        printf("The stack is full\n");
    }
}
//empties stack 1 by 1
void empty(struct stack* my_list) {
    printf("Emptying Stack ");
    while (my_list->count > 0) {
        my_list->count = my_list->count -1;
        printf("%s ", my_list->array[my_list->count]);
    }
    printf("\n");
}
//prints stack by iterating down the count
void printstack(struct stack* my_list){
    for (int i = my_list->count; i >= 0; i--){
        printf("%s ", my_list->array[i]);
    }
}
char* concatstack(struct stack* my_list){
    char* result = bettermalloc(sizeof(char)*30);
    for (int i = my_list->count; i >= 0; i--){
        strcat(result, my_list->array[i]);
    }
    return result;
}

void* bettermalloc(int size){
    void* ptr = malloc(size);
    if (ptr == NULL) {exit(1);}
    return ptr;
}
