/*
 CH-230-A
 a3 p2.[c or cpp or h]
 Jose Biehl
 jbiehl@jacobs-university.de
 */

#include <stdio.h>

int main(int argc, const char * argv[]) {

    char ch;
    int n;
    //input for ch
    printf("enter character ch: ");
    scanf("%c", &ch);
    
    getchar();
    //input for n
    printf("enter integer n: ");
    scanf("%d", &n);
    int i = 0; // i is used to terminate while loop
    
    //subtract autoincrement i from n until i is equal to n
    while (n >= i) {
        printf("current character: %c \n", (int)ch - i);
        i++;
    // i starts at 0, so ch is printed again
    }

    return 0;
}
