#include <iostream>
using namespace std;

// Function to display array
void displayArray(int arr[], int n)
{
    cout << "Array elements: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Function to insert element at position pos
void insertElement(int arr[], int &n, int pos, int element, int maxSize)
{
    if (n >= maxSize)
    {
        cout << "Array is full! Cannot insert more elements." << endl;
        return;
    }
    if (pos < 0 || pos > n)
    {
        cout << "Invalid position!" << endl;
        return;
    }

    // Shift elements to higher positions (right side)
    for (int i = n - 1; i >= pos; i--)
    {
        arr[i + 1] = arr[i];
    }

    // Insert element at position
    arr[pos] = element;
    n++;
    cout << "Element " << element << " inserted at position " << pos << endl;
}

// Function to delete element from position j
void deleteElement(int arr[], int &n, int j)
{
    if (j < 0 || j >= n)
    {
        cout << "Invalid position! Cannot delete." << endl;
        return;
    }

    cout << "Element " << arr[j] << " deleted from position " << j << endl;

    // Shift elements to lower positions (left side)
    for (int i = j; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    n--;
}

int main()
{
    int maxSize = 20;
    int a1[20];
    int n = 5;

    // Initialize array with elements
    a1[0] = 10;
    a1[1] = 20;
    a1[2] = 30;
    a1[3] = 40;
    a1[4] = 50;

    cout << "=== Array Insertion and Deletion Program ===" << endl
         << endl;

    cout << "Initial ";
    displayArray(a1, n);

    // Insert element at position 2
    cout << "\n--- Inserting element 25 at position 2 ---" << endl;
    insertElement(a1, n, 2, 25, maxSize);
    displayArray(a1, n);

    // Insert element at position 4
    cout << "\n--- Inserting element 35 at position 4 ---" << endl;
    insertElement(a1, n, 4, 35, maxSize);
    displayArray(a1, n);

    // Delete element from position j=3
    cout << "\n--- Deleting element from position 3 ---" << endl;
    int j = 3;
    deleteElement(a1, n, j);
    displayArray(a1, n);

    // Delete element from position j=1
    cout << "\n--- Deleting element from position 1 ---" << endl;
    j = 1;
    deleteElement(a1, n, j);
    displayArray(a1, n);

    return 0;
}
