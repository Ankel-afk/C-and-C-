/*
 CH-230-A
 a4 p4.[c or cpp or h]
 Jose Biehl
 j.biehl@jacobs-university.de
 */

#include <stdio.h>
#include <string.h>
int count_consonants(char str[]){
    //list of consonants
    char consonants[42] = "bcdfghjklmnpqrstvwxyzBCDFGHJKLMNPQRSTVWXYZ";
    int count = 0;
    for (int i=0; i < strlen(str); i++){
        for (int j=0; j< strlen(consonants); j++){
            /*if the consonant equals what is
             strored on position i of the string,
             add 1 to our counter and iterate again */
            if (consonants[j]==str[i]){
                count += 1;
                break;
                
                }
        }
    }
    return count;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    char input[100];
    while (input[0] != '\n'){
        fgets(input, sizeof(input), stdin);
        if (input[0] != '\n'){
            printf("Number of consonants=%d\n", count_consonants(input));
        }
    }
   
    
    
    return 0;
}
