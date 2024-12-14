#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node * next;
};

struct stck {
    struct node* top;
};

int isEmpty(struct stck* s) {
    return ((s->top) == NULL); 
}

void push (int value, struct stck* s) {
    struct node* newnode = (struct node*) malloc (sizeof(struct node));
    newnode->data = value;
    newnode->next = s->top;
    (s->top) = newnode;
}

int pop(struct stck* s) {
    if (isEmpty(s)) return -1;
    struct node* temp = s->top;
    int popped = s->top->data;
    s->top = s->top->next;
    free(temp);
    return popped;
}

int peek(struct stck* s) {
    if (isEmpty(s)) return -1;
    return s->top->data;
}

int size(struct stck* s) {
    int count = 0;
    struct node* crrt = s->top;
    while (crrt != NULL) {
        count++;
        crrt = crrt->next;
    }
    return count;
}

void displaystack (struct stck* s) {
    if (isEmpty(s)) {
        printf("Stack is Empty\n");
        return;
    }
    printf("Stack elements: ");
    struct node* crrt = s->top;
    while (crrt != NULL) {
        printf("%d ", crrt->data);
        crrt = crrt->next;
    }
    printf("\n");
}

//to be used if there is a given max size of the stack
#define MAXSIZE 100
int isFull (struct stck* s) {
    return (size(s) == MAXSIZE);
}

int main () {
    struct stck* s = (struct stck*) malloc (sizeof(struct stck*));
    s->top = NULL;

    push(10, s);
    push(20, s);
    push(30, s);

    printf("Top element: %d\n", peek(s));
    printf("Stack size: %d\n", size(s));
    displaystack(s);
    while (!isEmpty(s)) {
        printf("Popped element: %d\n", pop(s));
    }
    printf("Stack size: %d\n", size(s));

    return 0;
}