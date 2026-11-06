#include <iostream>
using namespace std;
int main()
{
    int arr[] = {2, 1, 3, 4};
    int n = 4;
    int helper[] = {2, 3, 1, 4};
    for (int i = 0; i < n; i++)
    {
        arr[i] = helper[arr[i]];
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}