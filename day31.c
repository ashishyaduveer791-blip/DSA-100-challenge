#include <stdio.h>
#define MAX 5

int stack[MAX];
int top = -1;

// Check if stack is full
int isFull()
{
    return top == MAX - 1;
}

// Check if stack is empty
int isEmpty()
{
    return top == -1;
}

// Push operation
void push(int value)
{
    if (isFull())
    {
        printf("Stack Overflow\n");
    }
    else
    {
        top++;
        stack[top] = value;
        printf("%d pushed into stack\n", value);
    }
}

// Pop operation
void pop()
{
    if (isEmpty())
    {
        printf("Stack Underflow\n");
    }
    else
    {
        printf("%d popped from stack\n", stack[top]);
        top--;
    }
}

// Peek operation
void peek()
{
    if (isEmpty())
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("Top element is %d\n", stack[top]);
    }
}

// Display stack
void display()
{
    if (isEmpty())
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("Stack elements: ");
        for (int i = top; i >= 0; i--)
        {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}

// Main function
int main()
{
    push(10);
    push(20);
    push(30);
    display();

    pop();
    peek();
    display();

    return 0;
}