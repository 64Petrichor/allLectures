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
        printf("%d ", current->data);
        current = current->next;
    } printf("\n");
}

int main() {
    int nodecount;
    printf("enter number of nodes: ");
    scanf("%d", &nodecount);
    if (nodecount <= 0) {printf("nodes <= 0, invalid"); return 0;}

    int cin;
    printf("enter node 1 data: ");
    scanf("%d", &cin);
    struct node* node = (struct node*)malloc(sizeof(struct node));
    struct node* head = node;
    node->data = cin;
    node->next = NULL;
    
    //add nodes to the tail
    struct node* prevnode = head;
    for (int i = 2; i <= nodecount; i++) {
        printf("enter node %d data: ", i);
        scanf("%d", &cin);
        node = (struct node*)malloc(sizeof(struct node));
        node->data = cin;
        node->next = NULL;
        prevnode->next = node; // puts the address of the newly craeted node in the next of the last node made
        prevnode = node; //makes the prevnode point to the newly created node
    }

    //print linked list
    printf("linked list: "); 
    printlinkedlist(head);

    //add node in the middle
    int cinmiddle, pos = nodecount / 2;
    printf("enter the data you want to put exactly in the middle: ");
    scanf("%d", &cinmiddle);
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    struct node* temp = head;
    newnode->data = cinmiddle;
    newnode->next = NULL;
    for (int i = 0; i < pos-1; i++) temp = temp->next;
    newnode->next = temp -> next;
    temp->next = newnode;

    //print linked list
    printf("linked list: "); 
    printlinkedlist(head);

    //erase
    struct node* current = head;
    struct node* nxtnode = NULL;
    while (current != NULL) {
        nxtnode = current->next;
        free(current);
        current = nxtnode;
    }
    head = NULL;
    node = NULL;







    return 0;
}
