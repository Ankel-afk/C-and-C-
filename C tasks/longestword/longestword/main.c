//
//  main.c
//  longestword
//
//  Created by Jose Ignacio Biehl on 03.09.19.
//  Copyright © 2019 Jose Ignacio Biehl. All rights reserved.
//
//make a C program that returns the longest word in a string

#include <stdio.h>
#include <string.h>


int main(void) {
    // keep this function call here
    
    int x = 62;
    printf("hello  hi %c\n", x);
   
   /* char words[100];
    fgets(words, sizeof(words), stdin);
    
    
    char delim[] = " ";
    char *ptr = strtok(words, delim); //  the * sign denotes that ptr is not a normal variable that stores the address of the variable
    char word1[strlen(ptr)];
    char *wordptr = word1;
    strcpy(wordptr, ptr);

    printf("%s\n", ptr);
    while(ptr  != NULL){
        ptr = strtok(NULL, delim);
        if (ptr == NULL){
            printf("null pointer detected: ending loop\n");
            break;
        }

        printf("'%s'\n", ptr);

       if (strlen(ptr) > strlen(word1)) {
            strcpy(wordptr, ptr);
            printf("longest word is: %s\n", wordptr);
        }
    }
    printf("longest word found is: %s\n", word1);
    return 0;
*/
}
