#include <stdio.h>
#define MAX 5

int queue[MAX];
int front = -1, rear = -1;

// ENQUEUE function (Insert element)
void enqueue(int value)
{
    if (rear == MAX - 1)
    {
        printf("Queue Overflow! Cannot insert %d\n", value);
    }
    else
    {
        if (front == -1) // first element
            front = 0;

        rear++;
        queue[rear] = value;
        printf("%d inserted into queue\n", value);
    }
}

// Display function
void display()
{
    if (front == -1)
    {
        printf("Queue is empty\n");
    }
    else
    {
        printf("Queue elements are:\n");
        for (int i = front; i <= rear; i++)
        {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}

int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);

    // This will cause overflow
    enqueue(60);

    display();

    return 0;
}