#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    Node(int val)
    {
        data = val;
        prev = nullptr;
        next = nullptr;
    }
};

class DoublyLinkedList
{
    Node *head;

public:
    DoublyLinkedList() { head = nullptr; }

    void insertEnd(int val)
    {
        Node *newNode = new Node(val);
        if (!head)
        {
            head = newNode;
            return;
        }
        Node *temp = head;
        while (temp->next)
            temp = temp->next;
        temp->next = newNode;
        newNode->prev = temp;
    }

    void traverseForward()
    {
        Node *temp = head;
        cout << "Forward: ";
        while (temp)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    void traverseReverse()
    {
        if (!head)
            return;
        Node *temp = head;
        while (temp->next)
            temp = temp->next;
        cout << "Reverse: ";
        while (temp)
        {
            cout << temp->data << " ";
            temp = temp->prev;
        }
        cout << endl;
    }
};

int main()
{
    DoublyLinkedList dll;
    dll.insertEnd(10);
    dll.insertEnd(20);
    dll.insertEnd(30);

    dll.traverseForward();
    dll.traverseReverse();

    return 0;
}
