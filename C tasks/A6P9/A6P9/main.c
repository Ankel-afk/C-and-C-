/*
EXAMPLE SOURCE CODE
 */

#include <stdio.h>
#include <stdlib.h>

struct list {
    int num;
    struct list *next;
};
//add element to the front
struct list * push_front ( struct list * my_list , int value ) {
    struct list * newel ;
    newel = (struct list *) malloc ( sizeof ( struct list ));
    if ( newel == NULL ) {
        printf (" Error allocating memory \n");
        return my_list ;
    }
    newel -> num = value ;
    newel -> next = my_list ;
    //  printf("added to front!\n");
    return newel ;
}

//add elem to the back
struct list * push_back ( struct list * my_list , int value ) {
    struct list * cursor , * newel ;
    cursor = my_list ;
    newel = ( struct list *) malloc ( sizeof ( struct list ));
    if ( newel == NULL ) {
        printf (" Error allocating memory \n");
        return my_list ;
    }
    newel -> num = value ;
    newel -> next = NULL ;
    if ( my_list == NULL )
        return newel ;
    while ( cursor -> next != NULL )
        cursor = cursor -> next ;
    cursor -> next = newel ;
    // printf("added to back!\n");
    return my_list ;
}
//delete an element at the beginning
struct list* delelem(struct list * my_list){
    struct list* cursor  = my_list;
    if (my_list == NULL){
        return my_list;
    }
    my_list = my_list->next;
    free(cursor);
    //    printf("deleted\n");
    return(my_list);
}
//ads new elem to function
struct list* add(struct list* my_list, int pos, int value){
    struct list * cursor ;
    cursor = my_list ;
    struct list* newel = (struct list *) malloc ( sizeof ( struct list ));
    if ( newel == NULL ) {
        printf (" Error allocating memory \n");
        return my_list ;
    }
    //counts at 1 to be 1 node from the needed one
    int poscount = 1;
    if (pos < 0){
        printf("Invalid position!\n");
        return my_list;
    }
    while ( cursor -> next != NULL && poscount < pos ){
        cursor = cursor -> next ;
        poscount++;
    }
    //if the position is bigger than the num of struct list
    if(pos > poscount){
        printf("Invalid position!\n");
        return my_list;
    }
    struct list* cursor2 = cursor;
    newel->num = value;
    cursor2 = cursor2->next;
    
    cursor->next= newel;
    newel->next = cursor2;
    
    // printf("added to back!\n");
    return my_list ;
}
//reverses the list
struct list* reverse(struct list* my_list) {
    //uses 3 reference pointers to iterate thru the linked list
    struct list* previous = NULL;
    struct list* current = my_list;
    struct list* next = NULL;
    while (current != NULL) {
        next = current->next;
        // reverses
        current->next = previous;
        // moves pointers ahead
        previous = current;
        current = next;
    }
    my_list = previous;
    //previous ends up as the last item at the end of while iteration.
    return my_list;
    
}

//print a linked list
void print_list ( struct list * my_list ) {
    struct list * p ;
    // printf("starting the printing\n");
    for ( p = my_list ; p; p = p -> next ) {
        printf ("%d ", p -> num ) ;
    }
    printf("\n");
}
//free everything
void dispose_list ( struct list * my_list ) {
    struct list * nextelem ;
    while ( my_list != NULL ) {
        nextelem = my_list -> next ;
        free ( my_list ) ;
        my_list = nextelem ;
    }
}

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
    
}

