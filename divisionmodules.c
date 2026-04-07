#include <stdio.h>

#define size 10

int hashtable[size] = {0};

// hash function
int hashfunction(int key) {
    return key % size;
}

// insert
void insert(int key) {
    int index = hashfunction(key);
    hashtable[index] = key;
}

// display
void display() {
    for (int i = 0; i < size; i++) {
        printf("Index %d: %d\n", i, hashtable[i]);
    }
}

int main() {
    insert(23);
    insert(45);
    insert(99);
    insert(105);

    display();
    return 0;
}