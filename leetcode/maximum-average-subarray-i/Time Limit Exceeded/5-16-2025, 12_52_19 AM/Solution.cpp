// https://leetcode.com/problems/maximum-average-subarray-i

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double avg = -DBL_MAX;
        double temp;

        double d = static_cast<double>(k);
        for(int i = 0; i <= nums.size()-k; i++){
            double sum = static_cast<double>(accumulate(nums.begin()+i, nums.begin()+i+k, 0));
            temp = sum/d;
            avg = max(temp,avg);
        }
        return avg;
    }
};