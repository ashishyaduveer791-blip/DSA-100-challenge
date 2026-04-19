#include <iostream>
#include <vector>
using namespace std;

// Definition of Node
struct Node
{
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};

// Build tree from preorder (with -1 as NULL)
int idx = -1;
Node *build(vector<int> &preorder)
{
    idx++;
    if (preorder[idx] == -1)
    {
        return NULL;
    }

    Node *root = new Node(preorder[idx]);
    root->left = build(preorder);
    root->right = build(preorder);

    return root;
}

// Height of tree
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
    vector<int> preorder = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};

    Node *root = build(preorder);

    cout << "Height: " << height(root) << endl;

    return 0;
}