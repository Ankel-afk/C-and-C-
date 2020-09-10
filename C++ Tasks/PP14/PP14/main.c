//
//  main.c
//  PP14
//
//  Created by Jose Ignacio Biehl on 07.12.19.
//  Copyright © 2019 Jose Biehl. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    FILE* output = fopen("generate.txt", "w");
    if (!output)
        exit(1);
    char buffer[6];
    char ch = 'a';
    for(int i =0; i < 10; i++){
        sprintf(buffer, "%c %c%c\n", ch+i, ch+i,ch+i);
        fwrite(buffer, 5, 1, output);
        
    }
    fclose(output);
    return 0;
}
