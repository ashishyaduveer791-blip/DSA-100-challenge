// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[6] = {1, 2, 3, 4, 5};
//     int n = 5;
//     int value = 8;
//     for (int i = n; i > 0; i--)
//     {
//         arr[i] = arr[i - 1];
//     }
//     arr[0] = value;
//     n++;
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << "";
//     }

//     return 0;
// }

#include <iostream>
using namespace std;
int main()
{
    int arr[6] = {1, 2, 3, 4, 5};
    int n = 5;
    int value;
    cin >> value;

    // int value = 8;
    for (int i = n; i > 0; i--)
    {
        arr[i] = arr[i - 1];
        // cout << arr[i] << "";
    }
    // arr[5] = value;
    // arr[3] = value;
    cout << arr[8] << value;

    n++;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "";
    }

    return 0;
}