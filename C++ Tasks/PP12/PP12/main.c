//
//  main.c
//  PP12
//
//  Created by Jose Ignacio Biehl on 07.12.19.
//  Copyright © 2019 Jose Biehl. All rights reserved.
//


#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct river {
char name[40];
int length;
int drainage_area;
};

int comparator(const void* one, const void* two){
    int length1 = ((struct river*)one)->length;
    int  length2 = ((struct river*)two)->length;
    return (length1 - length2);
}




int main(int argc, const char * argv[]) {
    // insert code here...
    FILE* input = fopen("data.txt", "r");
    struct river list[30];
    int len, drain;
    char n[40];

    int (*comparator_ptr)(const void*, const void*) = &comparator;

    int i;
    for(i = 0; fscanf(input, "%s %d %d", n, &len, &drain) != EOF; i++){
        strcpy( list[i].name, n);
        list[i].length=len;
        list[i].drainage_area = drain;
    }
    //pass the actuall number of files that we counted
    qsort(list, i, sizeof(struct river), comparator_ptr);
    FILE* output = fopen("output.txt", "w");
    if(!output){exit(-1);}
    for(int j =0; j < i; j++){
        fprintf(output, "%s %d %d\n", list[j].name, list[j].length, list[j].drainage_area);
        printf("printing: %s %d %d\n", list[j].name, list[j].length, list[j].drainage_area);
    }











    return 0;
}
