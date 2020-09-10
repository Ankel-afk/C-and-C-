//
//  main.c
//  PP1
//
//  Created by Jose Ignacio Biehl on 03.12.19.
//  Copyright © 2019 Jose Biehl. All rights reserved.
//

#include <stdio.h>


int main(int argc, const char * argv[]) {
    int n;
    scanf("%d", &n);
    
    for (int i =0; i < n; i++){
        for(int j = 0; j <= i; j++){
            printf("%c", 'a'+j);
        }
        printf("\n");
    }
    return 0;
}
