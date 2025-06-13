// https://leetcode.com/problems/binary-subarrays-with-sum

class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int sum = 0;
        int count = 0;
        int n = nums.size();
        for(int i = 0; i < n; i++){
            sum = 0;
            for(int j = i; j < n; j++){
                sum += nums[j];
                if(sum == goal){
                    count++;
                }
                if(sum > goal && goal >= 0) break;
            }
        }
        return count;
    }
};