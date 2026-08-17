#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

int countOccurrences(Node *head, int key)
{
    int count = 0;

    Node *temp = head;

    while (temp != NULL)
    {
        if (temp->data == key)
        {
            count++;
        }

        temp = temp->next;
    }

    return count;
}

int main()
{
    // Linked List: 1 -> 2 -> 3 -> 2 -> 2
    Node *head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(2);
    head->next->next->next->next = new Node(2);

    int key = 2;

    cout << "Occurrences: " << countOccurrences(head, key);

    return 0;
}