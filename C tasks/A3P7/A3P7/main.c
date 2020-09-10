/*
 CH-230-A
 a3 p7.[c or cpp or h]
 Jose Biehl
 jbiehl@jacobs-university.de
 */

#include <stdio.h>
void print_form(int n, int m, char c){


    for (int i = m; i <= m + n -1; i++){
        /*set i equal to the number of rows, autoincrement i
         until it is equal to m + n-1 (the upper limit)
         */
        for (int j=1; j <= i; j++){
            //loop printing character 'c' j times
            printf("%c", c);

        }
        printf("\n");//new line for next row
    }

}

int main(int argc, const char * argv[]) {

    int height, base;
    char character;
    printf("enter height: ");
    scanf("%d", &height); //trapezoid height
    printf("enter base: ");
    scanf("%d", &base); //base, other base is m +n-1

    printf("enter character: ");
    getchar();
    scanf("%c", &character);


    print_form(height, base, character);
    return 0;
}
