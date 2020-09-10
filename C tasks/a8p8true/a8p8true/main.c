/*
CH-230-A
a8 p8.[c or cpp or h]
Jose Biehl
jbiehl@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
int main(int argc, const char * argv[]) {
    // file declarations
    
    FILE* f1, *f2, *dest;
    f1 = fopen("text1.txt", "r");
    f2 = fopen("text2.txt", "r");
    dest = fopen("merge12.txt", "w");
    if(f1 == NULL || f2 == NULL || dest == NULL){
        printf("error allocating memory");
        exit(1);}
    
    char ch[800];
    //prints characters to newfile
    while (fgets(ch, 800, f1) != NULL){
        fprintf(dest, "%s", ch);
    }
    while (fgets(ch, 800, f2) != NULL){
        fprintf(dest, "%s", ch);
    }
    
    fclose(f1);
    fclose(f2);
    fclose(dest);
    fgets(ch, 80, f1);
    return 0;
}
