// INSERTION IN LINKED LIST

#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
} Node;

// Function To Print The Linked List
void printList(Node *head)
{
    Node *current = head;
    while (current->next != NULL)
    {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("%d\n", current->data);
}

// Function To Create A Node
Node *createNode(int data)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    if (newNode == NULL){
        printf("Memory allocation failed!\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function To Free The Memory
void deleteList(Node *head){
    Node *current = head;
    Node *nextNode = current;
    while(current != NULL){
        nextNode = current->next;
        free(current);
        current = nextNode;
    }
    printf("Linked List Deleted Successfully\n");
}

int main()
{
    // Creating A Linked List
    Node *head = createNode(10);
    Node *current = head;
    for (int i = 11; i <= 20; i++)
    {
        current->next = createNode(i);
        current = current->next;
    }

    printList(head);

    deleteList(head);
    return 0;
}