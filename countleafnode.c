#include<stdio.h>
#include<stdlib.h>

// define struct of node

struct Node {
    int data;
    struct Node*left;
    struct Node*right;


};


// function to create a new node

struct Node*createNode(int val){
    struct Node*newNode=(struct Node*)malloc(sizeof(struct Node));
    newNode->data = val;
    newNode->left = NULL;
    newNode->right =  NULL;
    return newNode;
}

// function to count leaf nodes

int countLeafNode(struct Node*root){
    // base case
    if(root == NULL)
    return 0;

    // if leaf Node
    if(root->left == NULL && root->right == NULL)
    return 1;

    // recusion call
     return countLeafNode(root->left)+countLeafNode(root->right);

}

int main(){
    struct Node*root = createNode(1);
    root->left=createNode(2);
    root->right= createNode(3);
    root->left->left = createNode(4);
    root->right->right= createNode(5);

    printf("leaf node couunt: %d",countLeafNode(root));

    return 0;

}
