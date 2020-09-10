/*
 CH-230-A
 a5 p1.[c or cpp or h]
 Jose Biehl
 jbiehl@jacobs-university.de
 */

#include <stdio.h>
//print triangle w/ for loops
void printit(int n, char ch){
    for (; n>0; n--){
        for (int i=n; i > 0; i--){
            printf("%c", ch);
        }
        printf("\n");
    }


}

int main(int argc, const char * argv[]) {
    // insert code here...
    int n;
    char ch;
    //printf("enter integer n: ");
    scanf("%d", &n);
    //printf("enter character ch: ");
    getchar();
    scanf("%c", &ch);

    printit(n, ch);

    return 0;
}
