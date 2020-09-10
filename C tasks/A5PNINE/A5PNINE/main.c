/*
 CH-230-A
 a5 p8.[c or cpp or h]
 Jose Biehl
 jbiehl@jacobs-university.de
 */
#include <stdio.h>
#include <stdlib.h>

//makes a two-dimensional array
int** make_table(int ROW, int COL){
    int** table = (int**) malloc(sizeof(int*)* ROW);
    if (table == NULL){exit(1);}
    for(int i=0; i< ROW; i++){
        table[i] = (int*) malloc(sizeof(int) * COL);
        if (table[i] == NULL){exit(1);}
    }
    for (int i = 0; i < ROW; i++){
        for (int j = 0; j < COL; j++){
            int a;
            scanf("%d", &a);
            table[i][j]=a;
            
        }
    }
    return table;
}
//prints a @-d array
void printtable(int** arr, int ROW, int COL){
    
    for (int i = 0; i < ROW; i++){
        for (int j = 0; j < COL; j++){
            printf("%d ", arr[i][j]);
            
        }
        printf("\n");
    }
}
//finds a multiplication of two matrices
int find_mult(int**matrix1, int**matrix2, int m, int ROW, int COL){
    int count =0;
    //sums the rows and columns up to m
    for (int i=0; i < m; i++){
        count = count +(matrix1[ROW][i] * matrix2[i][COL]);
        //printf("multiplying %d and %d\n", matrix1[ROW][i], matrix2[i][COL]);
    }
   // printf("count =%d\n", count);
    return count;
}
//multiplies matrices
int** multiplymatrix(int** matrix1, int** matrix2, int n, int p, int m){
    int** arr = (int**) malloc(sizeof(int)* n );
    if (arr == NULL){exit(1);}
    for(int i=0; i< n; i++){
        arr[i] = (int*) malloc(sizeof(int) * p);
        if (arr[i] == NULL){exit(1);}
    }
    for (int i= 0; i < n; i++)
        for (int j = 0; j < p; j++)
            arr[i][j] = find_mult(matrix1, matrix2, m, i, j);
    return arr;
}
//frees array
void freearray(int** arr, int ROW){
    for (int i=0; i < ROW; i++){
    free(arr[i]);
}
}



int main(int argc, const char * argv[]) {

    int n, m, p;
    scanf("%d", &n);
    scanf("%d", &m);
    scanf("%d", &p);
    int** matrix1 = make_table(n,m);

    int** matrix2 = make_table(m, p);
    printf("matrix A:\n");
    printtable(matrix1, n, m);
    printf("matrix B:\n");
    printtable(matrix2, m, p);
    
    find_mult(matrix1, matrix2, m, 0, 0);
    
    printf("matrix AxB\n");
    int** matrix3 = multiplymatrix(matrix1, matrix2, n, p, m);
    printtable(matrix3, n, p);
    
    freearray(matrix1, n);
    freearray(matrix2, m);
    freearray(matrix3, n);

    return 0;
}
