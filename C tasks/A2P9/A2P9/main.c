/*
 CH-230-A
 a2 p10.[c or cpp or h]
 Jose Biehl
 jbiehl@jacobs-university.de
 */

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int days;
    printf("enter the number of days:");
    scanf("%d", &days);
    int i = 0;
    int hours;
    char grammar;

    while (i < days) {
        i +=1; //since i is summed at the beginning of the while loop, a < operator is  used
        if ( i > 1 ) {
            grammar = 's';
        }
        else{
            grammar = 0;//grammar statement puts an s character if the number of days is plural
        }
        hours = i * 24;
        printf(" %d day%c = %d hours \n", i, grammar, hours);

    }

    return 0;
}
