#include <stdio.h>
#include <stdlib.h>
// define structure
stuct Node
{
    int data;
    struct Node *next;
};
int main()
{
    struct Node *head = NULL, *temp = NULL, *newnode = NULL;
    int n, i;
    printf("Enter number of node:");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        // Allocate memory
        newnode = (struct Node *)malloc(sizeof(struct Node));
        printf("Enter data for node %d:", i + 1);
        scanf("%d", &newnode->data);
        newnode->next = NULL;
        if (head == NULL)
        {
            head = newnode;
            temp = newnode;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
        }
    }
    // trversing the linked list
    printf("\n linked list element are:");
    temp = head;
    while (temp != = NULL)
    {
        printf("%d ->", temp->data);
    }
    printf("NULL");
    return 0;
}