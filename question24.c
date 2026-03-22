#include <stdio.h>
#include <stdlib.h>

// Node structure
struct Node
{
    int data;
    struct Node *next;
};

// Function to delete first occurrence
void deleteKey(struct Node **head, int key)
{
    struct Node *temp = *head;
    struct Node *prev = NULL;

    // If first node contains key
    if (temp != NULL && temp->data == key)
    {
        *head = temp->next;
        free(temp);
        return;
    }

    // Traverse list
    while (temp != NULL && temp->data != key)
    {
        prev = temp;
        temp = temp->next;
    }

    // If key not found
    if (temp == NULL)
        return;

    // Delete node
    prev->next = temp->next;
    free(temp);
}

// Function to print list
void display(struct Node *node)
{
    while (node != NULL)
    {
        printf("%d -> ", node->data);
        node = node->next;
    }
    printf("NULL\n");
}

int main()
{
    // Creating nodes manually (10 → 20 → 40 → 15)

    struct Node *head = (struct Node *)malloc(sizeof(struct Node));
    struct Node *second = (struct Node *)malloc(sizeof(struct Node));
    struct Node *third = (struct Node *)malloc(sizeof(struct Node));
    struct Node *fourth = (struct Node *)malloc(sizeof(struct Node));

    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = third;

    third->data = 40;
    third->next = fourth;

    fourth->data = 15;
    fourth->next = NULL;

    printf("Original Linked List:\n");
    display(head);

    deleteKey(&head, 20);

    printf("After Deleting First Occurrence of 20:\n");
    display(head);

    return 0;
}