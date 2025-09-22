// https://leetcode.com/problems/maximum-subarray

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if(nums.size() == 1){
            return nums[0];
        }
        int l = 0;
        int r = nums.size()-1;
        int sum = 0;
        while(r >= l){
            int temp_sum = accumulate(nums.begin() + l, nums.begin() + r+1, 0);
            if(temp_sum>sum){
                sum = temp_sum;
                temp_sum = 0;
            }
            if(nums[l] >= nums[r]){
                r--;
            }
            else{
                l++;
            }
            temp_sum = 0;
        }
        return sum;
    }
};