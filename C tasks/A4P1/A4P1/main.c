/*
 CH-230-A
 a4 p1.[c or cpp or h]
 Jose Biehl
 j.biehl@jacobs-university.de
 */

#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    float lower, upper, stepsize;
    scanf("%f", &lower);
    getchar();
    scanf("%f", &upper);
    getchar();
    scanf("%f", &stepsize);
    //start at lower, add step to reach uper lim.
    for (float i= lower; i <= upper; i += stepsize){
        printf("%f %f %f\n", i, i*i*M_PI, 2* M_PI*i);
    }
    return 0;
}
