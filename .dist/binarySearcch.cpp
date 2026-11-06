#include <iostream>
#include <vector>
using namespace std;
int binarysearch(vector<int> arr, int tar)
{
    int st = 0, end = arr.size() - 1;
    while (st <= end)
    {
        if (tar > arr[mid])
        {
            st = mid + 1;
        }
        else if (tar < arr[mid])
        {
            end = mid - 1;
        }
        else
        {
            return mid;
        }
    }
}
int main()
{
    vector<int> arr1 = {-1, 0, 3, 4, 9, 12};
    int tar1 = 12;
    vector<int> arr2 = {-1, 0, 3, 5, 9, 12};
    int tar2 = 0;

    return 0;
}