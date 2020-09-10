/*
 CH-230-A
 a3 p1.[c or cpp or h]
 Jose Biehl
 jbiehl@jacobs-university.de
 */

#include <stdio.h>

int main(int argc, const char * argv[]) {
    float x;
    int n;
    
    scanf("%f", &x);
    scanf("%d", &n);
    getchar();
    while (n < 1) {
        printf("Input is invalid, reenter value\n");
        scanf("%d", &n);
        getchar();
    }
    int i;
    
    for (i=1; i<=n; i++) {
        printf("%f\n", x);
    }

    return 0;
}
