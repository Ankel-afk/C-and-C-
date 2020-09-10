//
//  main.c
//  PP9
//
//  Created by Jose Ignacio Biehl on 05.12.19.
//  Copyright © 2019 Jose Biehl. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n;
    char ch;
    scanf("%d", &n);
    getchar();
    scanf("%c", &ch);
    printf("\n");
    for(int i=0; i< n; i++){
        for(int j = 0; j <= i; j++){
            printf("%c", ch);
        }
        printf("\n");
    }
    
    // add your code completion below}
    
    
    
    
    
    return 0;
}
