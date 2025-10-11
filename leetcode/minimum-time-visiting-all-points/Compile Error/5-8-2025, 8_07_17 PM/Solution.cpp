// https://leetcode.com/problems/minimum-time-visiting-all-points

class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int timer = 0;
        int n = points.size();
        for(int i = 0; i < n-1; i++){
            int d = abs(points[i+1][0]-points[i][0]) + abs(points[i+1][1]-points[i][0]);
            
        }
    }
};