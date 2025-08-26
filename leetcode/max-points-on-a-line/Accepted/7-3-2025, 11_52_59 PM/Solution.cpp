// https://leetcode.com/problems/max-points-on-a-line

class Solution {
public:
    int maxPoints(vector<vector<int>>& points) {
        int n = points.size();
        if (n <= 2) return n;

        int maxCount = 0;

        for (int i = 0; i < n; i++) {
            unordered_map<double, int> slopeCount;
            int samePoint = 1;

            for (int j = 0; j < n; j++) {
                if (i == j) continue;
                int dx = points[j][0] - points[i][0];
                int dy = points[j][1] - points[i][1];

                if (dx == 0 && dy == 0) {
                    samePoint++;
                } else {
                    double slope = dx == 0 ? DBL_MAX : (double)dy / dx;
                    slopeCount[slope]++;
                }
            }

            int localMax = 0;
            for (auto& [slope, count] : slopeCount)
                localMax = max(localMax, count);

            maxCount = max(maxCount, localMax + samePoint);
        }

        return maxCount;
    }

};
