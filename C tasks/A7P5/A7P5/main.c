/*
 CH-230-A
 a7 p5.[c or cpp or h]
 Jose Biehl
 jbiehl@jacobs-university.de
 */


#include <stdio.h>
#include <stdlib.h>
int cmpascend( const void * va , const void * vb ) {
    const int* a = ( const int *) va ;
    const int* b = ( const int *) vb ;
    if (* a < * b ) return -1;
    else if (* a > * b ) return 1;
    else return 0;
    }

int cmpdescend(const void* va, const void* vb) {
    const int*a = (const int*) va;
    const int*b = (const int*) vb;
    if (*a > *b ) return -1;
    else if (*a < *b) return 1;
    else return 0;

}
void print_array(int* values, size_t n){
    for (int i = 0 ; i < n; i++) printf("%d ", values[i]);
    printf("\n");
}

int main(int argc, const char * argv[]) {
    size_t n;
    char a;
    scanf("%lu", &n);
    int* arr = (int*) malloc(sizeof(int)* n);
    if (arr == NULL) {exit(1);}
    int (*fct)(const void*, const void*);

    //get input
    for (int i = 0; i< n; i++){
        scanf("%d", &arr[i]);
    }

    int cont = 1;
    while(cont == 1){
        scanf(" %c", &a);
        switch(a){
                //sort ascending
            case 'a':
                fct = &cmpascend;
                qsort(arr, n, sizeof(int), fct);
                print_array(arr, n);
                break;
            case 'd':
                //sort descending
                fct = &cmpdescend;
                qsort(arr, n, sizeof(int), fct);
                print_array(arr, n);
                break;
            case 'e':
                free(arr);
                cont = 0;
                break;
            default:
                printf("Invalid letter\n");
        }
    }
    return 0;
}
