#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Structure to represent stack
struct stack
{
    int size;  // maximum size of stack
    int top;   // index of top element
    char *arr; // array to store elements
};

// Check if stack is empty
int isEmpty(struct stack *ptr)
{
    return ptr->top == -1;
}

// Check if stack is full
int isFull(struct stack *ptr)
{
    return ptr->top == ptr->size - 1;
}

// Push element into stack
void push(struct stack *ptr, char val)
{
    if (isFull(ptr))
    {
        printf("Stack Overflow!\n");
    }
    else
    {
        ptr->arr[++ptr->top] = val; // increase top and insert value
    }
}

// Pop element from stack
char pop(struct stack *ptr)
{
    if (isEmpty(ptr))
    {
        return -1; // error value
    }
    else
    {
        return ptr->arr[ptr->top--]; // return top and decrease top
    }
}

// Get top element of stack
char stackTop(struct stack *sp)
{
    if (isEmpty(sp))
        return -1; // avoid crash
    return sp->arr[sp->top];
}

// Function to define precedence of operators
int precedence(char ch)
{
    if (ch == '*' || ch == '/')
        return 3;
    else if (ch == '+' || ch == '-')
        return 2;
    else
        return 0;
}

// Check if character is operator
int isOperator(char ch)
{
    return (ch == '+' || ch == '-' || ch == '*' || ch == '/');
}

// Function to convert infix to postfix
char *infixToPostfix(char *infix)
{

    // Create stack
    struct stack *sp = (struct stack *)malloc(sizeof(struct stack));
    sp->size = 100;
    sp->top = -1;
    sp->arr = (char *)malloc(sp->size * sizeof(char));

    // Create postfix array
    char *postfix = (char *)malloc((strlen(infix) + 1) * sizeof(char));

    int i = 0; // for traversing infix
    int j = 0; // for building postfix

    // Traverse infix expression
    while (infix[i] != '\0')
    {

        // If operand → add directly to postfix
        if (!isOperator(infix[i]))
        {
            postfix[j++] = infix[i++];
        }

        // If operator
        else
        {
            // If stack empty OR higher precedence → push
            if (isEmpty(sp) || precedence(infix[i]) > precedence(stackTop(sp)))
            {
                push(sp, infix[i]);
                i++;
            }
            // Else pop from stack and add to postfix
            else
            {
                postfix[j++] = pop(sp);
            }
        }
    }

    // Pop remaining operators from stack
    while (!isEmpty(sp))
    {
        postfix[j++] = pop(sp);
    }

    // End postfix string
    postfix[j] = '\0';

    return postfix;
}

// Main function
int main()
{
    char infix[100];

    // Take input from user
    printf("Enter infix expression: ");
    scanf("%s", infix);

    // Convert and print postfix
    char *postfix = infixToPostfix(infix);
    printf("Postfix expression: %s\n", postfix);

    return 0;
}