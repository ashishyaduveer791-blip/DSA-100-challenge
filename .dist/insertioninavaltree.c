#include <stdio.h>
#include <stdlib.h>

// node ctreation
struct node
{
    int data;
    struct node *left;
    struct node *right;
    int height;
};

// unity max of two number
int max(int a, int b)
{
    return (a > b) ? a : b;
}

// get heught
int height(struct node *n)
{
    if (n == NULL)
        return 0;
    return n->height;
}
// crete new node
struct node *createnode(int data)
{
    struct node *node = (struct node *)malloc(sizeof(struct node));
    node->data = data;
    node->lefft = node->right = NULL;
    node->height = 1;
    return node;
}

// right rotation
struct node *rightrotated(struct node *y)
{
    struct node *x = y->left;
    struct node *t2 = x->right;
    x->right = y;
    y->left = t2;
    y->height = max(height(y->left), height(y->right))
}