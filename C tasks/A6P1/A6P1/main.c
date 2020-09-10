/*
 CH-230-A
 a6 p1.[c or cpp or h]
 Jose Biehl
 jbiehl@jacobs-university.de
 */

#include <stdio.h>
//makes a function instead of swap
#define swap(type, x, y) {type z=x; x=y; y=z;}

int main(int argc, const char * argv[]) {
    
    int a,b;
    double c,d;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%lf", &c);
    scanf("%lf", &d);
    
    //print after swap
    printf("After swapping:\n");
    swap(int, a, b)
    printf("%d\n", a);
    printf("%d\n", b);
    //floats don't work for testcase
    swap(double, c, d);
    printf("%lf\n", c);
    printf("%lf\n", d);
    
    return 0;
}
