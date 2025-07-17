// https://leetcode.com/problems/patching-array

#include <vector>
using namespace std;

class Solution {
public:
    int minPatches(vector<int>& nums, int n) {
        long long maxReach = 0;
        int patches = 0, i = 0;
        
        while (maxReach < n) {
            if (i < nums.size() && nums[i] <= maxReach + 1) {
                maxReach += nums[i];
                i++;
            } else {
                maxReach += maxReach + 1;
                patches++;
            }
        }
        
        return patches;
    }
};
