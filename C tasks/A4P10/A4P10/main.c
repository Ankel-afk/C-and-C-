/*
 CH-230-A
 a4 p10.[c or cpp or h]
 Jose Biehl
 j.biehl@jacobs-university.de
 */

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
//does thew math things by reference
void proddivpowinv(float a, float b, float *prod, float *div,float *pwr, float *invb){
    *prod = a*b;
    *div = a/b;
    *pwr = pow(a, b);
    *invb = 1/b;
}



int main(int argc, const char * argv[]) {
    printf("Hello, World!\n");
    float a, b, product, division, power, inverseb;

    printf("enter float a\n");
    scanf("%f", &a);
    printf("enter float b\n");
    scanf("%f", &b);
    proddivpowinv(a, b, &product, &division, &power, &inverseb);
    //print values using floats modified by reference
    printf("printing values:\nproduct=%f\n", product);
    printf("division=%f\npower=%f\ninverseb=%f\n", division, power, inverseb);

    return 0;
}
