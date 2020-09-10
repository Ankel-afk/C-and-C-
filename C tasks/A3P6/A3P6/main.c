/*
 CH-230-A
 a3 p6.[c or cpp or h]
 Jose Biehl
 jbiehl@jacobs-university.de
 */

#include <stdio.h>
float to_pounds(int kg, int g){
    float kgtopounds = (float)kg*2.2;
    float gtopounds = (float)g/1000*2.2;
    //1 g = 1000 kg
    float pounds = kgtopounds + gtopounds;
    return pounds;
}

int main(int argc, const char * argv[]) {
    int kg;
    int g;

    scanf("%d", &kg);
    scanf("%d", &g);
    printf("Result of conversion: %f\n", to_pounds(kg,g));
    return 0;
}
