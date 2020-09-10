/*
 CH-230-A
 a4 p7.[c or cpp or h]
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
    for (int x = 0; x < n; x++){
        /*start using x=0, y =[all possible values]
         then x=1, y = [all]
         x = 2, y = [all], and so on*/
        for (int y=0; y< n; y++){
            printf("%d ", matrix[x][y]);
        }
        printf("\n");
    }
    printf("Under the main diagonal:\n");
    /* the general rule that we follow to
     print below the diagonal is this: we will iterate
     through the rows, linear fashion; however,
     when we choose the column, we do it in the following manner:
     
     for row 0, we choose no rows
     for row 1, we choose rows 1
     for row n, we choose rows n-1, 2*/
    
    int nref = 0;
    for(int y = 0; y < n; y++){
        for(int x = 0; x < nref; x++){
            printf("%d ", matrix[y][x]);
        }
        
        //
        nref++;
        /*autoincrement ensures that we
         only pick the values below the diagonal
         as we go down, the number of values we pick
         increases by 1 in each row
         */
    }
    printf("\n");
    return 0;
}
