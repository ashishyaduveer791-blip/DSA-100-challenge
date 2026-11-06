#include <iostream>
using namespace std;
int sum(int a[], int n)
{
    if (n == 0)
        return 0;
    return a[n - 1] + sum(a, n - 1);
}

int main()
{
    int n, i, a[50];
    cout << "Enter number of element:";
    cin >> n;
    cout << "Enter a element:\n";
    for (i = 0; i < n; i++)

        cin >> a[i];

    cout << "sum of  element = " << sum(a, n);
    return 0;
}
