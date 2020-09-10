/*
 CH-230-A
 a4 p3.[c or cpp or h]
 Jose Biehl
 j.biehl@jacobs-university.de
 */

#include <stdio.h>
#include <math.h>
//calculate sum
float sum(float arr[], int num){
    float currentsum;
    for (int i =0; i < num; i++){
        currentsum = currentsum + arr[i];
    }
    return currentsum;
}
//calculate geometric mean
float geometric_mean(float arr[], int num){
    float currentmultiplication = 1;
    //start from 1 so that answer is not 0
    for (int i= 0; i< num; i++){
        currentmultiplication = currentmultiplication * arr[i];
    }
    printf("current multiplication is: %f\n", currentmultiplication);
    float power = (float)(1/(float)num);
    return powf(currentmultiplication, power);
    }
/*find highest number by comparing every
 element in the for loop to a registry*/
float highestnumber(float arr[], int num){
    float reference = arr[0];
    for (int i=0; i < num; i++)
        if (arr[i] > reference){
            reference = arr[i];
        }
    return reference;
}
/*find highest number by comparing every
 element in the for loop to a registry*/
float lowestnumber(float arr[], int num){
    float reference = arr[0];
    for (int i=0; i < num; i++)
        if (arr[i] < reference){
            reference = arr[i];
        }
    return reference;
}

int main(int argc, const char * argv[]) {
    printf("input array\n");
    float array[15];
    int i;
    //input up to 15 values
    for (i=0; i < 15 ; i++){
        float input;
        scanf("%f", &input);
        //stop if number is negative
        if (input < 0){

            break;
        }
        array[i] = input;
    }
    printf("ending array input...\n");
    char c;
    getchar();
    scanf("%c", &c);


    switch (c){
        case 'm': //geom mean
            printf("geometric mean=%f\n", geometric_mean(array, i));
            break;
        case 'h': //highest num
            printf("highest number=%f\n", highestnumber(array, i));
            break;
        case 'l': //lowest num
            printf("lowest number=%f\n", lowestnumber(array, i));
            break;
        case 's': //sum
            printf("sum=%f\n", sum(array, i));
            break;
        default:
            printf("command not found\n");
    }

    return 0;
}
