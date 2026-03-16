// #include <iostream>
// using namespace std;
// int main()
// {
//     int n, i;
//     cout << "Enter a number of elements:" cin >> n;
//     int arr[n];
//     cout << "Enter  element ", n;
//     {
//         for (i = 0; i < n; i++)
//         {
//             cin << arr[i];
//         }
//     }
//     int max = arr[0];
//     int min = arr[0];
//     for (i = 1; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     int max = arr[0];
//     int min = arr[0];
//     for (i = 1; i < n; i++)
//     {
//         if (arr[i] > max)
//         {
//             max = arr[i];
//         }
//         if (arr[i] > min)
//         {
//             min = arr[i];
//         }
//     }
//     cout << "Maximun values  =" << max << endl;
//     cout << "MInimum values =" << min << endl;
//     return 0;
// }

#include <iostream>
using namespace std;

int main()
{
    int n, i;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter elements: ";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int max = arr[0];
    int min = arr[0];

    for (i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }

        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    cout << "Maximum value = " << max << endl;
    cout << "Minimum value = " << min << endl;

    return 0;
}