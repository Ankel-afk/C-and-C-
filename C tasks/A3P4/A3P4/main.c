/*
 CH-230-A
 a3 p4.[c or cpp or h]
 Jose Biehl
 jbiehl@jacobs-university.de
 */


#include <stdio.h>
int position(char str[], char c){
    int idx;
    /* Loop until first occurrence of g */
    for (idx = 0; str[idx] != c && str[idx] != '\0'; ++idx) {} //MISSING {}
    //now the for loop does nothing correctly and terminates when it finds c
        return idx;
    }
int main() {
    char line[80];
    while (1) {
        printf("Enter string:\n");
        fgets(line, sizeof(line), stdin);
        printf("The first occurrence of 'g' is: %d\n", position(line, 'g')); //fix ''
    }
}
