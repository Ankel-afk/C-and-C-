/*
 CH-230-A
 a3 p3.[c or cpp or h]
 Jose Biehl
 jbiehl@jacobs-university.de
 */

#include <stdio.h>
float convert(int cm){
    printf("Result of conversion: %f\n", (float)cm/100000);
    return cm/100000; // not necessary but nicer than return 0
}


int main(int argc, const char * argv[]) {
    int input;
    scanf("%d", &input);
    convert(input);
    
    return 0;
}
