// https://leetcode.com/problems/contains-duplicate

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int count[10001] = {0};
        for (int i : nums){
            if(i < 0 || i > 10000){
                return false;
            }
            else{
                count[i]++;
                if (count[i] >= 2){
                    return true;
                }
            }
        }
        return false;
    }
};