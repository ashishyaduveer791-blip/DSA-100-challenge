#include <Stdioh>
#include <stdlib.h>

// crete strruct
struct node
{
    int data;
    struct node *left;
    struct node *right;
}
// ctrate a node
struct node *cretenode(int data)
{
    struct node *neanode = (struct node *)malloc(sizeof(struct node));
    newwnode->data = data;
    newnode->left = NULL;
    newnode->right = NULL;
    return newnode;
}

// count newnode
int counleafnode(struct node *root)
{
    if (root == NULL)
        return 0;

    // if node has noo child  and right subtree
    return countleafnode(root->left) + counleafnode(root->right);
}

int main()
{
    struct node *root = ctraatnode(1);
    root->left = cretenode(5);
    root->left = cretenode(10);
    root->left->left = cretenode(4);
    root->left->right = cretenode(15);
    int leafCount = counleafnode(root);
    printf("Number of eaf nodes= %d\n", leafCount);
    return 0;
}
