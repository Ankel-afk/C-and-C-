//
//  main.c
//  PP2
//
//  Created by Jose Ignacio Biehl on 03.12.19.
//  Copyright © 2019 Jose Biehl. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    double dinput;
    float finput;
    int iinput;
    scanf("%lf", &dinput);
    scanf("%f", &finput);
    scanf("%d", &iinput);
    double product = finput * iinput * dinput;
    printf("%lf\n", product);
    double* r_ptr = &product;
    *r_ptr += 5;
    printf("%lf", *r_ptr);
    return 0;
}
