/*
 CH-230-A
 a3 p8.[c or cpp or h]
 Jose Biehl
 jbiehl@jacobs-university.de
 */

#include <stdio.h>
//summ function
float sum(float *arr, int n){
    float currentsum = 0;
    for(int idx=0; idx < n; idx++ ){
        currentsum = currentsum + arr[idx];

    }
    return currentsum;
    return 0;
}
//average calculation function
float average(float *arr, int n) {

    float sumofvalue = sum(arr, n);
    printf("mean is %f\n", sumofvalue/n);
    return sumofvalue/n;
    //get the sum of the array, then divide by n
}

int main(int argc, const char * argv[]) {
    int n;

    float numbers[10]; //numbers to be input
    for (int i=0; i<10; i++){
        //for loop fills array
        float placeholder;
        printf("enter the numbers by using ENTER: ");
        scanf("%f", &placeholder);
        if (placeholder == -99.0){
            break;
            //break happens before autoincrement
        }
        else{
            numbers[i] = placeholder;
            n=i;
            
            printf("n is currently: %i\n", n);
        }
    }
    //computers count from 0 so add 1
    printf("sum is: %f\n", sum(&numbers[0], n+1));
    printf("average is: %f\n", average(&numbers[0], n+1));
}
