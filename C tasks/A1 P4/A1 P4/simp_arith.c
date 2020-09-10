/*
 CH-230-A
 a1 p4.[c or cpp or h]
 Jose Biehl
 jbiehl@jacobs-university.de
 */

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int x = 17, y = 4;
    printf("x=%d\n", x);
    printf("y=%d\n", y);
    int sum = x+y;
    printf("sum=%d\n", sum);
    int mult = x*y;
    printf("product=%d\n", mult);
    int diff = x-y;
    printf("difference=%d\n", diff);
    float div = (float)x/(float)y;
    printf("division=%f\n", div);
    int rem = (int)x%(int)y;
    printf("remainder of division=%d\n", rem);
    return 0;
}
