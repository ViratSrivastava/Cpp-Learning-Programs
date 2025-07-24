// https://leetcode.com/problems/find-pivot-index

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            int l_sum = 0;
            int r_sum = 0;
            for (int j = 0; j < i; j++) {
                l_sum = nums[j] + l_sum;
            }
            for (int k = n - 1; k > i; k--) {
                r_sum = nums[k] + r_sum;
            }
            if (r_sum == l_sum) {
                return i;
            }
        }
        return -1;
    }
};