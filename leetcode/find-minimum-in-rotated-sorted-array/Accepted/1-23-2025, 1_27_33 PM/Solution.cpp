// https://leetcode.com/problems/find-minimum-in-rotated-sorted-array

class Solution {
public:
    int findMin(vector<int>& nums) {
        /*      BRUTE FORCE
            if (nums.size() == 1) {
                return nums[0];
            }
            if (nums[0] < nums[nums.size() - 1]) {
                return nums[0];
            }
            for (int i = 1; i < nums.size(); i++) {
                  if (nums[i] < nums[i - 1]) {
                    return nums[i];
                }
            }
            return 0;
        */
        // Binary Search
        // single element array case
        if (nums.size() == 1) {
            return nums[0];
        }
        // sorted array
        int l = 0;
        int r = nums.size() - 1;
        if (nums[l] < nums[r]) {
            return nums[0];
        }
        // B.S. loop
        while (l <= r) {
            int mid = l + (r - l) / 2;
            if (mid > 0 && nums[mid] < nums[mid - 1]) {
                return nums[mid];
            }
            else if (nums[mid] < nums[r]) {
                r = mid-1;
            } else {
                l = mid+1;
            }
        }
        return 0;
    }
};