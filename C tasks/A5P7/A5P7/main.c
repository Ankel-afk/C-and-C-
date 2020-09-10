/*
 CH-230-A
 a5 p7.[c or cpp or h]
 Jose Biehl
 jbiehl@jacobs-university.de
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//modifies a string to remove the \n at the end
void modifystring(char *arr){
    for (int i = 0; arr[i] != '\0'; i++){
        if (arr[i] == '\n'){
            arr[i] = '\0';

        }

    }

}


int main(int argc, const char * argv[]) {
    // insert code here...
    char str1[100], str2[100];
    char* ptr;
    fgets(str1, sizeof(str1), stdin);
    modifystring(str1);
    fgets(str2, sizeof(str2), stdin);
    modifystring(str2);
    strcat(str1, str2);
    //strcat stores both strings as str1

    ptr = (char*) malloc(strlen(str1)*sizeof(char));
    if(ptr ==NULL){exit(1);}
    //allocate string to dynamic memory
    for (int i = 0; i < strlen(str1); i++){
            ptr[i] = str1[i];
    }
    //printf("len str1 %d\n", strlen(str1));

   // printf("len ptr %lu\n", strlen(ptr));
    printf("Result of concatenation: %s\n", ptr);
    free(ptr);

    return 0;

}
