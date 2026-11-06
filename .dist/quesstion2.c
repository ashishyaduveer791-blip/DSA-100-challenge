#include <stdio.h>

int main()
{
    int a1[100];
    int n, i, pos, val, j;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a1[i]);
    }

    printf("Enter position to insert : ");
    scanf("%d", &pos);
    printf("Enter value to insert: ");
    scanf("%d", &val);

    for (i = n; i > pos; i--)
    {
        a1[i] = a1[i - 1];
    }
    a1[pos] = val;
    n++;

    printf("Array after insertion:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a1[i]);
    }
    printf("\n");

    printf("Enter position to delete : ");
    scanf("%d", &j);

    for (i = j; i < n - 1; i++)
    {
        a1[i] = a1[i + 1];
    }
    n--;

    printf("Array after deletion:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a1[i]);
    }
    printf("\n");

    return 0;
}

// #include <stdio.h>
// int main()
// {
//     int char[50], n;
//     printf("Enter a upper case:")
//         scanf("%s", str);
//     for (i = o; str[i] != 0; i++)
//     {
//         if (str[i] > = 'A' && str[i] <= 'Z')
//         {
//             str[i] = str[i] + 32;
//         }
//     }
//     printf("string in  lowercase: %s\");
//         return\ 0;
// }