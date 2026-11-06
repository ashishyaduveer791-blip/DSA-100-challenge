#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> twoSum(vector<int> &arr, int target)
{

    unordered_map<int, int> mpp;

    for (int i = 0; i < arr.size(); i++)
    {

        int current = arr[i];

        // Number needed to complete target
        int needed = target - current;

        // Check if needed number is already in hash map
        if (mpp.find(needed) != mpp.end())
        {
            return {mpp[needed], i};
        }

        // Store current number with its index
        mpp[current] = i;
    }

    return {-1, -1};
}

int main()
{

    vector<int> arr = {3, 2, 6, 5, 11};
    int target = 14;

    vector<int> ans = twoSum(arr, target);

    cout << "Indexes: " << ans[0] << " " << ans[1];

    return 0;
}