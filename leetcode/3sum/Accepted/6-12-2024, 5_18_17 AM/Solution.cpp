// https://leetcode.com/problems/3sum

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        int n = nums.size();
        
        if (n < 3) return result; // No triplet can be formed if less than 3 numbers
        
        // Sort the array
        sort(nums.begin(), nums.end());
        
        // Iterate through the array
        for (int i = 0; i < n - 2; ++i) {
            // Skip duplicate elements to avoid duplicate triplets
            if (i > 0 && nums[i] == nums[i - 1]) continue;
            
            // Two-pointer approach to find the other two numbers
            int left = i + 1;
            int right = n - 1;
            
            while (left < right) {
                int sum = nums[i] + nums[left] + nums[right];
                
                if (sum == 0) {
                    result.push_back({nums[i], nums[left], nums[right]});
                    // Move left pointer to the right, skipping duplicates
                    while (left < right && nums[left] == nums[left + 1]) ++left;
                    // Move right pointer to the left, skipping duplicates
                    while (left < right && nums[right] == nums[right - 1]) --right;
                    ++left;
                    --right;
                } else if (sum < 0) {
                    ++left;
                } else {
                    --right;
                }
            }
        }
        
        return result;
    }
};
