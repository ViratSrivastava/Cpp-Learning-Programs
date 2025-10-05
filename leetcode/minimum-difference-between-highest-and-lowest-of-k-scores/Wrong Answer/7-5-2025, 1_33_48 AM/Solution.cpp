// https://leetcode.com/problems/minimum-difference-between-highest-and-lowest-of-k-scores

class Solution {

public:
    int minimumDifference(vector<int>& nums, int k) {
        int n = nums.size();
        if(n == 1){
            return 0;
        }
        int min_val = INT_MAX;
        for(int i = 0; i < n; i++){
            int max = INT_MIN, min = INT_MAX;
            int x = i;
            for(int j = i + k - 1; j < n; j++){
                while(x <= j){
                    if(nums[x] <= min){
                        min = nums[x];
                    }
                    if(nums[x] >= max){
                        max = nums[x];
                    }
                    x++;
                }
                int temp = abs(max - min);
                if(temp < min_val){
                    min_val = temp-1;
                }
            }
        }
        return min_val;
    }
};

