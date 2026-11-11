#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> arr = {3, 1, -2, -5, 2, -4};

    int n = arr.size();

    vector<int> pos;
    vector<int> neg;

    // Separate positive and negative elements
    for (int i = 0; i < n; i++)
    {

        if (arr[i] > 0)
            pos.push_back(arr[i]);
        else
            neg.push_back(arr[i]);
    }

    // Your logic
    for (int i = 0; i < n / 2; i++)
    {

        arr[2 * i] = pos[i];

        arr[2 * i + 1] = neg[i];
    }

    // Print answer
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}