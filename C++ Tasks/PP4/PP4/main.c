//
//  main.c
//  PP4
//
//  Created by Jose Ignacio Biehl on 03.12.19.
//  Copyright © 2019 Jose Biehl. All rights reserved.
//
#include <stdlib.h>
#include <math.h>
#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#include <string.h>
bool isgood(char arr[]){
    int count = 0;
    for (int i = 0; arr[i] != '\0'; i++){
        if(isdigit(arr[i]))
            count++;
    }
    if (count >=3 && strlen(arr) > 8)
        return true;
    else{
        return false;
    }




}
int main(int argc, const char * argv[]) {
    printf("%s\n", (isgood("hello this is a password")? "true" : "false" ));
    printf("%s\n", (isgood("passw0r13")? "true" : "false" ));
    printf("%s\n", (isgood("1984u29385u92485wjfnwier103894we")? "true" : "false" ));
    printf("%s\n", (isgood("1234567")? "true" : "false" ));
    return 0;
}
