// https://leetcode.com/problems/minimum-swaps-to-group-all-1s-together-ii

class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int n = nums.size();
        int k = 0;
        for(int i : nums){
            if(i == 1){
                k++;
            }
        }
        if(k == 1 || k == n){
            return 0;
        }
        int maxK = 0;
        int curK = 0;

        for(int i = 0; i < k; i++){
            if(nums[i] == 1) curK++;
        }

        maxK = curK;

        for(int i = 1; i < n; i++){
            if(nums[(i-1+n) % n] == 1) curK--;
            if(nums[(i+k-1) % n] == 1) curK++;
            maxK = max(maxK, curK);
        }
        return k-maxK;
    }
};