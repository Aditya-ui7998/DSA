#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int j = height.size() - 1;
        int a = 0;
        int i = 0;
        while (i < j) {
            int w = j - i;
            int h = min(height[i], height[j]);
            a = max(a, w * h);
            if (height[i] < height[j]) {
                i++;
            } else {
                j--;
            }
        }
        return a;
    }
};

int main() {
    Solution sol;
    vector<int> height = {1,8,6,2,5,4,8,3,7};
    cout << "Max Area: " << sol.maxArea(height) << endl;
    return 0;
}
