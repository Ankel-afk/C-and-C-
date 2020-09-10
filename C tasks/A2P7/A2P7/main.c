/*
 CH-230-A
 a2 p7.[c or cpp or h]
 Jose Biehl
 jbiehl@jacobs-university.de
 */

#include <stdio.h>
int main()
{
    int i = 8;
    while (i >= 4) { //missing curly {} brackets on while loop
        printf("i is %d\n", i);
        i--;
    }
    printf("That’s it.\n");
    return 0;
}
