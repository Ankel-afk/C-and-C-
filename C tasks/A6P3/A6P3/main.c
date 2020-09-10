/*
 CH-230-A
 a6 p3.[c or cpp or h]
 Jose Biehl
 jbiehl@jacobs-university.de
 */
#include <stdio.h>
//max of 2 nums
#define mx(a, b) (a > b ? a : b)
//max of 3 nums
#define max(a, b, c) (mx(mx(a,b), c))
#define mn(a, b) (a < b ? a : b)

#define min(a, b, c) (mn(mn(a,b), c))
//min + max / 2
#define mid_range(a,b,c) (min(a,b,c)+max(a,b,c))/2


int main(int argc, const char * argv[]) {
    // insert code here...

    double a, b, c;
    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);
    printf("The mid-range is: %lf\n", mid_range(a, b, c));
}
