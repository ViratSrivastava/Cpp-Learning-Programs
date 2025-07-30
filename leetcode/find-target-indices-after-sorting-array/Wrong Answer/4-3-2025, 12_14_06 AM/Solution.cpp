// https://leetcode.com/problems/find-target-indices-after-sorting-array

#include <iostream>
class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int found = 0;
        for(int i = 0; i < n; i++){
            if(nums[i] == target){
                found = i;
                break;
            }
        }
        int count = 1;
        for(int i = found+1; i < n; i++){
            if(nums[i] == target){
                count++;
            }
        }
        vector<int> index(count);
        index[0] = found;
        for(int i = 1; i < count; i++){
            index[i] = found+1;
        }
        return index;
    }
};