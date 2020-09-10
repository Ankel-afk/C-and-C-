/*
 CH-230-A
 a1 p2.[c or cpp or h]
 Jose Biehl
 jbiehl@jacobs-university.de
 */

#include <stdio.h>
int main() {
    int result;
    result = (2 + 7) * 9 / 3;
    printf("The result is %i\n", result);
    return 0;
}
//the variable "result" is not included in the printf statement of the original code, so the %d tries to interpret a non-integer as an integer, creating a garbled mess
