#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void f(int i, vector<int> &arr, int n)
{
    // Base case
    if (i >= n / 2)
        return;

    // Swap first and last corresponding elements
    swap(arr[i], arr[n - i - 1]);

    // Recursive call
    f(i + 1, arr, n);
}

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    f(0, arr, n);

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}