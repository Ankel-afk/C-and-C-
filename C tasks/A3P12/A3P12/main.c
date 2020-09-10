/*
 CH-230-A
 a3 p12.[c or cpp or h]
 Jose Biehl
 jbiehl@jacobs-university.de
 */
#include <string.h>
#include <stdio.h>

int main(int argc, const char * argv[]) {
    char one[50];
    char two[50];
    char c;
    int result;
    //use gets for the characters so the \n isn't recorded
    gets(one);
    gets(two);
    c = getchar();
    printf("length1=%lu\n", strlen(one));
    printf("length2=%lu\n", strlen(two));
    char concat[100];
    strcpy(concat, one);
    /* concat connects the strings and stores
     the new string in the location of the first
     specified string, so a buffer concat string is
     used so that we don't change anything for future
     comparisons.
     */
    printf("concatenation=%s\n", strcat(concat, two));
    //copy two into three
    char three[sizeof(two)];
    printf("copy=%s\n", strcpy(three, two));
    result = strcmp(one, two);
    
    if ( result < 0 ) {
        printf("one is smaller than two\n");
    }
    
    else if ( result > 0 ){
        
        printf("one is larger than two\n");
    }
    
    else {
        printf("one is equal to two\n");
    }
    /* this can also be done using strchr,
     but it requires pointer subtraction */
    int idx;
    //parse through each character to find it

    //spaguett
    for (idx =0; idx < strlen(two); idx++){
        if (two[idx] == c) {
            printf("position=%d\n", idx);
            
        }
        //corner case if char not in string
        else if (strchr(two, c) == NULL){
            printf("The character is not in the string\n");
            break;
        }
    }
    
    return 0;
}
