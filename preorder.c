#include <stdio.h>
#include <stdlib.h>

// Node structure
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};

// Create new node
struct Node *createNode(int value)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// Preorder traversal
void preorder(struct Node *root)
{
    if (root == NULL)
        return;

    printf("%d ", root->data); // Root
    preorder(root->left);      // Left
    preorder(root->right);     // Right
}

// Main function
int main()
{
    struct Node *root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->right->right = createNode(5);

    printf("Preorder traversal: ");
    preorder(root);

    return 0;
}