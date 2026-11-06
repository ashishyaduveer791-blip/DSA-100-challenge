#include <iostream>
#include <algorithm>
using namespace std;
void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int smalleastIdx = i; // insored part string
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[smalleastIdx])
            {
                smalleastIdx = j;
            }
        }
        swap(arr[i], arr[smallestIdx]);
    }
}

int main()
{
    int n = 5;
    int arr[] = {4, 1, 5, 2, 3};
    selectionSort(arr, n);

    printArray(arr, n);
    return 0;
}