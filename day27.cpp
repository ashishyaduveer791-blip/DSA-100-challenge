#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

// create new node
struct Node *newNode(int data)
{
    struct Node *node = (struct Node *)malloc(sizeof(struct Node));
    node->data = data;
    node->next = NULL;
    return node;
}

// find intersection
struct Node *getintersection(struct Node *head1, struct Node *head2)
{
    struct Node *a = head1;
    struct Node *b = head2;

    while (a != b)
    {
        if (a == NULL)
            a = head2;
        else
            a = a->next;

        if (b == NULL)
            b = head1;
        else
            b = b->next;
    }

    return a;
}

int main()
{
    // create common part
    struct Node *common = newNode(30);
    common->next = newNode(40);
    common->next->next = newNode(50);

    // list 1: 10 -> 20 -> 30 -> 40 -> 50
    struct Node *l1 = newNode(10);
    l1->next = newNode(20);
    l1->next->next = common;

    // list 2: 15 -> 30 -> 40 -> 50
    struct Node *l2 = newNode(15);
    l2->next = common;

    // find intersection
    struct Node *result = getintersection(l1, l2);

    if (result != NULL)
    {
        printf("Intersection at node with data = %d\n", result->data);
    }
    else
    {
        printf("No intersection\n");
    }

    return 0;
}