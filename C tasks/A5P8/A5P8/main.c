/*
 CH-230-A
 a5 p8.[c or cpp or h]
 Jose Biehl
 jbiehl@jacobs-university.de
 */
#include <stdlib.h>
#include <stdio.h>
//creates a matrix using malloc
int* creatematrix(int ROW, int COL){
    int* ptr = (int*) malloc(sizeof(int) * ROW * COL);
    if (ptr == NULL){exit(1);}
    for (int i=0; i < ROW * COL; i++){
        scanf("%d", &ptr[i]);
    }
    return ptr;
}
void printmatrix(int ROW, int COL, int* ptr){
    for (int i=0; i < ROW * COL; i++){
        printf("%d ", ptr[i]);
        if ((i+1) % COL == 0){
            printf("\n");
        }
    }
}
//calculates a new element of a matrix by specifying row and column
/*the way we multiply matrices is by multiplying the rows of the first
 array times the column of the second array*/
int oneelement(int *arr1, int* arr2, int matrix1row, int matrix2row, int ROW, int COL, int m){
    int newmatrix = 0;
    for (int i=0; i < m; i++){
        newmatrix = newmatrix + arr1[ROW*m +i] * arr2[i*(matrix2row)+COL];
        printf("matrix is using arr 1 pos %d, arr 2 pos %d\n", ROW*m +i, i*(matrix2row)+COL);
        
    }
    printf("next iteration\n");
    return newmatrix;
}
//stores the noneelement function to its corresponding location in the new matrix
void multiplymatrix(int *matrix1, int *matrix2, int* destmatrix, int n, int p, int m){
    for(int i=0; i < n; i++){
        for (int j=0; j < p; j++){
            destmatrix[m*i+j] = oneelement(matrix1, matrix2, n, p, i, j, m);
        }
    }
}

int main(int argc, const char * argv[]) {
    int n, m, p;

    scanf("%d", &n);
    scanf("%d", &m);
    scanf("%d", &p);

    int* matrix1 = creatematrix(n, m);
    int* matrix2 = creatematrix(m, p);
    printf("Matrix A:\n");
    printmatrix(n, m, matrix1);
     printf("Matrix B:\n");
    printmatrix(m, p, matrix2);
    
    //alloc mem for third matrix
    int* matrix3 = (int*) malloc(sizeof(int)*n*p);
    if (matrix3 == NULL){exit(1);}

    multiplymatrix(matrix1, matrix2, matrix3, n, p, m);
    printf("The multiplication result AxB:\n");
    printmatrix(n, p, matrix3);
    
    free(matrix1);
    free(matrix2);
    free(matrix3);
    return 0;
    
}
