#include <iostream>
#include <stack>
using namespace std;

// function for precedence
int prec(char c)
{
    if (c == '^')
        return 3;
    else if (c == '*' || c == '/')
        return 2;
    else if (c == '+' || c == '-')
        return 1;
    else
        return -1;
}

// function to convert infix to postfix
string infixToPostfix(string s)
{
    stack<char> st;
    string res;

    for (int i = 0; i < s.length(); i++)
    {
        // operand
        if ((s[i] >= 'a' && s[i] <= 'z') ||
            (s[i] >= 'A' && s[i] <= 'Z'))
        {
            res += s[i];
        }

        // opening bracket
        else if (s[i] == '(')
        {
            st.push(s[i]);
        }

        // closing bracket
        else if (s[i] == ')')
        {
            while (!st.empty() && st.top() != '(')
            {
                res += st.top();
                st.pop();
            }
            if (!st.empty())
                st.pop(); // remove '('
        }

        // operator
        else
        {
            while (!st.empty() && prec(st.top()) >= prec(s[i]))
            {
                res += st.top();
                st.pop();
            }
            st.push(s[i]);
        }
    }

    // remaining elements
    while (!st.empty())
    {
        res += st.top();
        st.pop();
    }

    return res;
}

// main function
int main()
{
    cout << infixToPostfix("(a-b/c)*(a/k-l)") << endl;
    return 0;
}