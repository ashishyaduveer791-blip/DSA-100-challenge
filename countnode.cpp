#include <stdio.h>
#include <stdlib.h>

// node structure
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};

// create Node
struct Node *createNode(int val)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = val;
    newNode->left = newNode->right = NULL;
    return newNode;
}

// global index
int idx = -1;

// build tree from preorder
struct Node *buildTree(int preorder[], int n)
{
    idx++;

    if (idx >= n || preorder[idx] == -1)
    {
        return NULL;
    }

    struct Node *root = createNode(preorder[idx]);
    root->left = buildTree(preorder, n);
    root->right = buildTree(preorder, n);

    return root;
}

// count number of nodes
int countNode(struct Node *root)
{
    if (root == NULL)
    {
        return 0;
    }

    int left = countNode(root->left);
    int right = countNode(root->right);

    return left + right + 1;
}

int main()
{
    int preorder[] = {1, 2, -1, -1, 3, 4, -1, 5, -1, -1, -1};
    int n = sizeof(preorder) / sizeof(preorder[0]);

    struct Node *root = buildTree(preorder, n);

    printf("Tree Nodes: %d\n", countNode(root));

    return 0;
}