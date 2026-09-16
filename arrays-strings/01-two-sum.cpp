#include 
#include 
#include 

using namespace std;

class Solution {
public:
    vector twoSum(vector& nums, int target) {
        unordered_map seen;
        for (int i = 0; i < nums.size(); i++) {
            int diff = target - nums[i];
            if (seen.find(diff) != seen.end()) {
                return {seen[diff], i};
            }
            seen[nums[i]] = i;
        }
        return {};
    }
};

int main() {
    Solution sol;
    
    // Test Case 1: Standard
    vector nums1 = {2, 7, 11, 15};
    vector res1 = sol.twoSum(nums1, 9);
    cout << "Test 1: [" << res1[0] << ", " << res1[1] << "]\n";

    // Test Case 2: Edge Case
    vector nums2 = {3, 3};
    vector res2 = sol.twoSum(nums2, 6);
    cout << "Test 2: [" << res2[0] << ", " << res2[1] << "]\n";

    return 0;
}
