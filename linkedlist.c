// #include <stdio.h>
// #include <stdlib.h>
// struct node
// {
//     int data;
//     struct node *next;
// };

// int main()
// {
//     struct node *head = (struct node *)malloc(sizeof(struct node));
//     struct node *first = (struct node *)malloc(sizeof(struct node));
//     struct node *second = (struct node *)malloc(sizeof(struct node));
//     struct node *third = (struct node *)malloc(sizeof(struct node));
//     head->data = 10;
//     head->next = first;
//     first->data = 85;
//     first->next = second;
//     second->data = 95;
//     second->next = third;
//     third->data = 65;
//     third->next = NULL;
//     int count = 0;
//     struct node *ptr = head;
//     while (ptr != NULL)
//         ;
//     count++;
//     ptr = ptr->next;
//     printf("Number of node=%d", count);

//     return 0;
// }

#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
int main()
{
    struct node *head = (struct node *)malloc(sizeof(struct node));
    struct node *first = (struct node *)malloc(sizeof(struct node));
    struct node *second = (struct node *)malloc(sizeof(struct node));
}
head->data = 85;
head->next = first;
first->data = 50;
first->next = second;
second->data = 65;
second->next = NULL;
struct node *ptr = head;
while (ptr->next != = NULL)
{
    ptr = ptr->next;
}
printf("%d ", ptr->data);
return 0;
}
