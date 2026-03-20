#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
int countNodes(struct Node *head)
{
    int count = 0;
    struct Node *current = head;
    while (current != NULL)
    {
        count++;
        current = current->next;
    }
    return count;
}
// helper funtion to add a node the node
void appened(struct Node **head, int data)
{
    struct Node *newNode = malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    if (*head == NULL)
    {
        *head = newNode;
        return;
    }
    struct Node *temp = *head;
    while (temp->next != NULL)
        temp = temp->next;
    temp->next = newNode;
}
int main()
{
    struct Node *head = NULL;
    appened(&head, 10);
    appened(&head, 20);
    appened(&head, 30);
    appened(&head, 40);
    printf("Number of node: %d\n", countNodes(head));
    return 0;
}