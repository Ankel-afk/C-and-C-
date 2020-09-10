/*
 CH-230-A
 a3 p5.[c or cpp or h]
 Jose Biehl
 jbiehl@jacobs-university.de
 */

#include <stdio.h>
//defining functions
double sum(double *arr, int n){
    double currentsum = 0;
    for(int idx=0; idx < n; idx++ ){
        currentsum = currentsum + arr[idx];
        /*printing an element in the array
        automatically dereferences the pointer*/
    }
    return currentsum;
    return 0;
}


int listtemps(double *arr, int n){
    for(int idx=0; idx < n; idx++ ){
        printf("%lf\n",arr[idx]);
        //loop listing values until reaching n
    }
     return 0;

}

double converttofarenheit(double *arr, int n){
    for(int idx=0; idx < n; idx++ ){
        arr[idx] =  arr[idx] * 9/5+32;
        //loop through the arr, convert each value in the arr to F.
    }
    listtemps(arr, n);
    /*function-ception calls listing function again because I am lazy,
     passing the newly-modified array */
    return 0;
}
//compute sum of values, divided by n
double average(double *arr, int n) {

    double sumofvalue = sum(arr, n);
    printf("mean is %f\n", sumofvalue/n);
    return sumofvalue/n;

}

int main(int argc, const char * argv[]) {
    char c;
    int n;

    printf("enter character: \n's' is for sum\n'p' is for list\n't' is for list in Farenheit\nany other character is the average of all temperatures: ");
    scanf("%c", &c);
    getchar();

    printf("specify the number of temperatures in celsius, n: ");
    scanf("%d", &n);


    double temperatures[n]; //arr temperatures with length n
//input loop for variables
    for (int i=0; i<n; i++){
        double placeholder;
        printf("enter the numbers by using ENTER: ");
        scanf("%lf", &placeholder);
        temperatures[i] = placeholder;
    }
    // typecast c beacuse switch doesn't accept chars
    switch ((int)c){
        case 115: // character 's'

            printf("sum is %lf\n", sum(&temperatures[0], n));
            // temperatures[0] is the beginning of array,
            break;
        case 112: // character 'p'
            printf("listing temperatures:\n");
            listtemps(&temperatures[0], n);
            break;
        case 116: // character 't/
            printf("converting to Farenheit and printing\n");
            converttofarenheit(&temperatures[0], n);
            break;
        default: // any other character
            printf("calculating mean\n");
            average(&temperatures[0], n);
    }
    return 0;
}
