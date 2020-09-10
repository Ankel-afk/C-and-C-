/*
CH-230-A
a8 p11.[c or cpp or h]
Jose Biehl
jbiehl@jacobs-university.de
*/

#include <stdlib.h>
#include <stdio.h>
//print names of files
void printnames(char** names, int n){
    for( int i = 0; i < n; i++)
        printf("%s\n", names[i]);
}
//closes files and frees FILE**
void liberateFILE(FILE** victim, int n){
    for (int i = 0; i < n; i++){
        fclose(victim[i]);
    }
    free(victim);
}
//frees **arr
void liberateARR(char** victim, int n){
    for (int i = 0; i < n; i++){
        free(victim[i]);
    }
    free(victim);
}

int main(int argc, const char * argv[]) {
    // insert code here...

    int n;
    scanf("%d", &n);
    //POINTER TO FILE POINTER OF N SIZE
    FILE **filenames = (FILE**)malloc(sizeof(FILE*)*n);
    //used to store the names of the files bcuz why not
    char** names = (char**) malloc(sizeof(char*)*n);
    if(names == NULL){exit(1);}
    //open n filepointers as part of filenames
    for(int i = 0; i < n; i++){
        names[i] =( char*) malloc(sizeof(char)*30);
        filenames[i] = (FILE*)malloc(sizeof(FILE)*2);
        if (names[i] == NULL) {exit(1);}
        scanf("%s", names[i]);
        filenames[i] = fopen(names[i], "r");
        if (filenames[i] == NULL) {
            printf("file number %d could not be allocated", i);
            exit(1);
        }
    }
    char buffer[64];
    FILE* destination;
    destination = fopen("output.txt", "w");
    if (destination == NULL) {exit(1);}
    printf("concatenating the content of %d files . . .\n", n);
    printf("The result is:\n");
    //prints buffer to screen and saves to output file.
    for (int i = 0; i < n; i++){
        fread(buffer, 64, 1, filenames[i]);
        //corner case: extra \n being printed
        if (i == n-1){
            for(int i = 63; i >= 0; i--){
                if (buffer[i] == '\n'){
                    buffer[i] = '\0';
                    break;
                }
            }
        }
        printf("%s", buffer);
        fwrite(buffer, 64, 1, destination);
        
    }
    //frees up allocated memory
    liberateARR(names, n);
    liberateFILE(filenames, n);
   
    fclose(destination);
    
    printf("The result was written into output.txt\n");
    return 0;
}
