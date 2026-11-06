#include <stdio.h>
#define MAX 5
int stack[MAX];
int top = -1;

//  function to push elements into stack

void push(int value)
{
    if (top == MAX - 1)
    {
        printf("Elemnts are full", value);
    }
    else
    {
        top++;
        stack[top] = value;
        printf("%d"pushed into stack\n",value);
    }
}

// functionn to display stack

void display()
{
    if (top == -1)
    {
        printf("Stack elemnts are: \n");
    }
}