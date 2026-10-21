#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string s = "abcda";

    vector<vector<int>> queries = {
        {3, 3, 0},
        {1, 2, 0},
        {0, 3, 1},
        {0, 3, 2},
        {0, 4, 1}};

    vector<bool> answer;

    // Run every query
    for (size_t i = 0; i < queries.size(); ++i)
    {
        int left = queries[i][0];
        int right = queries[i][1];
        int k = queries[i][2];

        // Take substring from left to right
        string sub = s.substr(left, right - left + 1);

        // Sort to start generating permutations
        sort(sub.begin(), sub.end());

        bool possible = false;

        // Try all rearrangements
        do
        {
            int l = 0;
            int r = static_cast<int>(sub.size()) - 1;
            int changes = 0;

            // Check characters from both sides
            while (l < r)
            {
                if (sub[l] != sub[r])
                {
                    changes++;
                }

                l++;
                r--;
            }

            // If palindrome can be made within k changes
            if (changes <= k)
            {
                possible = true;
                break;
            }

        } while (next_permutation(sub.begin(), sub.end()));

        answer.push_back(possible);
    }

    // Print answer
    cout << "[";

    for (size_t i = 0; i < answer.size(); ++i)
    {
        if (answer[i])
            cout << "true";
        else
            cout << "false";

        if (i != answer.size() - 1)
            cout << ", ";
    }

    cout << "]";

    return 0;
}