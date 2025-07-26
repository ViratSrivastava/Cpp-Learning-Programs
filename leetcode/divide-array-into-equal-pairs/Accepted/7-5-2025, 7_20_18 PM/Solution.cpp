// https://leetcode.com/problems/divide-array-into-equal-pairs

class Solution {
public:
    bool divideArray(vector<int>& nums) {
        vector<pair<int,int>>pairArr;
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int j = nums.size()-1;
        for(int i = 0; i < n - 1; i++){
            pairArr.push_back({nums[i],nums[i+1]});
            i++;
        }
        for(pair p : pairArr){
            if(p.first != p.second){
                return false;
            }
        }
        return true;
    }
};