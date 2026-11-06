

// #include <stdio.h>

// int main()
// {
//     int a[3][3];
//     int i, j, sum;

//         printf("Enter elements of 3x3 matrix:\n");
//     for (i = 0; i < 3; i++)
//     {
//         for (j = 0; j < 3; j++)
//         {
//             scanf("%d", &a[i][j]);
//         }
//     }

//     for (i = 0; i < 3; i++)
//     {
//         sum = 0;
//         for (j = 0; j < 3; j++)
//         {
//             sum += a[i][j];
//         }
//         printf("Sum of row %d = %d\n", i + 1, sum);
//     }

//     return 0;
// }

#include <stdio.h>

int main()
{
    int a[3][3];
    int i, j, product;

    printf("Enter elements of 3x3 matrix:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < 3; i++)
    {
        product = 1;
        for (j = 0; j < 3; j++)
        {
            product *= a[i][j];
        }
        printf("product of row %d = %d\n", i + 1, product);
    }

    return 0;
}
