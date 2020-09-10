/*
 CH-230-A
 a4 p5.[c or cpp or h]
 Jose Biehl
 j.biehl@jacobs-university.de
 */

#include <stdio.h>
#include <string.h>
int count_consonants(char str[]){
    //list of consonants
    char consonants[42] = "bcdfghjklmnpqrstvwxyzBCDFGHJKLMNPQRSTVWXYZ";
    int count = 0;
    char* str_ptr;
    char* consonants_ptr;
    //i'm sorry
    for (str_ptr = &str[0]; *str_ptr != '\0'; str_ptr++){
        /*initialize str_ptr at the start of the str[] array
         while the contents of what str_ptr points at is not
                                    equal to a null character
         add 1 to str_ptr to go to next item*/
        for (consonants_ptr = &consonants[0]; consonants_ptr - &consonants[0] < strlen(consonants); consonants_ptr++){
            /*start at first item of consonants array,
             iterate while the subtraction of constants_ptr
             and the address of the first item of constants
             is less than 42, subtracting pointers gives the
             number of positions between them
             
             
             if the consonant equals what is
             strored on position i of the string,
             add 1 to our counter and iterate again */
            
            
            //printf("%c matching %c\n", *consonants_ptr, *str_ptr);
            //remove comment on printf to see process
            if (*consonants_ptr == *str_ptr){
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
