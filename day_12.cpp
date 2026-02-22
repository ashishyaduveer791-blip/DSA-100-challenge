#include <iostream>
using namespace std;
int main()
{
    int n, i, j;
    int s[10][10];
    int symmetric = 0;
    cout << "Enter a size of matrix:";
    cin >> n;
    cout << "Enter matrix elements:";
    for (i = 0; i < n; i++)
    {
        for (j = 0; j <= 0; j++)
        {
            cin >> s[i][j];
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (s[i][j] != s[j][i])
            {
                symmetric = 0;
                break;
            }
        }
    }
    if (symmetric)
    {
        cout << "matrix is  symmetric:";
    }
    else
    {
        cout << "Not a symmertic matrix:";
    }
    return 0;
}
