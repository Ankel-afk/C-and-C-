/*
 CH-230-A
 a5 p4.[c or cpp or h]
 Jose Biehl
 jbiehl@jacobs-university.de
 */
#include <stdlib.h>

#include <stdio.h>
//print arr, then print arr/5
void divby5(float arr[], int size){
    for (int i = 0; i < size; i++){
        arr[i] = arr[i]/5;
    }
}

int main(int argc, const char * argv[]) {
    // insert code here...
    int n;
    printf("enter n: ");
    scanf("%d", &n);
    float* arr = (float*) malloc(sizeof(float)*n);
    if (arr == NULL){ exit(1);}
    for (int i=0; i < n; i++){
        scanf("%f", &arr[i]);
    }
    //print arr before
    printf("Before:\n");
    for (int i = 0; i < n; i++){
        printf("%.3f ", arr[i]);
    }
    printf("\n");
    divby5(arr, n);
    //print arr after
    printf("After:\n");
    for (int i = 0; i < n; i++){
        printf("%.3f ", arr[i]);
    }
    printf("\n");
    free(arr);
    return 0;
}
