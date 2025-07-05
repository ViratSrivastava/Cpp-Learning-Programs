// https://leetcode.com/problems/running-sum-of-1d-array

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        std::vector<int> runningSum(nums.size());
        for(int i = 0; i <nums.size();i++)
        {
            runningSum[i] = 0;
            for(int j = 0; j <= i; j++)
            {
                runningSum[i] = runningSum[i] + nums[j];
            }
        }
        return runningSum;
    }
};