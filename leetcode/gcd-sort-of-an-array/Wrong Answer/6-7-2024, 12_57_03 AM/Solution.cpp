// https://leetcode.com/problems/gcd-sort-of-an-array

#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <numeric>

using namespace std;

class Solution {
public:
    bool gcdSort(vector<int>& nums) {
        int n = nums.size();
        vector<int> sorted_nums = nums;
        sort(sorted_nums.begin(), sorted_nums.end());

        for (int i = 0; i < n - 1; ++i) {
            for (int j = i + 1; j < n; ++j) {
                if (gcd(sorted_nums[i], sorted_nums[j]) == 1) {
                    if (!canSwap(nums, sorted_nums[i], sorted_nums[j])) {
                        return false;
                    }
                }
            }
        }

        return true;
    }

private:
    int gcd(int a, int b) {
        if (b == 0) {
            return a;
        }
        return gcd(b, a % b);
    }

    bool canSwap(const vector<int>& nums, int a, int b) {
        for (int num : nums) {
            if (gcd(num, a) > 1 && gcd(num, b) > 1) {
                return true;
            }
        }
        return false;
    }
};