#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

struct node {
    int data;
    struct node* next;
};

void printlinkedlist(struct node* head) {
    struct node* current = head;
    while (current != NULL) {
        printf("%d", current->data);
        current = current->next;
    } printf("\n");
}

int main() {
    //in this file, we're
    struct node* head = NULL;
    struct node* n1 = (struct node*)malloc(sizeof(struct node));
    struct node* n2 = (struct node*)malloc(sizeof(struct node));
    struct node* n3 = (struct node*)malloc(sizeof(struct node));

    head = n1;
    n1->next = n2;
    n2->next = n3;
    n3->next = NULL;
    n1->data = 1;
    n2->data = 2;
    n3->data = 3;

    printlinkedlist(head);

    free(n1);
    free(n2);
    free(n3);
    //setting the nodes to NULL isn't neccesary isn't needed,
    //it jsut makes catching mistakes like allocating freed memory easier (it would jsut crash instead of continuing)
    n1 = NULL;
    n2 = NULL;
    n3 = NULL;

    return 0;
}