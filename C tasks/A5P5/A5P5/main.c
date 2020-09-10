/*
 CH-230-A
 a5 p5.[c or cpp or h]
 Jose Biehl
 jbiehl@jacobs-university.de
 */

#include <stdio.h>
double scalarproduct(double *arr_v, double *arr_w, int n){
    double count = 0;
    for (int i=0; i< n; i++) {
        count = count + arr_v[i]*arr_w[i];
    }
    printf("Scalar product=%lf\n", count);
    return count;
}
//finds the smallest value, finds position w/ ptr
double smallest(double *arr, int n){
    double min = arr[0];
    int iref =0;
    for (int i = 0; i < n; i++){
        if (arr[i] < min){
            min = arr[i];
            iref = i;
        }
    }
    printf("The smallest = %lf\n", min);
    printf("Position of smallest = %d\n", iref);
    return min;
}
//finds the largest value, finds position w/ ptr
double largest(double *arr, int n){
    double max = arr[0];
    int iref = 0;
    for (int i = 0; i < n; i++){
        if (arr[i] > max){
            max = arr[i];
            iref = i;
        }
    }
    printf("The largest = %lf\n", max);
    printf("Position of largest = %d\n", iref);
    return max;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    int n;
    scanf("%d", &n);
    double arr_v[n];
    double arr_w[n];
    for(int i = 0; i < n; i++){
        scanf("%lf", &arr_v[i]);
    }
    for(int i = 0; i < n; i++){
        scanf("%lf", &arr_w[i]);
    }
    scalarproduct(&arr_v[0], &arr_w[0], n);
    smallest(&arr_v[0], n);
    largest(&arr_v[0], n);
    smallest(&arr_w[0], n);
    largest(&arr_w[0], n);


    return 0;
}
