#include <stdio.h>

int deque[100];
int front = -1;
int rear = -1;
int size = 100;

// check empty
int isEmpty() {
    return (front == -1);
}

// check full
int isFull() {
    return ((front == 0 && rear == size - 1) || (front == rear + 1));
}

// insert at front
void insertFront(int x) {
    if (isFull()) {
        printf("Deque is Full\n");
        return;
    }

    if (front == -1) { // first element
        front = rear = 0;
    }
    else if (front == 0) {
        front = size - 1;
    }
    else {
        front = front - 1;
    }

    deque[front] = x;
}

// insert at rear
void insertRear(int x) {
    if (isFull()) {
        printf("Deque is Full\n");
        return;
    }

    if (front == -1) { // first element
        front = rear = 0;
    }
    else if (rear == size - 1) {
        rear = 0;
    }
    else {
        rear = rear + 1;
    }

    deque[rear] = x;
}

// delete from front
void deleteFront() {
    if (isEmpty()) {
        printf("Deque is Empty\n");
        return;
    }

    if (front == rear) { // only one element
        front = rear = -1;
    }
    else if (front == size - 1) {
        front = 0;
    }
    else {
        front = front + 1;
    }
}

// delete from rear
void deleteRear() {
    if (isEmpty()) {
        printf("Deque is Empty\n");
        return;
    }

    if (front == rear) {
        front = rear = -1;
    }
    else if (rear == 0) {
        rear = size - 1;
    }
    else {
        rear = rear - 1;
    }
}

// get front element
int getFront() {
    if (isEmpty()) {
        printf("Deque is Empty\n");
        return -1;
    }
    return deque[front];
}

// get rear element
int getRear() {
    if (isEmpty()) {
        printf("Deque is Empty\n");
        return -1;
    }
    return deque[rear];
}

// display deque
void display() {
    if (isEmpty()) {
        printf("Deque is Empty\n");
        return;
    }

    int i = front;
    while (1) {
        printf("%d ", deque[i]);
        if (i == rear)
            break;
        i = (i + 1) % size;
    }
    printf("\n");
}

// main function
int main() {
    insertRear(10);
    insertRear(20);
    insertFront(5);
    insertFront(2);

    display();  // 2 5 10 20

    deleteFront();
    deleteRear();

    display();  // 5 10

    printf("Front: %d\n", getFront());
    printf("Rear: %d\n", getRear());

    return 0;
}