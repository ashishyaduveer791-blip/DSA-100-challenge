#include <stdio.h>

int pq[5]; // array to store elements
int n = 0; // current number of elements

// Insert element
void insert(int value)
{
    if (n == 5)
    {
        printf("Queue is Full\n");
        return;
    }

    int i = n - 1;

    // Shift elements to maintain descending order
    while (i >= 0 && pq[i] < value)
    {
        pq[i + 1] = pq[i];
        i--;
    }

    pq[i + 1] = value;
    n++;
}

// Delete highest priority element
void delete()
{
    if (n == 0)
    {
        printf("Queue is Empty\n");
        return;
    }

    printf("Deleted element: %d\n", pq[0]);

    // Shift elements left
    for (int i = 0; i < n - 1; i++)
    {
        pq[i] = pq[i + 1];
    }

    n--;
}

// Display queue
void display()
{
    if (n == 0)
    {
        printf("Queue is Empty\n");
        return;
    }

    printf("Priority Queue: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", pq[i]);
    }
    printf("\n");
}

// Main function
int main()
{
    insert(30);
    insert(10);
    insert(50);
    insert(20);

    display();

    delete();
    display();

    return 0;
}