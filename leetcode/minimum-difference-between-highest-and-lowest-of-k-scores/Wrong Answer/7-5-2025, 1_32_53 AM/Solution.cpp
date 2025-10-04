// https://leetcode.com/problems/minimum-difference-between-highest-and-lowest-of-k-scores

class Solution {


public:
    int minimumDifference(vector<int>& nums, int k) {
        int n = nums.size();
        if(n == 1){
            return 0;
        }
        int min_val = INT_MAX;
        int diff = 0;
        sort(nums.begin(), nums.end());
        for(int i = 0; i < n-1; i++){
            diff = abs(nums[i]-nums[i+1]);
            min_val = min(diff,min_val);
        }
        return min_val;
    }
};