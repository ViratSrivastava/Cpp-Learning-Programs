// https://leetcode.com/problems/maximum-product-difference-between-two-pairs

class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
       sort(nums.begin(), nums.end());
       int n = nums.size();
       int p1 = nums[0] * nums[1];
       int p2 = nums[n-1] * nums[n-2];
       return p2 - p1;
    }
};