// https://leetcode.com/problems/median-of-two-sorted-arrays

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size();
        int n = nums2.size();
        int k = m + n;
        vector<int> num(k);
        
        for (int i = 0; i < m; i++) {
            num[i] = nums1[i];
        }
        for (int i = 0; i < n; i++) {
            num[m + i] = nums2[i];
        }
        sort(num.begin(), num.end());

        double median = 0;

        if (k % 2 == 0) {
            median = (num[k / 2 - 1] + num[k / 2]) / 2.0;
        } else {
            median = num[k / 2];
        }

        return median;
    }
};
