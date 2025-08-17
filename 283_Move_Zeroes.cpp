//Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int w = 0; 

        //  Shift all non-zero values to the front
        for (int r = 0; r < nums.size(); r++) {
            if (nums[r] != 0) {
                nums[w] = nums[r];
                w++;
            }
        }

        //  Fill the rest with zeros
        for (int r = w; r < nums.size(); r++) {
            nums[r] = 0;
        }
    }
};

int main() {
    Solution sol;
    vector<int> nums = {0, 1, 0, 3, 12};

    sol.moveZeroes(nums);

    cout << "Result: ";
    for (int n : nums) {
        cout << n << " ";
    }
    cout << endl;

    return 0;
}
