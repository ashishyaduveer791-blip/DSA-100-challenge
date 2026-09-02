
#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;

    Node(int value)
    {
        data = value;
        next = nullptr;
    }
};

int main()
{
    int n;
    cin >> n;

    Node *head = nullptr;
    Node *tail = nullptr;

    // Create linked list
    for (int i = 0; i < n; i++)
    {
        int value;
        cin >> value;

        Node *newNode = new Node(value);

        if (head == nullptr)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }

    int key;
    cin >> key;

    // Delete first occurrence
    Node *current = head;
    Node *previous = nullptr;

    while (current != nullptr)
    {

        if (current->data == key)
        {

            // If first node contains the key
            if (previous == nullptr)
            {
                head = current->next;
            }
            else
            {
                // Connect previous node to next node
                previous->next = current->next;
            }

            // Delete the current node
            delete current;

            // Stop because only FIRST occurrence is deleted
            break;
        }

        previous = current;
        current = current->next;
    }

    // Print linked list
    current = head;

    while (current != nullptr)
    {
        cout << current->data;

        if (current->next != nullptr)
            cout << " ";

        current = current->next;
    }

    return 0;
}
