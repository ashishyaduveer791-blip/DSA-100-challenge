#include <stdio.h>
#define MAX 5

int stack[MAX];
int top = -1;

// Push function (for testing pop)
void push(int value)
{
    if (top == MAX - 1)
    {
        printf("Stack Overflow!\n");
    }
    else
    {
        stack[++top] = value;
    }
}

// POP function
void pop()
{
    if (top == -1)
    {
        printf("Stack Underflow! Cannot pop\n");
    }
    else
    {
        int deleted = stack[top];
        top--;
        printf("%d popped from stack\n", deleted);
    }
}

// Display function
void display()
{
    if (top == -1)
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("Stack elements are:\n");
        for (int i = top; i >= 0; i--)
        {
            printf("%d\n", stack[i]);
        }
    }
}

int main()
{
    push(10);
    push(20);
    push(30);

    display();

    pop(); // removes 30
    pop(); // removes 20
    pop(); // removes 10
    pop(); // underflow

    display();

    return 0;
}