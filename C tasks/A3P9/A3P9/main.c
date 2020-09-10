/*
 CH-230-A
 a3 p9.[c or cpp or h]
 Jose Biehl
 jbiehl@jacobs-university.de
 */

#include <stdio.h>


double sum25(double v[], int n) {
    if ( n > 5 ) {
         return v[2] + v[5];
    }
    else {
        return -111;
    }
}

void listnums(double arr[], int n) {
    for (int i=0; i < n; i++)
        printf("%lf\n", arr[i]);
}


int main(int argc, const char * argv[]) {
    int n;

    //printf("enter keyboard value n: ");
    scanf("%d", &n);

    if (n > 20){ // not more than 20 doubles
        printf("n is greater than 20, setting limit to 20 doubles\n");
        n = 20;
               }

    double numbers[n]; //arr temperatures with length n


    for (int i=0; i<n; i++){
        double placeholder;
        //printf("enter the numbers by using ENTER: ");
        scanf("%lf", &placeholder);
        numbers[i] = placeholder;
    }
    if (sum25(numbers, n) == -111) {
        //listnums(numbers, n);
        printf("One or both positions are invalid\n");
    }

    else{
        printf("sum=%lf\n", sum25(numbers, n));
        //listnums(numbers, n);


    }
    return 0;
}
