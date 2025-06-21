// https://leetcode.com/problems/build-array-from-permutation

class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        std::vector<int> ans(nums.size());
        for(int i = 0; i < nums.size(); i++)
        {   
            int j = nums[i];
            ans[i] = nums[j];
        }
        return ans;
    }
};
