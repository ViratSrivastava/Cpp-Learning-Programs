// https://leetcode.com/problems/majority-element

class Solution {
public:
    int majorityElement(std::vector<int>& nums) {
        std::unordered_map<int, int> count;
        int n = nums.size();
        for (int i : nums) {
            count[i]++;
            if (count[i] > n/2) {
                return i;
            }
        }
        return -1;
    }
};