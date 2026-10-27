#include <iostream>
#include <vector>
using namespace std;

// ____________ Brute Force ____________
int missingBrust(vector<int> &arr, int n)
{
    for (int i = 1; i <= n; i++)
    {
        int flag = 0;

        for (int j = 0; j < n - 1; j++)
        {
            if (arr[j] == i)
            {
                flag = 1;
                break;
            }
        }

        if (flag == 0)
        {
            return i;
        }
    }

    return -1;
}

// ____________ Better Solution ____________
int missingBetter(vector<int> &arr, int n)
{
    vector<int> hash(n + 1, 0);

    for (int i = 0; i < n - 1; i++)
    {
        hash[arr[i]] = 1;
    }

    for (int i = 1; i <= n; i++)
    {
        if (hash[i] == 0)
        {
            return i;
        }
    }

    return -1;
}

// ____________ Optimal - Sum ____________
int missingSum(vector<int> &arr, int n)
{
    long long expectedSum = (long long)n * (n + 1) / 2;

    long long actualSum = 0;

    for (int i = 0; i < n - 1; i++)
    {
        actualSum += arr[i];
    }

    return expectedSum - actualSum;
}

// ____________ Optimal - XOR ____________
int missingXOR(vector<int> &arr, int n)
{
    int xorr = 0;

    for (int i = 0; i < n - 1; i++)
    {
        xorr = xorr ^ arr[i];
        xorr = xorr ^ (i + 1);
    }

    xorr = xorr ^ n;

    return xorr;
}

int main()
{
    // Numbers should be from 1 to 6
    // 3 is missing
    vector<int> arr = {1, 2, 4, 5, 6};
    int n = 6;

    cout << "Brute: " << missingBrust(arr, n) << endl;
    cout << "Better: " << missingBetter(arr, n) << endl;
    cout << "Optimal Sum: " << missingSum(arr, n) << endl;
    cout << "Optimal XOR: " << missingXOR(arr, n) << endl;

    return 0;
}