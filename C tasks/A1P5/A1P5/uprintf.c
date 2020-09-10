/*
 CH-230-A
 a1 p5.[c or cpp or h]
 Jose Biehl
 jbiehl@jacobs-university.de
 */

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int x = 2138;
    float y = -52.358925;
    char z = 'G';
    double u = 61.295339687;
    printf("x=%9i\n", x);
    printf("y=%11.5f\n", y);
    printf("z=%c\n", z);
    printf("u=%.7lf\n", u);
    return 0;
}
