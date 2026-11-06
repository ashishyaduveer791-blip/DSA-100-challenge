##include<stdio.h>
#include <stdlib.h>

    // Node structure
    struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};

// Create node
struct Node *createNode(int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}

// Insert in BST
struct Node *insert(struct Node *root, int data)
{
    if (root == NULL)
        return createNode(data);

    if (data < root->data)
        root->left = insert(root->left, data);
    else
        root->right = insert(root->right, data);

    return root;
}

// Preorder Traversal
void preorder(struct Node *root)
{
    if (root == NULL)
        return;

    printf("%d ", root->data); // Root
    preorder(root->left);      // Left
    preorder(root->right);     // Right
}

// Main
int main()
{
    struct Node *root = NULL;

    // Insert elements
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 70);
    insert(root, 20);
    insert(root, 40);
    insert(root, 60);
    insert(root, 80);

    printf("Preorder Traversal: ");
    preorder(root);

    return 0;
}