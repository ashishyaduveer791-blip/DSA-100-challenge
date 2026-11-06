#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// ================= BRUTE APPROACH =================
// Time: O(n*k)
// Space: O(1)

void bruteRotate(vector<int> &arr, int k)
{
    int n = arr.size();
    k = k % n;

    for (int j = 0; j < k; j++)
    {

        int temp = arr[0];

        for (int i = 1; i < n; i++)
        {
            arr[i - 1] = arr[i];
        }

        arr[n - 1] = temp;
    }
}

// ================= BETTER APPROACH =================
// Time: O(n)
// Space: O(k)

void betterRotate(vector<int> &arr, int k)
{
    int n = arr.size();
    k = k % n;

    vector<int> temp(k);

    // Store first k elements
    for (int i = 0; i < k; i++)
    {
        temp[i] = arr[i];
    }

    // Shift remaining elements to left
    for (int i = k; i < n; i++)
    {
        arr[i - k] = arr[i];
    }

    // Put temp elements at end
    for (int i = n - k; i < n; i++)
    {
        arr[i] = temp[i - (n - k)];
    }
}

// ================= OPTIMAL APPROACH =================
// Time: O(n)
// Space: O(1)

void reverseArray(vector<int> &arr, int start, int end)
{

    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void optimalRotate(vector<int> &arr, int k)
{
    int n = arr.size();
    k = k % n;

    // Reverse first k
    reverseArray(arr, 0, k - 1);

    // Reverse remaining
    reverseArray(arr, k, n - 1);

    // Reverse whole array
    reverseArray(arr, 0, n - 1);
}

// ================= PRINT FUNCTION =================

void printArray(vector<int> &arr)
{

    for (int x : arr)
    {
        cout << x << " ";
    }

    cout << endl;
}

// ================= MAIN =================

int main()
{

    vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
    int k = 3;

    // Copies because every function changes the array
    vector<int> arr1 = arr;
    vector<int> arr2 = arr;
    vector<int> arr3 = arr;

    cout << "Original Array: ";
    printArray(arr);

    bruteRotate(arr1, k);
    cout << "Brute:   ";
    printArray(arr1);

    betterRotate(arr2, k);
    cout << "Better:  ";
    printArray(arr2);

    optimalRotate(arr3, k);
    cout << "Optimal: ";
    printArray(arr3);

    return 0;
}