/*
 CH-230-A
 a4 p2.[c or cpp or h]
 Jose Biehl
 j.biehl@jacobs-university.de
 */
/*Write a program where you read a string (which may contain spaces) from the standard input.
 You can safely assume that the string will not be longer than 50 characters. Print the string on the
 screen as in the following testcase.
 Your solution has to satisfy the requirements from the problem description and has to pass the
 following testcase and potentially other testcases which are uploaded. All characters are relevant
 for passing testcases including newlines and spaces.*/
#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    char string1[50];
    fgets(string1, sizeof(string1), stdin);
    //ignore \n char with strlen -1
    for (int i= 0; i < strlen(string1) -1 ; i++){
       //if even position, print normal
        if (i % 2 != 0) {
            printf(" %c\n", string1[i]);
        }
        else{
            printf("%c\n", string1[i]);
        }
    }
    
    return 0;
}
