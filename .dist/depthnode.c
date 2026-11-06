#include <stdio.h>
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

// Recursive function to find depth
int findDepth(struct Node *root, int key, int depth)
{

    if (root == NULL)
        return -1;

    if (root->data == key)
        return depth;

    int left = findDepth(root->left, key, depth + 1);
    if (left != -1)
        return left;

    return findDepth(root->right, key, depth + 1);
}

int main()
{

    /*
            1
           / \
          2   3
         / \
        4   5
    */

    struct Node *root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);
    root->left->right->left = createNode(12);

    int key = 1;

    int depth = findDepth(root, key, 0);

    printf("Depth of node %d = %d\n", key, depth);

    return 0;
}