// priorit quee y=usinng  array in c
##include<stdio.h>

    int pq[100];
int size = -1;
int capacity;

// Insert
void enqueue(int value)
{
    if (size == capacity - 1)
    {
        printf("Queue Overflow\n");
        return;
    }
    pq[++size] = value;
}

// Delete
int dequeue()
{
    if (size == -1)
    {
        printf("Queue Underflow\n");
        return -1;
    }

    int maxIndex = 0;

    for (int i = 1; i <= size; i++)
    {
        if (pq[i] > pq[maxIndex])
        {
            maxIndex = i;
        }
    }

    int item = pq[maxIndex];

    for (int i = maxIndex; i < size; i++)
    {
        pq[i] = pq[i + 1];
    }

    size--;
    return item;
}

// Display
void display()
{
    for (int i = 0; i <= size; i++)
    {
        printf("%d ", pq[i]);
    }
    printf("\n");
}

int main()
{
    printf("Enter capacity: ");
    scanf("%d", &capacity);

    enqueue(10);
    enqueue(50);
    enqueue(30);

    display();

    printf("Deleted: %d\n", dequeue());

    display();

    return 0;
}