//
//  main.c
//  A8P10
//
//  Created by Jose Ignacio Biehl on 27.10.19.
//  Copyright © 2019 Jose Biehl. All rights reserved.
//
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
struct node{
    char name[20];
    long int passwordpos;
    struct node* next;
};
struct node * push_front ( struct node * list , FILE* fp ) {
    struct node * newel ;
    char line[40];
    newel = (struct node *) malloc ( sizeof ( struct node ));
    if ( newel == NULL ) {
        printf (" Error allocating memory \n");
        return list ;
    }
    fgets(line, 40, fp);
    line[strlen(line)-1] = '\0';
    strcpy(newel->name, line);
    newel->passwordpos = ftell(fp);
    fgets(line, 40, fp);
    newel->next = list;
    return newel ;
}
void print_names ( struct node * my_list ) {
    struct node * p ;
    // printf("starting the printing\n");
    for ( p = my_list ; p; p = p -> next ) {
        printf ("%s ", p -> name ) ;
    }
    printf("\n");
}

int main(int argc, const char * argv[]) {
   
    int test;
    struct node* thing = NULL;
    char fname[20];
    scanf("%s", fname);
        
        
    
    FILE* fp = fopen(fname, "r");
    if (fp == NULL) exit(1);
    
    while (fscanf(fp, "%d", &test) == 1){
    thing = push_front(thing, fp);
    }
    char username[20];
    char password[20];
    char gottenpass[20];
    print_names(thing);
    while(1){
        struct node* cursor = thing;
        scanf("%s", username);
        scanf("%s", password);
        if(strncmp(username,"exit",4) == 1){
            printf("exiting...");
            return 0;
        }
        int found  = 0;
        while(cursor->next != NULL){
            if (cursor->name == username){
                fseek(fp, cursor->passwordpos, SEEK_SET);
                fgets(gottenpass, 20, fp);
                gottenpass[strlen(gottenpass)-1] = '\0';
                printf("got %s", gottenpass);
                if (strcmp(gottenpass, password)==0){
                    printf("access to user %s is granted\n", username);
                    break;
                    
                }
                else{
                    printf("access to user %s is denied\n", username);
                }
                
            }
            if (found == 0) printf("access to user %s is denied\n", username);
        }
    }
    
    //IDEA MAKE STRUCT NODES AFTER READING ONCE WITH FTELL
    return 0;
}
