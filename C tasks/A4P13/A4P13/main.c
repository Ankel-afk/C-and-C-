/*
 CH-230-A
 a4 p13.[c or cpp or h]
 Jose Biehl
 j.biehl@jacobs-university.de
 */
#include <ctype.h>
#include <stdio.h>
#include <string.h>
void uppcase(char *str){
    for(int i=0; i < strlen(str); i++){
        if (isupper(str[i]) == 0){
            str[i] = toupper(str[i]);
        }
    }
}

void lowcase(char *str){
    for(int i=0; i < strlen(str); i++)
        if (islower(str[i]) == 0){
            str[i] = tolower(str[i]);
        }
}

int main(int argc, const char * argv[]) {
    char stringy[80];
    while (1){
        fgets(stringy, 80, stdin);
        if (strncmp(stringy, "exit", 4) == 0){
            break;
        }
        uppcase(&stringy[0]);
        printf("uppcase=%s", stringy);
        lowcase(&stringy[0]);
        printf("lowcase=%s", stringy);
    }
    
    
    return 0;
}
