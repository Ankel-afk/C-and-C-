/*
 CH-230-A
 a5 p9.[c or cpp or h]
 Jose Biehl
 jbiehl@jacobs-university.de
 */
#include <stdio.h>
#include <stdlib.h>

//makes a two-dimensional array


int** make_table(int COL, int depth){
    int** table = (int**) malloc(sizeof(int*)* COL);
    if (table == NULL){exit(1);}
    for(int i=0; i< COL; i++){
        table[i] = (int*) malloc(sizeof(int) * depth);
        if (table[i] == NULL){exit(1);}
    }
    for (int i = 0; i < COL; i++){
        for (int j = 0; j < depth; j++){
            int a;
            scanf("%d", &a);
            table[i][j]=a;
        }
    }
    return table;
}


int*** makearray(int row, int col, int depth){
    int*** array = (int***)malloc(sizeof(int***)* row);
    for (int i = 0; i<depth; i++){
        array[i] = make_table(col, depth);
        
        
    }
    return array;
    
}

//prints a @-d array
void printtable(int*** arr, int ROW, int COL, int depth){
    for (int h = 0; h < depth; h++){
        printf("Section %d:\n", h+1);
        for (int i = 0; i < ROW; i++){
            for (int j = 0; j < COL; j++){
                printf("%d ", arr[i][j][h]);
            }
            printf("\n");
        }

    }
    
}


//frees array
void free3d(int** arr, int ROW, int COL){}
void freearray(int** arr, int ROW){
    for (int i=0; i < ROW; i++){
        free(arr[i]);
    }
}



int main(int argc, const char * argv[]) {
    
    int row, col, depth;
    scanf("%d", &row);
    scanf("%d", &col);
    scanf("%d", &depth);
    
    int*** arr = makearray(row, col, depth);
    printtable(arr, row, col, depth);
    return 0;

}

