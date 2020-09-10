/*
 CH-230-A
 a5 p10.[c or cpp or h]
 Jose Biehl
 jbiehl@jacobs-university.de
 */

#include <stdio.h>

//reapeat function until base case is reached
void recursive(int n){
    if (n != 0){
        printf("%d\n", n);
        recursive(n-1);
    }
}
//this is still so much easier than haskell
int main(int argc, const char * argv[]) {
    int n;
    printf("enter int n: ");
    scanf("%d", &n);
    recursive(n);
}
