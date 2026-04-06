#include <iostream>
#include <vector>
using namespace std;

// Node structure
class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};

// Global index for building tree
int idx = -1;

// Build tree from preorder
Node *buildTree(vector<int> &preorder)
{
    idx++;

    if (preorder[idx] == -1)
    {
        return NULL;
    }

    Node *root = new Node(preorder[idx]);
    root->left = buildTree(preorder);
    root->right = buildTree(preorder);

    return root;
}

// Height function
int height(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }

    int leftht = height(root->left);
    int rightht = height(root->right);

    return max(leftht, rightht) + 1;
}

int main()
{
    vector<int> preorder = {1, 2, -1, -1, 3, 4, -1, 5, -1, -1, -1};

    Node *root = buildTree(preorder);

    cout << "Height: " << height(root) << endl;

    return 0;
}