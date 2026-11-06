#include <stdio.h>
#include <stdlib.h>

// Tree Node
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};

// Create new node
struct Node *createNode(int val)
{
    struct Node *node = (struct Node *)malloc(sizeof(struct Node));
    node->data = val;
    node->left = node->right = NULL;
    return node;
}

// Queue Node
struct QNode
{
    struct Node *treeNode;
    struct QNode *next;
};

// Queue
struct Queue
{
    struct QNode *front, *rear;
};

// Create Queue
struct Queue *createQueue()
{
    struct Queue *q = (struct Queue *)malloc(sizeof(struct Queue));
    q->front = q->rear = NULL;
    return q;
}

// Enqueue
void enqueue(struct Queue *q, struct Node *node)
{
    struct QNode *temp = (struct QNode *)malloc(sizeof(struct QNode));
    temp->treeNode = node;
    temp->next = NULL;

    if (q->rear == NULL)
    {
        q->front = q->rear = temp;
        return;
    }

    q->rear->next = temp;
    q->rear = temp;
}

// Dequeue
struct Node *dequeue(struct Queue *q)
{
    if (q->front == NULL)
        return NULL;

    struct QNode *temp = q->front;
    struct Node *node = temp->treeNode;

    q->front = q->front->next;

    if (q->front == NULL)
        q->rear = NULL;

    free(temp);
    return node;
}

// Check empty
int isEmpty(struct Queue *q)
{
    return q->front == NULL;
}

// Level Order Traversal
void levelOrder(struct Node *root)
{
    if (root == NULL)
        return;

    struct Queue *q = createQueue();
    enqueue(q, root);

    while (!isEmpty(q))
    {
        struct Node *curr = dequeue(q);
        printf("%d ", curr->data);

        if (curr->left)
            enqueue(q, curr->left);
        if (curr->right)
            enqueue(q, curr->right);
    }
}

// Driver code
int main()
{
    // Tree:
    //        1
    //       / \
    //      2   3
    //     / \   \
    //    4   5   6

    struct Node *root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);
    root->right->right = createNode(6);

    printf("Level Order Traversal: ");
    levelOrder(root);

    return 0;
}