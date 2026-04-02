#include <iostream>
using namespace std;

class CircularQueue
{
    int *arr;
    int currSize, cap;
    int f, r;

public:
    CircularQueue(int size)
    {
        cap = size;
        arr = new int[cap]; // FIX: correct allocation
        currSize = 0;       // FIX: initialize size
        f = 0;
        r = -1;
    }

    void push(int data)
    {
        if (currSize == cap)
        {
            cout << "CQ is FULL\n";
            return;
        }

        r = (r + 1) % cap;
        arr[r] = data;
        currSize++; // FIX
    }

    void pop()
    {
        if (empty())
        {
            cout << "CQ is EMPTY\n";
            return;
        }

        f = (f + 1) % cap;
        currSize--; // FIX
    }

    int front()
    {
        if (empty())
        {
            cout << "CQ is EMPTY\n";
            return -1;
        }
        return arr[f]; // FIX
    }

    bool empty()
    {
        return currSize == 0;
    }
};

int main()
{
    CircularQueue q(5);

    q.push(10);
    q.push(20);
    q.push(30);

    cout << "Front: " << q.front() << endl;

    q.pop();
    cout << "Front after pop: " << q.front() << endl;

    return 0;
}