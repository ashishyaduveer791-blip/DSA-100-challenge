#include <stdio.h>

int main()
{
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int max1 = -9999, max2 = -9999;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max1)
        {
            max2 = max1;
            max1 = arr[i];
        }
        else if (arr[i] > max2 && arr[i] != max1)
        {
            max2 = arr[i];
        }
    }

    printf("Output: %d %d ", max1, max2);

    for (int i = 0; i < n; i++)
    {
        if (arr[i] != max1 && arr[i] != max2)
            printf("%d ", arr[i]);
    }

    return 0;
}