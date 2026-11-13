#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// ==========================================
// Maximum digits select karne ka function
// ==========================================
vector<int> selectMax(vector<int> &nums, int k)
{

    vector<int> selected;

    int start = 0;

    // Hume exactly k elements select karne hain
    for (int count = 0; count < k; count++)
    {

        int maxIndex = start;

        // Itni range tak maximum search kar sakte hain
        // taaki remaining elements bhi select ho sake
        int end = nums.size() - (k - count);

        // Maximum element find karo
        for (int i = start; i <= end; i++)
        {

            if (nums[i] > nums[maxIndex])
            {
                maxIndex = i;
            }
        }

        // Maximum element select
        selected.push_back(nums[maxIndex]);

        // Next search selected element ke baad se
        start = maxIndex + 1;
    }

    return selected;
}

// ==========================================
// Tumhari comparison / merge logic
// ==========================================
vector<int> mergeArray(vector<int> &first,
                       vector<int> &second)
{

    vector<int> ans;

    int i = 0;
    int j = 0;

    // Dono arrays ke elements compare karo
    while (i < first.size() && j < second.size())
    {

        if (first[i] > second[j])
        {

            ans.push_back(first[i]);
            i++;
        }
        else
        {

            ans.push_back(second[j]);
            j++;
        }
    }

    // Agar first array me elements bach gaye
    while (i < first.size())
    {

        ans.push_back(first[i]);
        i++;
    }

    // Agar second array me elements bach gaye
    while (j < second.size())
    {

        ans.push_back(second[j]);
        j++;
    }

    return ans;
}

// ==========================================
// Main logic
// ==========================================
vector<int> createMaximum(vector<int> &nums1,
                          vector<int> &nums2,
                          int k)
{

    vector<int> finalAns;

    // --------------------------------------
    // BETTER APPROACH integrated with
    // tumhari previous logic
    //
    // k/2 nahi karenge
    // Different combinations check karenge
    // --------------------------------------

    for (int take1 = 0; take1 <= k; take1++)
    {

        int take2 = k - take1;

        // Check karo arrays me enough elements hain ya nahi
        if (take1 > nums1.size() ||
            take2 > nums2.size())
        {

            continue;
        }

        // --------------------------------
        // STEP 1:
        // nums1 se maximum elements select
        // --------------------------------

        vector<int> first =
            selectMax(nums1, take1);

        // --------------------------------
        // STEP 2:
        // nums2 se maximum elements select
        // --------------------------------

        vector<int> second =
            selectMax(nums2, take2);

        // --------------------------------
        // STEP 3:
        // Tumhari logic
        // dono ko one-by-one compare
        // --------------------------------

        vector<int> current =
            mergeArray(first, second);

        // --------------------------------
        // STEP 4:
        // Previous answer se compare
        // --------------------------------

        if (finalAns.empty() ||
            current > finalAns)
        {

            finalAns = current;
        }
    }

    return finalAns;
}

// ==========================================
// MAIN FUNCTION
// ==========================================

int main()
{

    vector<int> nums1 = {3, 4, 6, 5};

    vector<int> nums2 = {9, 1, 2, 5, 8, 3};

    int k = 5;

    vector<int> ans =
        createMaximum(nums1, nums2, k);

    cout << "Maximum Number: ";

    for (int i = 0; i < ans.size(); i++)
    {

        cout << ans[i] << " ";
    }

    cout << endl;

    return 0;
}