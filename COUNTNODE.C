#include <stdio.h>
#include <stdlib.h>

// Structure of tree node
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
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// Function to count nodes
int countNodes(struct Node *root)
{

    // Base case: empty tree
    if (root == NULL)
        return 0;

    // Recursive case
    return 1 + countNodes(root->left) + countNodes(root->right);
}

int main()
{

    // Example tree:
    /*
            10
           /  \
          20   30
         / \
        40  50
    */

    struct Node *root = createNode(10);
    root->left = createNode(20);
    root->right = createNode(30);
    root->left->left = createNode(40);
    root->left->right = createNode(50);
    root->right->left = createNode(70);
    root->right->right = createNode(96);

    int total = countNodes(root);

    printf("Total number of nodes = %d\n", total);

    return 0;
}