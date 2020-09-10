/*
 CH-230-A
 a6 p7.[c or cpp or h]
 Jose Biehl
 jbiehl@jacobs-university.de
 */

#include <stdio.h>
//sets 3 bits to 1
unsigned char set3bits(unsigned char c, int bit1, int bit2, int bit3){

    c = c | (1 << bit1);
    c = c | (1 << bit2);
    c = c | (1 << bit3);
    
    return c;
}
//prints in binary
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
    int b1, b2, b3;
    scanf("%c", &c);
    getchar();
    scanf("%d", &b1);
    scanf("%d", &b2);
    scanf("%d", &b3);
    
    unsigned char res = set3bits(c, b1, b2, b3);
    printf("The decimal representation is: %d\n", c);
    printf("The binary representation is: ");
    bin(c);
    
    printf("After setting the bits: ");
    bin(res);
    return 0;
}
