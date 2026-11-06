#include <stdio.h>
#include <stdlib.h>

// node struct
struct Node
{
    int data;
    struct Node *prev;
    struct Node *next;
};

struct Node *front = NULL;
struct Node *rear = NULL;

// insert at front
void insertion(int x)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = x;

    if (front == NULL)
    {
        front = rear = newNode;
        newNode->prev = newNode->next = NULL;
    }
    else
    {
        newNode->next = front;
        newNode->prev = NULL;
        front->prev = newNode;
        front = newNode;
    }
}

// insert at rear
void insertRear(int x)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = x;

    if (rear == NULL)
    {
        front = rear = newNode;
        newNode->prev = newNode->next = NULL;
    }
    else
    {
        newNode->prev = rear;
        newNode->next = NULL;
        rear->next = newNode;
        rear = newNode;
    }
}

// delete from front
void deletefront()
{
    if (front == NULL)
    {
        printf("Deque Underflow\n");
        return;
    }

    struct Node *temp = front;
    printf("Deleted: %d\n", temp->data);

    if (front == rear)
    {
        front = rear = NULL;
    }
    else
    {
        front = front->next;
        front->prev = NULL;
    }

    free(temp);
}

// delete from rear
void deleterear()
{
    if (rear == NULL)
    {
        printf("Deque Underflow\n");
        return;
    }

    struct Node *temp = rear;
    printf("Deleted: %d\n", temp->data);

    if (front == rear)
    {
        front = rear = NULL;
    }
    else
    {
        rear = rear->prev;
        rear->next = NULL;
    }

    free(temp);
}

// display
void display()
{
    struct Node *temp = front;

    if (temp == NULL)
    {
        printf("Deque is empty\n");
        return;
    }

    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

// main
int main()
{
    insertion(10);
    insertion(20);
    insertion(15);
    insertion(18);
    insertion(19);

    display();

    deletefront();
    deleterear();

    display();

    return 0;
}