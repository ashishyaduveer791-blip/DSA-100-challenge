#include <stdio.h>

int fib(int n)
{
    if (n <= 1) // Base case
        return n;

    return fib(n - 1) + fib(n - 2);
}

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", fib(i));
    }

    return 0;
}

// #include <iostream>
// using namespace std;

// int fib(int n)
// {
//     if (n <= 1) // Base case
//         return n;

//     return fib(n - 1) + fib(n - 2); // Recursive call
// }

// int main()
// {
//     int n;
//     cin >> n;
//     // int n = 6;

//     for (int i = 0; i < n; i++)
//     {
//         cout << fib(i) << " ";
//     }

//     return 0;
// }