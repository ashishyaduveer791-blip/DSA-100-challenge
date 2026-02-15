#include <stdio.h>
int power(int a, int b)
{
    if (b == 0)
        return 1;
    else
        return a * power(a, b - 1);
}
int main()
{
    int a, n;
    printf("Enter base and power");
    scanf("%d %d", &a, &n);
    printf("Result= %d", power(a, n));
    return 0;
}
