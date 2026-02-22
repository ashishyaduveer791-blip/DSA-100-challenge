#include <iostream>
using namespace std;

int main()
{
    int r, c;

    cout << "Enter number of rows and columns: ";
    cin >> r >> c;

    int A[r][c], B[r][c], Sum[r][c];

    // Input Matrix A
    cout << "Enter elements of Matrix A:\n";
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> A[i][j];
        }
    }

    // Input Matrix B
    cout << "Enter elements of Matrix B:\n";
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> B[i][j];
        }
    }

    // Add matrices
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            Sum[i][j] = A[i][j] + B[i][j];
        }
    }

    // Display result
    cout << "Sum of matrices:\n";
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << Sum[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}