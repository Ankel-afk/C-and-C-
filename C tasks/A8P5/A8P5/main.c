/*
 CH-230-A
 a8 p5.[c or cpp or h]
 Jose Biehl
 jbiehl@jacobs-university.de
 */

#include <stdio.h>
#include <stdlib.h>
#include "stack.h"
#include <string.h>
int main(int argc, char** argv){
    struct stack* my_stack;
    my_stack = (struct stack*)bettermalloc(sizeof(struct stack));

    //this is like killing a mosquito with a cannon
    char string[900];
    char comparison[30][30];
    while(1){
        //get a string
        fgets(string, sizeof(string), stdin);
        if (strncmp(string, "exit", 4) == 0){ break; }
        int wordnum = 0;
        int wordsize = 0;
        for (int i = 0; i <= (strlen(string)); i++){
            if (string[i] == ' ' || string[i] == '\0'){
                //if we find a space, but an end string and go to next array
                my_stack->array[wordnum][wordsize] = '\0';
                comparison[wordnum][wordsize] = '\0';
                wordnum++;
                //reset position for new string
                wordsize = 0;
            }
            else if(string[i] == '\n'){
            string[i] = '\0';
            }
            else{
                //else continue copying every character to the new string
                my_stack->array[wordnum][wordsize] = string[i];
                comparison[wordnum][wordsize] = string[i];
                wordsize++;
            }
        }
        my_stack->count = wordnum;
    
//... the variable names give nice hints, but basically,
        //we compare backwards and forwards, if all match,
        //then we have a palindrome
        int overcomplication = 0;
        for (int i = my_stack->count; i >= 0; i--){
            if (strcmp( comparison[my_stack->count-i], my_stack->array[i] ) == 0){
                overcomplication++;
            }
        
        }
        if (overcomplication-1 == my_stack->count){
            printf("The sentence is palindromic by words!\n");
        }
        else{
            printf("The sentence is not palindromic by words!\n");
        }
        my_stack->count = 0;
    }
    free(my_stack);

    return 0;
    }
