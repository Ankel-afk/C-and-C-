/*
 CH-230-A
 a5 p2.[c or cpp or h]
 Jose Biehl
 jbiehl@jacobs-university.de
 */
#include <stdio.h>
#include <stdlib.h>
//modify values of arr by 1/5
 void divby5(float arr[], int size){
     for (int i = 0; i < size; i++){
         arr[i] = arr[i]/5;
     }
 }



 int main(int argc, const char * argv[]) {
     // insert code here...
     int n=6;
     float arr[6] = {5.500, 6.500, 7.75, 8.00, 9.60, 10.360};
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
     return 0;
 }
