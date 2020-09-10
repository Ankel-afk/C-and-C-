/*
 CH-230-A
 a4 p6.[c or cpp or h]
 Jose Biehl
 j.biehl@jacobs-university.de
 */

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int n;
    int* dyn_arr;
    printf("enter nuber of elements, n");
    scanf("%d", &n);

    dyn_arr = (int*)malloc(sizeof(int)*n);
      if (dyn_arr == NULL) {
        exit(1);
      }
    for(int* idx = dyn_arr; (idx - dyn_arr) < n; idx++){
        printf("enter int: ");
        getchar();
        scanf("%d", idx);
    }
    //no number is smaller than thiS!
    int secondmax = INT_MIN;
    int max = INT_MIN;
    /* iterate thru array to find max and min*/
    for(int* idx = dyn_arr; (idx - dyn_arr) < n; idx++){
        if (*idx > max){
            /*if the number is greater than
             the maximum, set the second maximum
             to the current max, and now set the
             max equal to the new number in the array */
            secondmax = max;
            max = *idx;
        }
        /*if the new number is between second max
         and new max, set the second max equal
         to that new number*/
        else if (*idx > secondmax){
            secondmax = *idx;
        }

    }
    printf("max = %d\nsecondmax = %d\n", max, secondmax);
    free(dyn_arr);

    return 0;
}
