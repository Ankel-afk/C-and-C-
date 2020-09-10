/*
 CH-230-A
 a6 p4.[c or cpp or h]
 Jose Biehl
 jbiehl@jacobs-university.de
 */

#include <stdio.h>
#include <stdlib.h>
#define INTERMEDIATE
///create vector
int* createvector(int n){
    int* ptr = (int*) malloc(sizeof(int)* n);
    if (ptr == NULL){exit(1);}
    for (int i = 0; i < n; i++){
        scanf("%d", &ptr[i]);
    }
    return ptr;
    

    
}
//print dot product
void scalar(int* v1, int* v2, int n){
    #ifdef INTERMEDIATE
    printf("The intermediate product values are\n");
    #endif
    int count = 0;
    for (int i =0; i< n; i++){
        #ifdef INTERMEDIATE
        printf("%d\n", v1[i]*v2[i]);
        #endif
        count = count + v1[i]*v2[i];
    }
    printf("The scalar product is: %d\n", count);
    
    
    
}
int main(int argc, const char * argv[]) {
    int n;
    scanf("%d", &n);
    //create 2 vectors
    int* v1 = createvector(n);
    int* v2 = createvector(n);
    //print scalar product
    scalar(v1, v2, n);
    free(v1);
    free(v2);
    return 0;
}
