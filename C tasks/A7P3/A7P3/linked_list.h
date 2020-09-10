//
//  linked_list.h
//  A7P1
//
//  Created by Jose Ignacio Biehl on 15.10.19.
//  Copyright © 2019 Jose Biehl. All rights reserved.
//
#pragma once


struct list {
    int num;
    struct list *next;
};
//add element to the front
struct list * push_front ( struct list * my_list , int value );

//add elem to the back
struct list * push_back ( struct list * my_list , int value );
//delete an element at the beginning
struct list* delelem(struct list * my_list);
struct list* add(struct list* my_list, int pos, int value);
//reverses the list
struct list* reverse(struct list* my_list) ;

//print a linked list
void print_list ( struct list * my_list ) ;

void dispose_list ( struct list * my_list ) ;

