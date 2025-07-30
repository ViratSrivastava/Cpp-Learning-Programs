// https://leetcode.com/problems/find-minimum-in-rotated-sorted-array

class Solution {
public:
    int findMin(vector<int>& nums) {
        if(nums[0] < nums[nums.size()-1]){
            return nums[0];
        }
        for(int i = 1; i < nums.size(); i++)
        {
            if(nums[i] < nums[i-1])
            {
                return nums[i];
            }
        }
        return 0;
    }
};