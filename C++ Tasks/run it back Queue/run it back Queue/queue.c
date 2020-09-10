/**
 * @file queue.c
 */

#include <stdio.h>
#include <stdlib.h>

#include "queue.h"

void initialize_queue(Queue *pq)
{
    pq->front = pq->rear = NULL;
    pq->items = 0;
}

int queue_is_full(const Queue *pq)
{
    return pq->items == MAXQUEUE;
}

int queue_is_empty(const Queue *pq)
{
    return pq->items == 0;
}

int queue_item_count(const Queue *pq)
{
    return pq->items;
}

int enqueue(Item item, Queue *pq)
{
    Node* newnode = (Node*)malloc(sizeof(Node));
    if(!newnode)
        exit(1);
    newnode->item = item;
    newnode->next = NULL;
    if (pq->items == 0){
        pq->front= pq->rear = newnode;
        pq->items++;
        return 1;
    }
    else if(pq->items < MAXQUEUE){
        pq->rear->next = newnode;
        pq->rear = newnode;
        pq->items++;
        return 1;
    }
    return 0;
    

}

int dequeue(Item *pitem, Queue *pq)
{
    if (pq->items != 0){
        *pitem = pq->front->item;
        Node* cursor = pq->front;
        pq->front = pq->front->next;
        free(cursor);
        pq->items--;
        return 1;
        
    }
    else if(pq->items == 1){
        *pitem = pq->front->item;
        free(pq->front);
        pq->front = pq->rear = NULL;
        pq->items--;
        return 1;
    }
    else{
        printf("error! nothing to dequeue!\n");
        return 0;
    }

}

void empty_queue(Queue *pq)
{
    Item dummy;
    while (!queue_is_empty(pq)) {
        dequeue(&dummy, pq);
    }
}
void printq(Queue*pq){
    printf("contents of the queue: ");
    for(Node* cursor = pq->front; cursor != NULL; cursor=cursor->next){
        printf("%d ", cursor->item);
    }
    printf("\n");
    
    
}
