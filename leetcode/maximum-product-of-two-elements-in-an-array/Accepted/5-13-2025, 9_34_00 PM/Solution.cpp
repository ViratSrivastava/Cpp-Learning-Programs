// https://leetcode.com/problems/maximum-product-of-two-elements-in-an-array

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int j = n-1;
        int i = n-2;
        int product = (nums[i]-1) * (nums[j]-1);
        return product;
    }
};