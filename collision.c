#include <stdio.h>

#define size 10

int hashtable[size];

// initialize table
void init() {
    for(int i = 0; i < size; i++) {
        hashtable[i] = -1; // -1 means empty
    }
}

// hash function
int hashfunction(int key) {
    return key % size;
}

// insert with linear probing
void insert(int key) {
    int index = hashfunction(key);

    // if collision occurs
    while(hashtable[index] != -1) {
        index = (index + 1) % size; // move to next index
    }

    hashtable[index] = key;
}

// display
void display() {
    for(int i = 0; i < size; i++) {
        printf("Index %d: %d\n", i, hashtable[i]);
    }
}

int main() {
    init();

    insert(23);
    insert(33);  // collision
    insert(52);
    insert(55);  // collision
    insert(99);
    insert(105);

    display();

    return 0;
}