// A secret system stores code names in forward order .To dispaly them in mirror format you must transfrom the given code name so that its charchter appera  inthe opposite order.
#include <iostream>
#include <string.h>

using namespace std;
int main()
{
    string str = "Hello";
    for (int i = str.length() - 1; i >= 0; i--)
    {
        cout << str[i];
    }
    return 0;
}
