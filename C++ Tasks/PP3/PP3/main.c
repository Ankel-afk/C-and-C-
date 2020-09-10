//
//  main.c
//  PP3
//
//  Created by Jose Ignacio Biehl on 03.12.19.
//  Copyright © 2019 Jose Biehl. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
int main(int argc, const char * argv[]) {
    FILE* result;
    result = fopen("squares.txt", "w");
    
    int n;
    scanf("%d", &n);
    int* arr = (int*) malloc(sizeof(int)*n);
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    for (int i = n-1; i >=0; i--){
        fprintf(result, "%d %d\n", arr[i], arr[i]*arr[i]);
    }
    fclose(result);
    return 0;
}
