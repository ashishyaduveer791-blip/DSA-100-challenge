#include <stdio.h>
void display(int arr[], int n, int i);
{
    if (i == n)
        return;
    printf("%d", arr[i])
        dispaly(arr, n, i + 1);
}
int main()
{
    int n, arr[100], i;
    printf("Enter a  number element:")
        scanf("%d", &n);
    printf("Enter a  elements:"\n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("element are:");
    display(arr, n, 0);
    return 0;
}
