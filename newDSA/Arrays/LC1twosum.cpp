#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) { // Avoid duplicate pairs
                if (nums[i] + nums[j] == target) {
                    return {i, j}; // Return the indices
                }
            }
        }
        return {}; // Return empty vector if no solution exists
    }
};

int main() {
    Solution solution;
    vector<int> nums = {2, 7, 14, 15};
    // assumption: each input has exactly one solution
    int target = 9;
    vector<int> result = solution.twoSum(nums, target);
    cout << "Indices: " << result[0] << ", " << result[1] << endl;
    return 0;
}

