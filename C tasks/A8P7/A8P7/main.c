
/*
 CH-230-A
 a8 p7.[c or cpp or h]
 Jose Biehl
 jbiehl@jacobs-university.de
 */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main(int argc, const char * argv[]) {
    // insert code h,re...
    FILE *var1, *var2, *dest;
    char var1name[20], var2name[20];
    //get names of files
    scanf("%s", var1name);
    scanf("%s", var2name);
    printf("names are \n%s\n%s\n", var1name, var2name);
    double v1, v2;
    //open files with same name
    var1 = fopen(var1name, "r");
    var2 = fopen(var2name, "r");
    dest = fopen("results.txt", "w");
    //check for null pointers
    if (var1 == NULL || var2 == NULL || dest == NULL) {printf("error:\n"); exit(1);}
    fscanf(var1, "%lf", &v1);
    fscanf(var2, "%lf", &v2);


    //print stuff to dest file
    fprintf(dest, "sum=%lf\n", v1+v2);
    fprintf(dest, "diff=%lf\n", v1-v2);
    fprintf(dest, "prod=%lf\n", v1*v2);
    fprintf(dest, "div=%lf\n", v1/v2);
    printf("%s", var1name);
    fclose(var1);
    fclose(var2);
    fclose(dest);
    return 0;
}
