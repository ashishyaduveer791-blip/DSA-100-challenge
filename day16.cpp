// count frequency the number i=of elements
#include <iostream>
using namespace std;

int main()
{
    int n, i, j, count;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n], visited[n];

    //     // initialize visited array
    for (i = 0; i < n; i++)
    {
        visited[i] = 0;
    }

    //     // input array
    cout << "Enter the elements:\n";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    //     // find frequency
    for (i = 0; i < n; i++)
    {
        if (visited[i] == 1)
        {
            continue;
        }

        count = 1;

        for (j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
                visited[j] = 1;
            }
        }

        cout << "Frequency of " << arr[i] << "=" << count << endl;
    }

    return 0;
}