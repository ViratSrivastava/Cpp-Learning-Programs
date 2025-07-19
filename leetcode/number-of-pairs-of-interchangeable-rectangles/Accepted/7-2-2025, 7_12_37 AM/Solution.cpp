// https://leetcode.com/problems/number-of-pairs-of-interchangeable-rectangles

class Solution {
public:
    long long interchangeableRectangles(vector<vector<int>>& rectangles) {
        unordered_map<long double, long long> ratioCount;
        for (auto& rect : rectangles) {
            long double ratio = (long double)rect[0] / rect[1];
            ratioCount[ratio]++;
        }

        long long count = 0;
        for (auto& [_, freq] : ratioCount) {
            count += (freq * (freq - 1)) / 2;
        }

        return count;
    }
};