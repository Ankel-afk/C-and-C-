/*
 CH-230-A
 a8 p6.[c or cpp or h]
 Jose Biehl
 jbiehl@jacobs-university.de
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    FILE* fp, *dest;
    fp = fopen("chars.txt", "r");
    if (fp == NULL) {printf("error getting file"); exit(1);}
    //get a and b from file
    int a =(int)  getc(fp);
    int b = (int) getc(fp);
    int sum = a + b;
    dest = fopen("codesum.txt", "w");
    if (dest == NULL) {exit(1);}
    //print sum to codesum.txt
    fprintf(dest, "%d", sum);

    return 0;
}
