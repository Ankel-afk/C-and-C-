/*
CH-230-A
a8 p9.[c or cpp or h]
Jose Biehl
jbiehl@jacobs-university.de
*/

#include <stdio.h>
//set delimiters for words
int isdelim(char ch){
    char delimiters[8] = "\n .\t,?!\r";
    for (int i = 0; i < 8; i++){
        if (delimiters[i] == ch) return 1;
    }
    return 0;

}



int main(int argc, const char * argv[]) {
    // insert code here...
    char fname[20];

    FILE *fp;
    scanf("%s", fname);
    fp = fopen(fname, "r");
    char ch = fgetc(fp);
    int wordcounter = 0;
    char chprev = ch;
    while (ch != EOF){


//if a delimiter and a non-delim is prev char, we have a proper word after
        if(isdelim(ch) && !isdelim(chprev)){
            wordcounter++;
        }
        chprev = ch;
        ch = fgetc(fp);

    }
    printf("the file contains %d words\n", wordcounter);
    return 0;
}
