#include <stdio.h>
#include <stdlib.h>

// define struture of a node
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};

// function to create a new node
struct Node *createNode(int value)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// INorder traversal function
void inorder(struct Node *root)
{
    if (root == NULL)
        return;
    inorder(root->left);       // visit left node
    printf("%d ", root->data); // visit root
    inorder(root->right);      // visit right subtree
}

// main function
int main()
{
    // cretaing a sample tree
    struct Node *root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->right->right = createNode(5);
    root->left->left->left = createNode(10);
    root->right->right->left = createNode(12);

    printf("inorder traversal:");
    inorder(root);
    return 0;
}