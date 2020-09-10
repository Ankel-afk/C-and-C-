/*
 CH-230-A
 a7 p4.[c or cpp or h]
 Jose Biehl
 jbiehl@jacobs-university.de
 */

#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>
//prints uppercase

void printupper(char* strref, int n){
    for (int i = 0; i< n; i++){
        printf("%c", toupper(strref[i]));
    }
}
//prints lowercase
void printlower(char* strref, int n){
    for (int i = 0; i< n; i++){
        printf("%c", tolower(strref[i]));
    }
}
//swaps lower to upper and vice versa
void swapit(char * strref, int n){
    for (int i = 0;  i < n; i++){
        if(strref[i] >= 'a' && strref[i] <= 'z')
            printf("%c", toupper(strref[i]));
        else if (strref[i] >= 'A' && strref[i] <= 'Z'){
            
            
            printf("%c", tolower(strref[i]));
        }
        else{
            printf("%c", strref[i]);
        }
    }
    //if isupper print lower if not print in upper
}
//exits
void finish(char* str, int n){
    free(str);
    exit(0);
}

int main(int argc, const char * argv[]) {
    // insert code here...
    char* string = (char*) malloc(sizeof(char) * 100);
    if (string == NULL) {exit(1);}
    fgets(string, 50, stdin);
    void (*func_arr[5])(char*, int);
    func_arr[1] = printupper;
    func_arr[2] = printlower;
    func_arr[3] = swapit;
    func_arr[4] = finish;
    int a;
    while (1){
        scanf("%d", &a);
        func_arr[a](string, strlen(string));
    }
    //you took off points for not having this last time
    return 0;
}
