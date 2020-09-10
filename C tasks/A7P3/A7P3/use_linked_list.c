/*
 CH-230-A
 a7 p1.[c or cpp or h]
 Jose Biehl
 jbiehl@jacobs-university.de
 */

#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

int main(int argc, const char * argv[]) {
    char c;
    int x;
    int pos;
    struct list* ptr = NULL;
    int cont = 1;
    while (cont == 1){
        scanf(" %c", &c);
        //self-explanatory
        switch(c){
            case 'a':
                scanf("%d", &x);
                ptr = push_back(ptr, x);
                break;
            case 'b':
                scanf("%d", &x);
                ptr = push_front(ptr, x);
                break;
            case 'r':
                ptr = delelem(ptr);
                break;
            case 'p':
                print_list(ptr);
                break;
            case 'q':
                dispose_list(ptr);
                cont = 0;
                break;
            case 'i':
                scanf("%d", &pos);
                scanf("%d", &x);
                add(ptr, pos, x);
                break;
            case 'R':
                ptr = reverse(ptr);
                break;
            default:
                printf("not a valid command\n");
                break;
        }

    }
    return 0;
}
