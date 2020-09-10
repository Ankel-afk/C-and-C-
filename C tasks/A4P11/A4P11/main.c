/*
 CH-230-A
 a4 p11.[c or cpp or h]
 Jose Biehl
 j.biehl@jacobs-university.de
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <limits.h>
int count_insensitive(char *str, char c){


    return 0;
}



int main(int argc, const char * argv[]) {
    /*is this what I am supposed to do?
     Please let me know if I overcomplicated
     this*/
    char *arrbuffer = malloc(sizeof(char)*50);
    if (arrbuffer == NULL){
      exit(1);
    }

    char* arr;
    size_t inputlen = 0, templen = 0;
    do{
        fgets(arrbuffer, 50, stdin);
        /*
        fgets reads up to a maximum number of chars from the input
        but leaves the rest of the input buffer intact
        so we use a do loop
         */
        templen = strlen(arrbuffer);
        inputlen = inputlen + templen;
        arr = (char*) realloc(arr, inputlen+1);
        if (arr == NULL){
          break;
        }
        //realloc does a level 1 free() already
        strcat(arr, arrbuffer);
    } while (templen == 49 && arrbuffer[48] != '\n' );
    /*corner case, final character of string is \0
     but maybe we end the string as the 49th character?
     in that case arrbuffer[48] will be equal to \n and
     templen will still be 49, so we put the and statement
     as well
    */
    free(arrbuffer);
   // printf("%s", arr);


    int count = 0;
    char c;

    printf("enter character to be searched:");
    scanf("%c", &c);
    getchar();

        for (int i=0; i < strlen(arr); i++){
            if(tolower(arr[i]) == tolower(c)){
                count += 1;
        }
    }
    printf("the character %c occurs %d times\n", c, count);
    free(arr);







    return 0;
}
