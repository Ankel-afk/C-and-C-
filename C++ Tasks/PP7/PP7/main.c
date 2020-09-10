//
//  main.c
//  PP7
//
//  Created by Jose Ignacio Biehl on 03.12.19.
//  Copyright © 2019 Jose Biehl. All rights reserved.
//

#include <stdio.h>
#include <string.h>
int substitute_vowels(char* s, char ch){
    char vowels[5] = "aeiou";
    int count = 0;
    int strwalker = 0;
    while (*s != '\0'){
        for (int i = 0; vowels[i] != '\0'; i++){
            if (vowels[i] == s[0]){
                count++;
                s[strwalker] = ch;
                break;
            }
        }
        s++;
    }
    return count;
    
    
}


int main(int argc, const char * argv[]) {
    // insert code here...
    char s[] = "this is a sentence";
    int res = substitute_vowels(s, 'o');
    printf("%s\n", s);
    printf("%d\n", res);
    
    
    
    return 0;
}
