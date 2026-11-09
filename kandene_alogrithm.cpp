#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n = 9;

    int sum = 0;
    int maxi = INT_MIN;

    for (int i = 0; i < n; i++)
    {

        sum = sum + arr[i];

        // Compare current sum with maximum
        maxi = max(maxi, sum);

        // If sum becomes negative, start fresh
        if (sum < 0)
        {
            sum = 0;
        }
    }

    cout << "Maximum Subarray Sum = " << maxi;

    return 0;
}