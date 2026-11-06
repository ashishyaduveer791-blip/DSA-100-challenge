#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *data;
    Node *prev;
    Node(int val)
    {
        data = val;
        next = prev = NULL;
    }
};
class DoublyList
{
    Node *head;
    Node *tail;

public:
    DoublyList()
    {
        head = tail = NULL;
    }
};
int main()
{
    DoublyList dil;
    // push front

    return 0;
}
