/*
 CH-230-A
 a2 p9.[c or cpp or h]
 Jose Biehl
 jbiehl@jacobs-university.de
 */

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    char try;
    scanf("%c", &try);
    //48 to 57 are ASCII values for digits
    if (48<=(int)try && (int)try<=57){
      //I don't know if you need to typecast char to int
        printf("%c is a digit\n", try);
    }
    //characters a-z
    else if (65 <= (int)try && (int)try <= 90){
        printf("%c is a letter\n", try);
    }
    //characters A-Z
    else if ( (int)try >= 97 && (int)try <= 122) {

        printf("%c is a letter\n", try);
    }
    //anything else
    else {
        printf("%c is some other symbol\n", try);
    }
return 0;



}
