// https://leetcode.com/problems/majority-element

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> hash;
        for(int i = 0; i < n; i++){
            hash[nums[i]] +=1;
        }
        int maxval = 0;
        int num;
        for(auto& pair : hash){
            if(pair.second > maxval){
                maxval = pair.second;
                num = pair.first;
            }
        }
        return num;
    }
};