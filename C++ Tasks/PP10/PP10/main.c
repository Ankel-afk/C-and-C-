//
//  main.c
//  PP10
//
//  Created by Jose Ignacio Biehl on 05.12.19.
//  Copyright © 2019 Jose Biehl. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
void print_matrix(int **A, int rows, int cols){
    for (int r = 0; r < rows; r++){
        for (int c = 0; c < cols; c++){
            printf("%d ", A[r][c]);
        }
        printf("\n");
    }
    
    
}
int main(int argc, const char * argv[]) {
    // insert code here...
    int r, c;
    FILE* input = fopen("matrix.dat", "r");
    fscanf(input, "%d", &r);
    printf("%d\n", r);
    fscanf(input, "%d", &c);
    printf("%d\n", c);
    int** matrix = (int**) malloc(sizeof(int*)*r);
    if (!matrix){
        exit(-1);
    }
    for(int i =0; i < r; i++){
        matrix[i] = (int*) malloc(sizeof(int)*c);
        if (!matrix[i])
            exit(i);
        for( int j =0; j < c; j++){
            matrix[i][j] = 0;
        }
    }
    int row;
    int col;
    int value;
   
    while (fscanf(input, "%d %d %d", &row, &col, &value) != EOF){
        matrix[row-1][col-1] = value;
    }
    
    print_matrix(matrix, r, c);
    
    
    
    for(int i = 0; i < r; i++){
        free(matrix[i]);
    }
    free(matrix);
    
    
    fclose(input);
    return 0;
}
