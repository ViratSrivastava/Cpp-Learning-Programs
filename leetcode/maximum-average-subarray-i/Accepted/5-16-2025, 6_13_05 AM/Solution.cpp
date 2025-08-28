// https://leetcode.com/problems/maximum-average-subarray-i

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double temp = accumulate(nums.begin(), nums.begin() + k, 0);
        double tempV = temp;

        for (int i = k; i < nums.size(); i++) {
            temp = temp + nums[i] - nums[i - k];
            tempV = max(temp, tempV);
        }

        return tempV / k;
    }
};
