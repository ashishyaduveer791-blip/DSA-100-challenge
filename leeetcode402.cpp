#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string ans = "";

    void solve(string &num, int index, int k, string current)
    {

        // If all digits are processed
        if (index == num.size())
        {

            // Exactly k digits should be removed
            if (k == 0)
            {

                // Remove leading zeros
                int i = 0;
                while (i < current.size() && current[i] == '0')
                {
                    i++;
                }

                string temp = current.substr(i);

                if (temp == "")
                    temp = "0";

                // First valid answer
                if (ans == "")
                {
                    ans = temp;
                }
                // Smaller length means smaller number
                else if (temp.size() < ans.size())
                {
                    ans = temp;
                }
                // Same length -> compare strings
                else if (temp.size() == ans.size() && temp < ans)
                {
                    ans = temp;
                }
            }

            return;
        }

        // OPTION 1: Remove current digit
        if (k > 0)
        {
            solve(num, index + 1, k - 1, current);
        }

        // OPTION 2: Keep current digit
        solve(num, index + 1, k, current + num[index]);
    }

    string removeKdigits(string num, int k)
    {

        solve(num, 0, k, "");

        return ans;
    }
};