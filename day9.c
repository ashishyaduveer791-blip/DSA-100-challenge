// A secret system stores code names in forward order .To dispaly them in mirror format you must transfrom the given code name so that its charchter appera  inthe opposite order.
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    scanf("%s", str);

    for (int i = strlen(str) - 1; i >= 0; i--)
    {
        printf("%c", str[i]);
    }
    return 0;
}