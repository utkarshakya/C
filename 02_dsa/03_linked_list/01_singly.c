// Creating and Traversing a Singly Linked List

#include <stdio.h>
#include <stdlib.h>

// Defining a node structure for out Linked List
struct Node
{
    int data;
    struct Node *next;
};

void printList(struct Node *head){
    struct Node *current = head;
    while (current != NULL)
    {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
    
}

int main(){
    // Dynamically allocating memory for n nodes
    struct Node* head = (struct Node *)malloc(sizeof(struct Node));
    struct Node* second = (struct Node *)malloc(sizeof(struct Node));
    struct Node* third = (struct Node *)malloc(sizeof(struct Node));

    // Checking for errors
    if(head == NULL || second == NULL || third == NULL){
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Insert data and Link the nodes so that they form a linked list
    head->data = 8;
    head->next = second;

    second->data = 9;
    second->next = third;

    third->data = 10;
    third->next = NULL; // End of the list

    // Printing the list
    printList(head);

    // Free the memory
    free(third);
    free(second);
    free(head);

    return 0;
}