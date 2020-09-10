/*
 CH-230-A
 a2 p6.[c or cpp or h]
 Jose Biehl
 jbiehl@jacobs-university.de
 */

#include <stdio.h>

int main(int argc, const char * argv[]) {

    double x;
    double y;
    //input values for x and y
    printf("enter double x: ");
    scanf("%lf", &x);
    getchar();
    printf("enter double y: ");
    scanf("%lf", &y);

    double *ptr_one, *ptr_two, *ptr_three; //initialize pointers

    ptr_one = &x;
    ptr_two = &x;
    ptr_three = &y;

    printf("PRINTING ADDRESSES: \n\nptr_one: %p\nptr_two: %p\nptr_three: %p\n", ptr_one, ptr_two, ptr_three);
    return 0;
}
