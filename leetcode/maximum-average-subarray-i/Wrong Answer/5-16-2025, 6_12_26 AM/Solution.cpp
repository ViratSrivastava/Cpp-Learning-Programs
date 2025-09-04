// https://leetcode.com/problems/maximum-average-subarray-i

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        if(nums.size() == 1){
            return static_cast<double>(nums[0]);
        }
        double tempV = -DBL_MAX;
        double temp = static_cast<double>(accumulate(nums.begin(), nums.begin() + k, 0));
        double d = static_cast<double>(k);
        for(int i = k; i < nums.size(); i++){
            temp = temp + static_cast<double>(nums[i]) - static_cast<double>(nums[i-k]);
            tempV = max(temp,tempV);
        }
        return tempV/d;
    }
};