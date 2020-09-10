/*
 CH-230-A
 a2 p5.[c or cpp or h]
 Jose Biehl
 jbiehl@jacobs-university.de
 */

#include <stdio.h>

int main(int argc, const char * argv[]) {

    int a;
    int *ptr_a; // initialize pointer variable
    printf("a=");
    scanf("%d", &a);
    ptr_a = &a; // assign pointer to address of variable a
    printf("address contained in pointer is: %p\n", ptr_a);
    //%p specifies pointer variable for printf
    *ptr_a = *ptr_a + 5; //dereference pointer to change the variable it points to
    printf("new value of a is %d, address is %p\n", *ptr_a, ptr_a);

    return 0;
}
