// #include <iostream>
// #include <vector>
// using namespace std;
// int countZeroSumSubarray(vector<int> &arr)
// {
//     int n = arr.size();
//     int count = 0;
//     for (int i = 0; i < n; i++)
//     {
//         int sum = 0;
//         for (int j = i; j < n; j++)
//         {
//             sum += arr[j];
//             if (sum == 0)
//                 count++;
//         }
//     }
//     return count;
// }
// int main()
// {
//     vector<int> arr = {1, -1, 2, -2};
//     cout << "Zero sum subarray= "
//          << countZeroSumSubarray(arr);
//     return 0;
// }

#include <iostream>
#include <vector>
using namespace std;

int countZeroSumSubarrays(vector<int> &arr)
{
    int n = arr.size();
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        int sum = 0;

        for (int j = i; j < n; j++)
        {
            sum = sum + arr[j];

            if (sum == 0)
            {
                count++;
            }
        }
    }

    return count;
}

int main()
{
    vector<int> arr = {1, -1, 2, -2};

    cout << "Total Zero Sum Subarrays = "
         << countZeroSumSubarrays(arr);

    return 0;
}