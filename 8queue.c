#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node * next;
};

struct que {
    struct node* front;
    struct node* end;
};

void enqueue (int value, struct que* q) {
    struct node* newnode = (struct node*) malloc (sizeof(struct node));
    newnode -> data = value;
    newnode -> next = NULL;
    if ((q->front == NULL) && (q->end == NULL)) q->front = q->end = newnode; 
    else {
        q->end->next = newnode;
        q->end = newnode;
    }
}

int dequeue(struct que* q) {
    if (q->front == NULL) {
        printf("its MT;( \n");
        return -1;
    }
    int temp = q->front->data;
    q->front = q->front->next;
    return temp;
}

void queuedisplay(struct que* q) {
    struct node* temp;
    if ((q->front == NULL)&&(q->end == NULL)) {
        printf("Queue is Empty\n");
    } 
    else {
        printf("The queue is: ");
        temp = q->front;
        while (temp != NULL) {
            printf("%d ", temp->data);
            temp = temp->next;
        }
        printf("\n");
    }
}

int isEmpty (struct que* q) {
    return ((q->front != NULL)&&(q->end != NULL));
}

int main () {
    struct que* q = (struct que*) malloc (sizeof(struct que*));
    q->front = NULL;
    q->end = NULL;

    enqueue(10, q);
    enqueue(20, q);
    enqueue(30, q);

    printf("Top element: %d\n", q->front->data);
    queuedisplay(q);
    while (!isEmpty(q)) {
        printf("Popped element: %d\n", dequeue(q));
    }
    //printf("Stack size: %d\n", size(s));
}