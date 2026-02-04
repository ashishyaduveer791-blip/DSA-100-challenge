#include <iostream>
using namespace std;
int main()
{
    int n, index;
    int arr[100];
    cout << "Enter number of element:";
    cin >> n;
    cout << "Enter array element:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter index v to delete:";
    cin >> index;
    for (int i = index; i < n - 1; i++)
    {
        arr[i] = arr[i - 1];
    }
    n--;
    cout << "Array after deletion:\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "";
    }

    return 0;
}