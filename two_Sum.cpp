#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

// ======================================
// APPROACH 1: HASHING
// ======================================

vector<int> twoSumHashing(vector<int> &arr, int target)
{
    unordered_map<int, int> mpp;

    for (int i = 0; i < arr.size(); i++)
    {
        int current = arr[i];
        int needed = target - current;

        if (mpp.find(needed) != mpp.end())
        {
            return {mpp[needed], i};
        }

        mpp[current] = i;
    }

    return {-1, -1};
}

// ======================================
// APPROACH 2: TWO POINTER
// Array must be sorted
// ======================================

vector<int> twoSumPointer(vector<int> &arr, int target)
{
    int left = 0;
    int right = arr.size() - 1;

    while (left < right)
    {
        int sum = arr[left] + arr[right];

        if (sum == target)
        {
            return {left, right};
        }

        else if (sum < target)
        {
            left++;
        }

        else
        {
            right--;
        }
    }

    return {-1, -1};
}

int main()
{
    // Hashing can work on unsorted array
    vector<int> arr1 = {3, 2, 6, 5, 11};
    int target = 14;

    vector<int> ans1 = twoSumHashing(arr1, target);

    cout << "Hashing Answer: ";
    cout << ans1[0] << " " << ans1[1] << endl;

    // Two pointer requires sorted array
    vector<int> arr2 = {2, 5, 6, 8, 11};

    vector<int> ans2 = twoSumPointer(arr2, target);

    cout << "Two Pointer Answer: ";
    cout << ans2[0] << " " << ans2[1] << endl;

    return 0;
}