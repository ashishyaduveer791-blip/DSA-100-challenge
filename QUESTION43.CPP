// solving recusin
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

Node* buildTree() {
    int data;
    cin >> data;

    if (data == -1)
        return NULL;

    Node* root = new Node(data);

    root->left = buildTree();
    root->right = buildTree();

    return root;
}

void levelOrderTraversal(Node* root) {
    if (root == NULL)
        return;

    cout << root->data << " ";
    levelOrderTraversal(root->left);
    levelOrderTraversal(root->right);
}

int main() {
    cout << "Enter nodes (-1 for NULL): ";
    Node* root = buildTree();

    cout << "Traversal: ";
    levelOrderTraversal(root);

    return 0;
}