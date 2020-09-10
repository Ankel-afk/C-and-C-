/*
 CH-230-A
 a4 p9.[c or cpp or h]
 Jose Biehl
 j.biehl@jacobs-university.de
 */

#include <stdio.h>
#include <stdlib.h>
/*find highest number by comparing every
 element in the for loop to a registry*/
int lowestnumber(int arr[], int num){
    int reference = arr[0];
    for (int i=0; i < num; i++)
        if (arr[i] < reference){
            reference = arr[i];
        }
    return reference;
}

    /*find highest number by comparing every
     element in the for loop to a registry*/
float highestnumber(int arr[], int num){
    int reference = arr[0];
    for (int i=0; i < num; i++)
        if (arr[i] > reference){
            reference = arr[i];
        }
    return reference;
}
    /* calls lowestnumber and highestnumber and multiplies*/
int prodminmax(int arr[], int n){
    return lowestnumber(arr, n) * highestnumber(arr, n);
}
int main(int argc, const char * argv[]) {
    // insert code here...
    printf("enter integer n");
    int n;
    scanf("%d", &n);
    int* arr = (int*) malloc(sizeof(int) * n);
    if (arr == NULL) {
      exit(1);
    }
    for (int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    printf("product = %d\n", prodminmax(&arr[0], n));
    //use address of first item of dynamic array
    free(arr);
    return 0;
}
