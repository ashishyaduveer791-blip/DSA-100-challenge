#include <stdio.h>
#include <stdlib.h>

struct PQ {
    int data;
    int priority;
};

struct PQ *arr;
int size = -1;
int capacity;

// Insert
void enqueue(int data, int priority) {
    if (size == capacity - 1) {
        printf("Overflow\n");
        return;
    }

    size++;
    arr[size].data = data;
    arr[size].priority = priority;
}

// Delete highest priority
void dequeue() {
    if (size == -1) {
        printf("Underflow\n");
        return;
    }

    int highest = 0;

    for (int i = 1; i <= size; i++) {
        if (arr[i].priority < arr[highest].priority) {
            highest = i;
        }
    }

    printf("Deleted: %d\n", arr[highest].data);

    // Shift
    for (int i = highest; i < size; i++) {
        arr[i] = arr[i + 1];
    }

    size--;
}

// Display
void display() {
    if (size == -1) {
        printf("Empty\n");
        return;
    }

    for (int i = 0; i <= size; i++) {
        printf("(%d, P=%d) ", arr[i].data, arr[i].priority);
    }
    printf("\n");
}

// Main
int main() {
    printf("Enter capacity: ");
    scanf("%d", &capacity);

    arr = (struct PQ*)malloc(capacity * sizeof(struct PQ));

    enqueue(10, 2);
    enqueue(20, 1);
    enqueue(30, 3);

    display();

    dequeue();

    display();

    free(arr);
    return 0;
}