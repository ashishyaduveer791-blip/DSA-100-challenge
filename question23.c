// #include <stdio.h>
// #include <stdlib.h>
// struct Node
// {
//     int data;
//     struct Node *next;
// };
// struct Node *merge(struct Node *l1, struct Node *l2)
// {
//     if (l1 == NULL)
//         return l2;
//     struct Node *temp = l1;
//     while (temp->next != NULL)
//     {
//         temp = temp->next;
//     }
//     return l1;
// }
// void display(struct Node *head)
// {
//     while (head != NULL)
//     {
//         printf("%d->", head->data);
//         head = head->next;
//     }
//     printf("NULL\n");
// }
// int main()
// {
//     struct Node *l1, *l2;
//     // first linkedlist
//     l1 = (struct Node *)malloc(sizeof(struct Node));
//     l1->data = 1;
//     l1->next = (struct Node *)malloc(sizeof(struct Node));
//     l1->next->data = 2;
//     l1->next->next = (struct Node *)malloc(sizeof(struct Node));
//     l1->next->next->data = 3;
//     l1->next->next->next = NULL;
//     // Second linkedlist
//     l2 = (struct Node *)malloc(sizeof(struct Node));
//     l2->data = 4;
//     l2->next = (struct Node *)malloc(sizeof(struct Node));
//     l2->next->data = 5;
//     l2->next->next = NULL;
//     printf("List 1:\n");
//     display(l1);
//     printf("list 2:\n");
//     display(l2);
//     l1 = merge(l1, l2);
//     printf("Merged list:\n");
//     return 0;
// }
#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *merge(struct Node *l1, struct Node *l2)
{

    if (l1 == NULL)
        return l2;

    struct Node *temp = l1;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = l2;

    return l1;
}

void display(struct Node *head)
{
    while (head != NULL)
    {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

int main()
{

    struct Node *l1, *l2;

    // First Linked List
    l1 = (struct Node *)malloc(sizeof(struct Node));
    l1->data = 1;
    l1->next = (struct Node *)malloc(sizeof(struct Node));
    l1->next->data = 2;
    l1->next->next = (struct Node *)malloc(sizeof(struct Node));
    l1->next->next->data = 3;
    l1->next->next->next = NULL;

    // Second Linked List
    l2 = (struct Node *)malloc(sizeof(struct Node));
    l2->data = 4;
    l2->next = (struct Node *)malloc(sizeof(struct Node));
    l2->next->data = 5;
    l2->next->next = NULL;

    printf("List 1:\n");
    display(l1);

    printf("List 2:\n");
    display(l2);

    l1 = merge(l1, l2);

    printf("Merged List:\n");
    display(l1);

    return 0;
}