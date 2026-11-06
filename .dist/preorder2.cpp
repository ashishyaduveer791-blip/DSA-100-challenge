#include <iostream>
#include <vector>
#include <stack>
using namespace std;

// definition of TreeNode
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int x)
    {
        val = x;
        left = NULL;
        right = NULL;
    }
};

// preorder traversal using stack
vector<int> preorderTraversal(TreeNode *root)
{
    vector<int> ans;
    if (root == NULL)
        return ans;

    stack<TreeNode *> st;
    st.push(root);

    while (!st.empty())
    {
        TreeNode *node = st.top();
        st.pop();

        ans.push_back(node->val);

        if (node->right)
            st.push(node->right);

        if (node->left)
            st.push(node->left);
    }

    return ans;
}

// main function
int main()
{
    TreeNode *root = new TreeNode(1);
    root->right = new TreeNode(2);
    root->right->left = new TreeNode(3);

    vector<int> result = preorderTraversal(root);

    cout << "Preorder Traversal: ";
    for (int x : result)
    {
        cout << x << " ";
    }

    return 0;
}