// https://leetcode.com/problems/get-maximum-in-generated-array

class Solution {
public:
    int getMaximumGenerated(int n) {
        if(n == 0) return 0;
        vector<int> nums(n+1,0);
        nums[0] = 0;
        nums[1]= 1;
        int maximium = 1;
        for(int i = 2; i <= n; i++){
            if(i%2 == 0){
                nums[i] = nums[i/2];
            }
            else{
                nums[i] = nums[i/2]+nums[i/2 + 1];
            }
            maximium = max(maximium, nums[i]);
        }
        return maximium;
    }
};