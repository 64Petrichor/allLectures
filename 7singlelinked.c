#include <stdio.h>
#include <stdlib.h>


struct node {
    int data;
    struct node* next;
};

// Function to print the linked list
void printlinkedlist(struct node* head) {
    struct node* current = head;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

// Function to add a node at the end of the linked list
void addNodeToTail(struct node** head, int data) {
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->next = NULL;

    if (*head == NULL) {
        *head = newnode;
        return;
    }

    struct node* current = *head;
    while (current->next != NULL) {
        current = current->next;
    }
    current->next = newnode;
}

// Function to add a node in the middle of the linked list
void addNodeToMiddle(struct node* head, int data, int position) {
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->next = NULL;

    struct node* temp = head;
    for (int i = 0; i < position - 1; i++) {
        if (temp == NULL) return; // Safety check
        temp = temp->next;
    }
    newnode->next = temp->next;
    temp->next = newnode;
}

int main() {
    int nodecount;
    printf("Enter number of nodes: ");
    scanf("%d", &nodecount);

    if (nodecount <= 0) {
        printf("nodes <= 0, invalid\n");
        return 0;
    }

    // Create the head of the linked list
    struct node* head = NULL;

    // Add nodes to the tail
    for (int i = 1; i <= nodecount; i++) {
        int data;
        printf("Enter node %d data: ", i);
        scanf("%d", &data);
        addNodeToTail(&head, data);
    }

    // Print the linked list
    printf("Linked list: ");
    printlinkedlist(head);

    // Add a node to the middle
    int cinmiddle;
    printf("Enter the data you want to put exactly in the middle: ");
    scanf("%d", &cinmiddle);
    addNodeToMiddle(head, cinmiddle, nodecount / 2);

    // Print the updated linked list
    printf("Linked list: ");
    printlinkedlist(head);

    // Free allocated memory
    struct node* current = head;
    struct node* nxtnode = NULL;
    while (current != NULL) {
        nxtnode = current->next;
        free(current);
        current = nxtnode;
    }

    return 0;
}
