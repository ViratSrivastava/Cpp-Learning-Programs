// https://leetcode.com/problems/contains-duplicate

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int count[10000] = {0};
        for (int i : nums){
            count[i]++;
            if (count[i] >= 2){
                return true;
            }
        }
        return false;
    }
};