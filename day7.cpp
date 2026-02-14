// #include <iostream>
// using namespace std;
// int func(int n)
// {
//     if (n == 0)
//         return 0;

//     return func(n - 1);
// }
// int main()
// {
//     func(5);
//     return 0;
// }

// #include <iostream>
// using namespace std;
// void fib(int n)
// {
//     if (n <= 1)
//         return n;
//     return fib(n - 1) + fib(n - 2);
// }
// int main()
// {
//     int n = 6;
//     for (int i = 0; i < n; i++)
//     {
//         cout << fib(i) << " ";
//     }
//     return 0;
// }

#include <iostream>
using namespace std;

int fib(int n)
{
    if (n <= 1) // Base case
        return n;

    return fib(n - 1) + fib(n - 2); // Recursive call
}

int main()
{
    int n;
    cin >> n;
    // int n = 6;

    for (int i = 0; i < n; i++)
    {
        cout << fib(i) << " ";
    }

    return 0;
}