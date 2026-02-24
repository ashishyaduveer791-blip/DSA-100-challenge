#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a matrix(n for n * n:";
    cin >> n;
    int a[n][n];
    int i, j;
    int flag = 1;
    cout << "ENter elements of matrix:\n";
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cin >> a[n][n];
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (a[i][j] != a[j][i])
            {
                flag = 0;
                break;
            }
        }
    }
    if (flag == 1)
    {
        cout << "matrix is symmetric:\n";
    }

    else
    {
        cout << "matric Not symmetric\n";
    }
    return 0;
}