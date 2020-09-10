/*
 CH-230-A
 a1 p3.[c or cpp or h]
 Jose Biehl
 jbiehl@jacobs-university.de
 */
# include <stdio.h> // add #
int main() {
    float result;
    float a = 5; //has to be a float so that the division works correctly
    float b = 13.5; //has to be a float so that the division works correctly
    result = a / b;
    printf("The result is %f\n", result); //%f specified instead of %d, since the result is a float
    return 0;
}

//
