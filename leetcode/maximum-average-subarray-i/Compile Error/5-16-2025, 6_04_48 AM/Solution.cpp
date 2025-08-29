// https://leetcode.com/problems/maximum-average-subarray-i

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double tempV = -DBL_MAX;
        double temp = static_cast<double>(accumulate(nums.begin(), nums.begin() + k, 0));
        double d = static_cast<double>(k);

        for(int i = k; i <= nums.size()-k; i++){
            double temp = temp - static_cast<double>(nums[i - 1]) + static_cast<double>(nums[i + k - 1]);
            double sum = max(temp,tempV);
        }
        return avg;
    }
};