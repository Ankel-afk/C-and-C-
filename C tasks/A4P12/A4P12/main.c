/*
 CH-230-A
 a4 p12.[c or cpp or h]
 Jose Biehl
 j.biehl@jacobs-university.de
 */
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
//iterate thru str, replace c with e
void replaceAll(char *str, char c, char e){
    for (int i=0; i < strlen(str); i++){
        if(str[i] == c){
            str[i] = e;
        }

    }
}

int main(int argc, const char * argv[]) {
    char str[80];
    //loop until stop is entered as string
    while (1) {
        printf("enter string or stop: ");
        fgets(str, 80, stdin);
        if (strncmp(str, "stop", 4) == 0){
            break;
        }
        char tobereplaced, replacer;
        printf("enter character to be replaced: ");
        scanf("%c", &tobereplaced);
        getchar();
        printf("enter character that will replace %c:  ", tobereplaced);
        scanf("%c", &replacer);
        getchar();

        printf("%s", str);
        replaceAll(&str[0], tobereplaced, replacer);
        printf("new string: %s", str);
    }

    return 0;
}
