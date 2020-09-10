/*
 CH-230-A
 a2 p4.[c or cpp or h]
 Jose Biehl
 jbiehl@jacobs-university.de
 */

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    float a, b, h;
    //printf("a=");
    scanf("%f", &a);
    //printf("b=");
    scanf("%f", &b);
    //printf("h=");
    scanf("%f", &h);

    printf("square area=%f\n", a*a);
    printf("rectangle area=%f\n", b*a);
    printf("triangle area=%f\n", a*h/2);
    printf("trapezoid area=%f\n", (a+b)*h/2);
    return 0;
}
