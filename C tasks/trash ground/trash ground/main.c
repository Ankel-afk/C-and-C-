
/*
 CH-230-A
 a5 p6.[c or cpp or h]
 Jose Biehl
 jbiehl@jacobs-university.de
 */

#include <stdlib.h>

#include <ctype.h>
#include <stdio.h>
//returns a pointer to an array of size n
float* make_array(int *ncount){
    int n;
    float*ptr;
    scanf("%d", &n);
    *ncount = n;
    ptr = (float*) malloc(sizeof(float)*n);
    if(ptr == NULL){exit(1);}
    for(int i=0; i < n; i++){
        scanf("%f", &ptr[i]);
    }
    return ptr;
    
    
}
int main(int argc, const char * argv[]) {
    // insert code here...
    float* arr;
    int n;
    arr = make_array(&n);
    int i;
    //iterate thru array until reaching position of n or arr[i] is neagative
    for (i=0; i < arr - &arr[n] || arr[i] > 0 ; i++){
        if (i == &arr[n] - &arr[0]-1){
            printf("error, no negative number input\n");
            exit(1);
        }
    }
    long position = &arr[i] - &arr[0];
    printf("Before the first negative value: %ld elements\n", position);
    free(arr);
    return 0;
    
}

