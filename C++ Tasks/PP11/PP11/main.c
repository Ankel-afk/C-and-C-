//
//  main.c
//  PP11
//
//  Created by Jose Ignacio Biehl on 07.12.19.
//  Copyright © 2019 Jose Biehl. All rights reserved.
//
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
struct node {
char str[20];
struct node* next;
};

struct node* insertBegin(struct node* list, char str[]){
    struct node* newel = (struct node*)malloc(sizeof(struct node));
    if (!newel){
        printf("error allocating memory for newel");
        return list;
    }
    strcpy(newel->str, str);
    newel->next = list;
    return newel;
}

void printList(struct node* list){
    
    for (struct node* cursor = list; cursor != NULL; cursor = cursor->next){
        printf("%s ", cursor->str);
    }
}



int main(int argc, const char * argv[]) {
    {
        int count;
        scanf("%d", &count);
        getchar();
        struct node *my_list = NULL;
        char arr[100];
        for(int i=0; i<count; i++)
        {
            fgets(arr,sizeof(arr),stdin);
            arr[strlen(arr) - 1] = '\0';
            my_list = insertBegin(my_list, arr);
            printList(my_list);
            printf("\n");
        }
        free(my_list);
        return 0;
    }
}
