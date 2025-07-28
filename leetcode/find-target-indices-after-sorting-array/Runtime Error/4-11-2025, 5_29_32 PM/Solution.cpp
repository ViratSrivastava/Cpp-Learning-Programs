// https://leetcode.com/problems/find-target-indices-after-sorting-array

class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        vector<int> ans;
        int l = 0;
        int r = n-1;
        while(l <= r){
            int mid = l + (r-l)/2;
            if(nums[mid] == target){
                ans.push_back(mid);
                if(nums[mid-1] != target){
                    l = mid+1;
                }
                else if(nums[mid+1] != target){
                    r = mid -1; 
                }
                
            }
            else if(nums[mid] > target){
                r = mid - 1;
            }
            else{
                l = mid + 1;
            }
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};