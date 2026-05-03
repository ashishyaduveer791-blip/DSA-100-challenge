#include <iostream>
#include <queue>
#include <vector>
using namespace std;

struct node
{
    int data;
    node *left;
    node *right;

    node(int val)
    {
        data = val;
        left = right = NULL;
    }
};

vector<int> rightView(node *root)
{
    vector<int> ans;
    if (!root)
        return ans;

    queue<node *> q;
    q.push(root);

    while (!q.empty())
    {
        int size = q.size();

        for (int i = 0; i < size; i++)
        {
            node *curr = q.front();
            q.pop();

            if (i == size - 1)
                ans.push_back(curr->data);

            if (curr->left)
                q.push(curr->left);

            if (curr->right)
                q.push(curr->right);
        }
    }
    return ans;
}

int main()
{
    node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->right = new node(5);
    root->right->right = new node(4);

    vector<int> res = rightView(root);

    cout << "right view: ";
    for (int x : res)
        cout << x << " ";

    return 0;
}