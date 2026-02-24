#include <stdio.h>
int main()
{
    int n;
    printf("Enter a size of matrix(n for n *n):");
    scanf("%d", &n);
    int a[n][n];
    int i, j;
    int flag = 1;
    printf("Enter element of matrix:\n:");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
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
        printf("matrix is symmetric\n");
        else
        {
            printf("Matrix is not symmetric\n");
        }

        return 0;
    }