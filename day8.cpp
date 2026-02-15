#include <iostream>
using namespace std;
int power(int a, int n)
{

    if (n == 0)
        return 1;
    else
        return a * power(a, n - 1);
}

int main()
{
    int a, n;
    cout << " Enter base and power:";
    cin >> a >> n;
    cout << "Result = " << power(a, n);
    return 0;
}
