//
//  main.c
//  PP13
//
//  Created by Jose Ignacio Biehl on 07.12.19.
//  Copyright © 2019 Jose Biehl. All rights reserved.
//
/*
 Therefore, consider the following bit masks:
 const unsigned char regular = 1<<0;
 const unsigned char espresso = 1<<1;
 const unsigned char double_espresso = 1<<2;
 const unsigned char milk = 1<<3;
 const unsigned char cream = 1<<4;
 const unsigned char soy_milk = 1<<5;
 const unsigned char sugar = 1<<6;
 const unsigned char sweetener = 1<<7;
 To test the coffee machine, please write a program fragment that creates a regular coffee with
 milk and sugar.
 
 */
#include <stdio.h>
struct coffee {
int id;
char property;
};



const unsigned char regular = 1<<0;
const unsigned char espresso = 1<<1;
const unsigned char double_espresso = 1<<2;
const unsigned char milk = 1<<3;
const unsigned char cream = 1<<4;
const unsigned char soy_milk = 1<<5;
const unsigned char sugar = 1<<6;
const unsigned char sweetener = 1<<7;

void set_coffee_property(struct coffee* c, const unsigned char property){
    c->property = c->property | property;
}
void  unset_coffee_property(struct coffee* c, const unsigned property){
    c->property = c->property ^ property;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    struct coffee cafe;
    
    set_coffee_property(&cafe, regular);
    set_coffee_property(&cafe, milk);
    set_coffee_property(&cafe, sugar);
    
    return 0;
}
