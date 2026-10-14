#include <iostream>
using namespace std;
#include <vector>
int fib(int n)
{
    if (n <= 1)
        return n;

    return fib(n - 1) + fib(n - 2);
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cout << fib(i) << "";
    return 0;
}
