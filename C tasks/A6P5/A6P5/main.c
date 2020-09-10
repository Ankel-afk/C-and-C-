/*
 CH-230-A
 a6 p5.[c or cpp or h]
 Jose Biehl
 jbiehl@jacobs-university.de
 */

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    unsigned char c;
    scanf("%c", &c);
    getchar();
    printf("The decimal representation is: %d\n", c);
    printf("The backwards binary representation is: ");
    while (c > 0){
        //print the number found at the first bit of c
        printf("%d", c&1 );
        //shift c 1 to the left to iterate thru loop
        c = c >> 1;
       //c will eventually equal zero
    }
           printf("\n");
    return 0;
}
