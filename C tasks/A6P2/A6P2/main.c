/*
 CH-230-A
 a6 p2.[c or cpp or h]
 Jose Biehl
 jbiehl@jacobs-university.de
 */

#include <stdio.h>

//function takes x and returns y as the result
#define leastsig(x, y) {y = x & 0;}
int main(int argc, const char * argv[]) {
    // insert code here...
    unsigned char test;
    int lsb;
    
    scanf("%c", &test);
    printf("The decimal representation is: %d\n", test);
    leastsig(test, lsb);
    printf("the least significant bit is: %d\n", lsb);

    return 0;
}
