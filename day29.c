#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* newNode(int data) {
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->data = data;
    node->next = NULL;
    return node;
}

// Rotate Right by k
struct Node* rotateRight(struct Node* head, int k) {
    if (!head || k == 0) return head;

    // Step 1: Find length
    int n = 1;
    struct Node* temp = head;
    while (temp->next) {
        temp = temp->next;
        n++;
    }

    // Step 2: Make circular
    temp->next = head;

    // Step 3: Adjust k
    k = k % n;
    int steps = n - k;

    // Step 4: Find new tail
    struct Node* newTail = head;
    for (int i = 1; i < steps; i++) {
        newTail = newTail->next;
    }

    // Step 5: Set new head
    struct Node* newHead = newTail->next;

    // Break the loop
    newTail->next = NULL;

    return newHead;
}

// Print list
void printList(struct Node* head) {
    while (head) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node* head = newNode(10);
    head->next = newNode(20);
    head->next->next = newNode(30);
    head->next->next->next = newNode(40);
    head->next->next->next->next = newNode(50);

    int k = 2;

    head = rotateRight(head, k);

    printList(head);

    return 0;
}