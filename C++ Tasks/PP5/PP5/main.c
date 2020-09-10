//
//  main.c
//  PP5
//
//  Created by Jose Ignacio Biehl on 03.12.19.
//  Copyright © 2019 Jose Biehl. All rights reserved.
//
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

bool odd(unsigned char data){
    return (data & 1? true : false);
    
}
int main(int argc, const char * argv[]) {
    // insert code here...
    printf("%s\n", (odd(5)? "true" : "false"));
    printf("%s\n", (odd(4)? "true" : "false"));
    printf("%s\n", (odd(51)? "true" : "false"));
    return 0;
}
