#include <stdio.h>
#include <stdlib.h>

// Structure of Node
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};

// Create new node
struct Node *createNode(int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}

// Function to find level
int findLevel(struct Node *root, int key, int level)
{
    if (root == NULL)
        return -1;

    if (root->data == key)
        return level;

    // search in left subtree
    int left = findLevel(root->left, key, level + 1);
    if (left != -1)
        return left;

    // search in right subtree
    return findLevel(root->right, key, level + 1);
}

// Main function
int main()
{
    struct Node *root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);

    int key = 5;

    int level = findLevel(root, key, 0);

    if (level != -1)
        printf("Level of node %d is %d\n", key, level);
    else
        printf("Node not found\n");

    return 0;
}