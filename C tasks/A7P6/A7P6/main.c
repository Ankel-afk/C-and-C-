/*
 CH-230-A
 a7 p6.[c or cpp or h]
 Jose Biehl
 jbiehl@jacobs-university.de
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
struct person {
    char name[30];
    int age;
};
//swaps two structs
void swap(struct person* x, struct person* y){
    struct person xtemp;
    xtemp = *x;
    *x = *y;
    *y = xtemp;
}
//descends age
void descendage(struct person* x, struct person* y, int* sorted){
    size_t n;
    if (x->age == y->age) {
        n = ( strlen(x->name) < strlen(y->name) ? strlen(y->name) : strlen(x->name))+1;
        //+1 ensures we do a \0 comparison at the end so bigger wins always
        for (int i = 0; i < n; i++){
            //this is pain
            if (x->name[i] == y->name[i])
                continue;
            else if (x->name[i] > y -> name[i]){
                swap(x, y);
                *sorted = 1;
                return;
            }
            else if (x->name[i] < y->name[i] )
                return;
        }
    }
    else if (x->age > y->age){
        *sorted = 1;
        swap(x,y);
    }
    return;
}
//sorts ascending by age
void ascendage(struct person* x, struct person* y, int* sorted){
    size_t n;
    //corner case PLEASE TELL ME HOW TO MAKE THIS MORE EFFICIENT
    if (x->age == y->age) {
        n = ( strlen(x->name) < strlen(y->name) ? strlen(y->name) : strlen(x->name)) +1 ;
        for (int i = 0; i < n; i++){
            //this is pain
            if (x->name[i] == y->name[i])
                continue;
            else if (x->name[i] < y -> name[i]){
                swap(x, y);
                *sorted = 1;
                return;
            }
            else if (x->name[i] > y->name[i] )
                return;
        }
    }
    //imagine if it were this easy
    else if (x->age < y->age){
        swap(x,y);
        *sorted = 1;
        return;
    }
    return;
}
//sorts descending by name
void descendname(struct person* x, struct person* y, int* sorted){
    size_t n;
    if(x->name == y->name){
        if (x->age < y->age){
            swap(x,y);
            *sorted = 1;
            return;
        }
        return;
    }
        n = ( strlen(x->name) < strlen(y->name) ? strlen(y->name) : strlen(x->name)) +1 ;
        for (int i = 0; i < n; i++){
            //this is pain
            if (x->name[i] == y->name[i])
                continue;
            else if (x->name[i] > y -> name[i]){
                swap(x, y);
                *sorted = 1;
                return;
            }
            else if (x->name[i] < y->name[i] )
                return;
        }
    return;
    }
//sorts ascending by name
void ascendname(struct person* x, struct person* y, int* sorted){
    size_t n;
    if(x->name == y->name){
        if (x->age > y->age){
            swap(x,y);
            *sorted = 1;
            return;
        } else {return;}
    }
    n = ( strlen(x->name) < strlen(y->name) ? strlen(y->name) : strlen(x->name)) +1 ;
    for (int i = 0; i < n; i++){
        //this is pain
        if (x->name[i] == y->name[i])
            continue;
        else if (x->name[i] < y -> name[i]){
            swap(x, y);
            *sorted = 1;
            return;
        }
        else if (x->name[i] > y->name[i] )
            return;
    }
    return;
}



// A function to implement bubble sort
void bubbleSort(struct person* arr, int n, void (*fct)(struct person*, struct person*, int*)){
    int swapped = 1;
    while (swapped == 1){
        int i;
        swapped = 0;
        for (i = 1; i < n; i++){
            fct(&arr[i], &arr[i-1], &swapped);
        }
    }
}

void printlist(struct person* arr, int n){
    for (int i = 0; i < n; i++){
        printf("{%s, %d}; ", arr[i].name, arr[i].age);
        if (i+1 %  3 == 0){
            printf("\n");
        }
    }
}
int main(int argc, const char * argv[]) {
    int num;
    printf("enter number of persons: ");
    scanf("%d", &num);
    
    struct person* arr = (struct person*) malloc(sizeof(struct person) * num);
    char nameholder[30];
    int ageholder;
    for (int i = 0; i < num; i++){
        scanf(" %s", nameholder);
        scanf(" %d", &ageholder);
        arr[i].age = ageholder;
        strcpy(arr[i].name, nameholder);
    }
    bubbleSort(arr, num, &ascendage);
    printlist(arr, num);
    printf("\n");
    bubbleSort(arr, num, &ascendname);
    printlist(arr, num);
    printf("\n");
    return 0;
}
