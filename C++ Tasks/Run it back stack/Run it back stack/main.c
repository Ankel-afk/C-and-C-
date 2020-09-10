//
//  main.c
//  Run it back stack
//
//  Created by Jose Ignacio Biehl on 09.12.19.
//  Copyright © 2019 Jose Biehl. All rights reserved.
//

#include <stdio.h>
struct stack{
    unsigned int count;
    int array[32];
} typedef Stack;
void make_stack(Stack*s){
    s->count = 0;
}
void push_stack(Stack* s, int val){
    if (s->count < 32){
        s->array[s->count++] = val;
    }
    else{
        printf("stack full!\n");
    }
}

void pop_stack(Stack* s, int* val){
    if (s->count > 0){
    *val = s->array[s->count-1];
    s->count--;
    }
    else{
        printf("stack is empty!\n");
    }
}
void print_stack(const Stack*s){
    for(int i = s->count-1; i>=0; i--){
        printf("%d", s->array[i]);
    }
    printf("\n");
    
    
}


int main(int argc, const char * argv[]) {
    unsigned int bin;
    scanf("%d", &bin);
    Stack list;
    make_stack(&list);
    while(bin != 0){
        push_stack(&list, bin % 2);
        bin/=2;
    }
    print_stack(&list);
    return 0;
}
