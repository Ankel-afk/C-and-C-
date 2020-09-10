/*
 CH-230-A
 a2 p1.[c or cpp or h]
 Jose Biehl
 jbiehl@jacobs-university.de
 */

#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    // insert code here...

    double x;
    double y;
    //printf("enter double x: ");
    scanf("%lf", &x);

    //printf("enter double y: ");
    scanf("%lf", &y);

    int a;
    int b;
    //printf("enter int a: ");
    scanf("%d", &a);
    getchar();

    //printf("enter int b: ");
    scanf("%d", &b);

    char c1;
    char c2;
   // printf("enter char1: ");
    getchar();
    scanf("%c", &c1);
    getchar();
   //  printf("enter char2 y: ");
    scanf("%c", &c2);


//operations are done during printing
    printf("sum of doubles=%lf\n", x+y);
    printf("difference of doubles=%lf\n", x-y);
    printf("square=%lf\n", x*x);




    printf("sum of integers=%d\n", a+b);
    printf("product of integers=%d\n", a*b);

//cast character type as integer so that the sum can be done
    printf("sum of chars=%d\n", (int)c1 + (int)c2);
    printf("product of chars=%d\n", (int)c1*(int)c2);
    printf("sum of chars=%c\n", (int)c1 + (int)c2);
    //use "%c" to display integer as ASCII value
    printf("product of chars=%c\n", (int)c1*(int)c2);



    return 0;

}
