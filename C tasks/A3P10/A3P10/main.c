/*
 CH-230-A
 a3 p10.[c or cpp or h]
 Jose Biehl
 jbiehl@jacobs-university.de
 */

#include <stdio.h>

float product(float a, float b){
    return a*b;
}
void productbyref(float a, float b, float *p) {
    *p = a * b;

}
void modifybyref(float *a, float *b){
    printf("modifying values..\n");
    *a = *a + 3;
    printf("a is now %f\n", *a);
    *b = *b + 11;
    printf("b is now %f\n", *b);
}
int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    float a;
    float b;
    printf("enter a: ");
    scanf("%f", &a);
    printf("enter b: ");
    scanf("%f", &b);
    float product_add;

    printf("product by value is %f\n", product(a,b));
    productbyref(a, b, &product_add);
    printf("product by ref is %f\n", product_add);
    /* so what's the difference? the productbyref function
     modified the product_add variable and stored the product
     there using pointers, while the product() function only
     returned a single value.*/
    char waitsometime;
    getchar();
    printf("press enter to continue to modifybyref\n");
    scanf("%c", &waitsometime);
    // clears up screen so it's not garbled
    modifybyref(&a, &b);
    //the variables a and b are now changed within main()
    printf("a and b are now changed within the main() function\n");
    printf("a= %f\n b= %f\n", a, b);
    printf("product of a and b is now: %f\n", product(a, b));
    return 0;
}
