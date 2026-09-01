#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &arr, int left, int mid, int right)
{
    vector<int> temp;

    int i = left;
    int j = mid + 1;

    // Compare elements from both halves
    while (i <= mid && j <= right)
    {
        if (arr[i] <= arr[j])
        {
            temp.push_back(arr[i]);
            i++;
        }
        else
        {
            temp.push_back(arr[j]);
            j++;
        }
    }

    // Add remaining elements from left half
    while (i <= mid)
    {
        temp.push_back(arr[i]);
        i++;
    }

    // Add remaining elements from right half
    while (j <= right)
    {
        temp.push_back(arr[j]);
        j++;
    }

    // Copy sorted elements back
    for (int k = 0; k < temp.size(); k++)
    {
        arr[left + k] = temp[k];
    }
}

void mergeSort(vector<int> &arr, int left, int right)
{
    if (left >= right)
        return;

    int mid = left + (right - left) / 2;

    mergeSort(arr, left, mid);
    mergeSort(arr, mid + 1, right);

    merge(arr, left, mid, right);
}

int main()
{
    vector<int> arr = {38, 27, 43, 3, 9, 82, 10};

    mergeSort(arr, 0, arr.size() - 1);

    cout << "Sorted array: ";
    for (int x : arr)
    {
        cout << x << " ";
    }

    return 0;
}