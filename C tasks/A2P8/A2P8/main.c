/*
 CH-230-A
 a2 p8.[c or cpp or h]
 Jose Biehl
 jbiehl@jacobs-university.de
 */

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    //printf("enter integer: ");
    int num;
    scanf("%d", &num);
    if (num % 14 == 0) {
        printf("The number is divisible by 2 and 7\n");





    }
    else {
        printf("The number is NOT divisible by 2 and 7\n");
    }
    return 0;
}
