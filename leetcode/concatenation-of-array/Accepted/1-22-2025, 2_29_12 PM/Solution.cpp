// https://leetcode.com/problems/concatenation-of-array

class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        std::vector<int> ans(2*nums.size());
        for(int i = 0;i < nums.size();i++)
        {
            ans[i] = nums[i];
        }
        for(int i = 0;i < nums.size();i++)
        {
            ans[i + nums.size()] = nums[i];
        }
        return ans;
    }
};