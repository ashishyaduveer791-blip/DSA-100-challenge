#include <stdio.h>
#include <stdlib.h>

int *deque;
int front = -1;
int rear = -1;
int size;

// Check if full
int isFull() {
    return ((front == 0 && rear == size - 1) || (front == rear + 1));
}

// Check if empty
int isEmpty() {
    return (front == -1);
}

// Insert at front
void insertFront(int value) {
    if (isFull()) {
        printf("Deque Overflow\n");
        return;
    }

    if (isEmpty()) {
        front = rear = 0;
    }
    else if (front == 0) {
        front = size - 1;
    }
    else {
        front--;
    }

    deque[front] = value;
}

// Insert at rear
void insertRear(int value) {
    if (isFull()) {
        printf("Deque Overflow\n");
        return;
    }

    if (isEmpty()) {
        front = rear = 0;
    }
    else if (rear == size - 1) {
        rear = 0;
    }
    else {
        rear++;
    }

    deque[rear] = value;
}

// Delete from front
void deleteFront() {
    if (isEmpty()) {
        printf("Deque Underflow\n");
        return;
    }

    printf("Deleted from front: %d\n", deque[front]);

    if (front == rear) {
        front = rear = -1;
    }
    else if (front == size - 1) {
        front = 0;
    }
    else {
        front++;
    }
}

// Delete from rear
void deleteRear() {
    if (isEmpty()) {
        printf("Deque Underflow\n");
        return;
    }

    printf("Deleted from rear: %d\n", deque[rear]);

    if (front == rear) {
        front = rear = -1;
    }
    else if (rear == 0) {
        rear = size - 1;
    }
    else {
        rear--;
    }
}

// Get front element
int getFront() {
    if (isEmpty()) {
        printf("Deque is Empty\n");
        return -1;
    }
    return deque[front];
}

// Get rear element
int getRear() {
    if (isEmpty()) {
        printf("Deque is Empty\n");
        return -1;
    }
    return deque[rear];
}

// Display deque
void display() {
    if (isEmpty()) {
        printf("Deque is Empty\n");
        return;
    }

    printf("Deque elements: ");

    int i = front;
    while (1) {
        printf("%d ", deque[i]);
        if (i == rear)
            break;
        i = (i + 1) % size;
    }
    printf("\n");
}

// Main function
int main() {
    int choice, value;

    printf("Enter size of deque: ");
    scanf("%d", &size);

    deque = (int *)malloc(size * sizeof(int));

    while (1) {
        printf("\n--- Deque Menu ---\n");
        printf("1. Insert Front\n");
        printf("2. Insert Rear\n");
        printf("3. Delete Front\n");
        printf("4. Delete Rear\n");
        printf("5. Get Front\n");
        printf("6. Get Rear\n");
        printf("7. Display\n");
        printf("8. Exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value: ");
                scanf("%d", &value);
                insertFront(value);
                break;

            case 2:
                printf("Enter value: ");
                scanf("%d", &value);
                insertRear(value);
                break;

            case 3:
                deleteFront();
                break;

            case 4:
                deleteRear();
                break;

            case 5:
                printf("Front element: %d\n", getFront());
                break;

            case 6:
                printf("Rear element: %d\n", getRear());
                break;

            case 7:
                display();
                break;

            case 8:
                free(deque);
                exit(0);

            default:
                printf("Invalid choice\n");
        }
    }

    return 0;
}