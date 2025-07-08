// https://leetcode.com/problems/shuffle-the-array

class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        std::vector<int> ans(nums.size());
        int j = 0;
        for(int i = 0; i < n; i++)
        {
            ans[i+j] = nums[i];
            ans[i+j+1] = nums[i+n];
            j++;
        }
        return ans;
    }
};