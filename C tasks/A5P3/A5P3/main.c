/*
 CH-230-A
 a5 p3.[c or cpp or h]
 Jose Biehl
 jbiehl@jacobs-university.de
 */

#include <stdio.h>
#include <ctype.h>
#include <string.h>
//walk thru string, increase count if lowercase
int count_lower(char* str){
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++){
        if(islower(str[i]) == 1){
            count += 1;
        }
    }
    return count;
}

int main(int argc, const char * argv[]) {
    char string[50];
    //repeat until \n is entered
    while (1){
        printf("Enter string\n");
        fgets(string, sizeof(string), stdin);
        if (string[0] == '\n'){
            break;
        }
        else{
            printf("count=%d\n", count_lower(&string[0]));
        }

    }


    return 0;
}
