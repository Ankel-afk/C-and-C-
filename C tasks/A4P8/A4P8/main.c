/*
 CH-230-A
 a4 p8.[c or cpp or h]
 Jose Biehl
 j.biehl@jacobs-university.de
 */



#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int n;
    scanf("%d", &n);
    int matrix[n][n];
    for (int x = 0; x < n; x++){
        for (int y=0; y< n; y++){
            scanf("%d", &matrix[x][y]);
        }
    }
    
    printf("The entered matrix is:\n");
    for (int y = 0; y < n; y++){
        /*start using x=0, y =[all possible values]
         then x=1, y = [all]
         x = 2, y = [all], and so on*/
        for (int x=0; x < n; x++){
            printf("%d ", matrix[y][x]);
        }
        printf("\n");
    }
    printf("Under the secondary diagonal:\n");
    /* the general rule that we follow to
     print below the second is this: we will iterate
     through the rows, linear fashion; however,
     when we choose the column, we do it in the following manner:
     
     for row 0, we choose now columns
     for row 1, we choose column n-1
     for roq 1, we choose columns n-1 n-2
     */
    
    int xref = n;
    for (int y = 0; y < n; y++){
        
        for(int x = xref; x < n; x++){
            printf("%d ", matrix[y][x]);
            //
        }
        xref--;

        /*
         xref is wrong terminology but it serves
         as the reference for how we change our initial
         position in the for loop to iterate backwards.
         */
    }
    printf("\n");
    return 0;
}
