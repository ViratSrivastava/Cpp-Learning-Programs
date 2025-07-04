// https://leetcode.com/problems/search-in-rotated-sorted-array

class Solution {
public:
    int search(vector<int>& nums, int target) {
        /*
        BRUTE FORCE
        for(int i = 0; i < nums.size();i++){
            if(nums[i] == target){
                return i;
            }
        }
        return -1;
        */
        int l = 0;
        int r = nums.size()-1;
        while(l<=r)
        {   
            int mid = l + (r-l)/2;
            if(nums[mid] == target){
                return mid;
            }
            if(nums[mid] > target && nums[mid] < nums[r]){
                r = mid - 1;
            }
            else{
                l = mid + 1;
            }
        }
        return -1;
    }
};