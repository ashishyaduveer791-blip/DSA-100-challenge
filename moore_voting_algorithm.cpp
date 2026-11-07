#include <iostream>
#include <vector>
using namespace std;

int majorityElement(vector<int> &arr)
{

    int count = 0;
    int element;

    for (int i = 0; i < arr.size(); i++)
    {

        if (count == 0)
        {
            element = arr[i];
            count = 1;
        }

        else if (arr[i] == element)
        {
            count++;
        }

        else
        {
            count--;
        }
    }

    return element;
}

int main()
{

    vector<int> arr = {2, 2, 1, 1, 1, 2, 2};

    cout << "Majority Element: " << majorityElement(arr);

    return 0;
}