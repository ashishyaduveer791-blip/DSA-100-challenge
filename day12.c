#include <stdio.h>
int main()
{
    int n, i, j;
    int a[10][10];
    int symmetric = 1;
    printf("Enter a size  of matrix:");
    scanf("%d", &n);
    printf("Enter matrix element:");
    //  inpput matrix
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
                ;
            {
                symmetric = 0;
                break;
            }
        }
    }
    if (symmetric)
        printf("Martix is symmertic:");
    else
    {
        printf("Matrix is not symmertic:");
    }

    return 0;
}