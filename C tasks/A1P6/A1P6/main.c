/*
 CH-230-A
 a1 p6.[c or cpp or h]
 Jose Biehl
 jbiehl@jacobs-university.de
 */
#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    char c = 'F'; // the ASCII DECIMAL value for F is: 70
    int ascii = (int)c + 3; //take the int of a character to find its ASCII value, sum 3 to it
    printf("the desired letter is %c and it has the corresponding ASCII value %i\n", ascii, ascii);
    return 0;
}
//the first time that the ascii variable is printedm it is in the form of a character. In the second it is expressed as an integer.
