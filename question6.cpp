#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void removeDuplicates() {
        int n;
        cout << "Enter the size of array: ";
        cin >> n;

        vector<int> nums(n);

        cout << "Enter sorted elements: ";
        for (int i = 0; i < n; i++) {
            cin >> nums[i];
        }

        vector<int> unique;

        for (int i = 0; i < n; i++) {
            if (i == 0) {
                unique.push_back(nums[i]);
            }
            else if (nums[i] != nums[i - 1]) {
                unique.push_back(nums[i]);
            }
        }

        cout << "Array after removing duplicates: ";
        for (int x : unique) {
            cout << x << " ";
        }
    }
};

int main() {
    Solution obj;
    obj.removeDuplicates();
    return 0;
}