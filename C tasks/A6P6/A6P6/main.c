/*
 CH-230-A
 a6 p6.[c or cpp or h]
 Jose Biehl
 jbiehl@jacobs-university.de
 */

#include <stdio.h>

void bin(unsigned char c) {
    for (int i = 7; i >= 0; i--){
        printf("%d", (c & (1 << i)) > 0 ? 1 : 0);
        /*print 1 or 0 depending on whether the bit comparison at
         a specific bit is greater than zero*/
    }
    printf("\n");
}


int main(int argc, const char * argv[]) {
    // insert code here...
    unsigned char c;
    scanf("%c", &c);
    getchar();
    printf("The decimal representation is: %d\n", c);
    printf("The binary representation is: ");
    bin(c);

    printf("\n");



    return 0;
}
