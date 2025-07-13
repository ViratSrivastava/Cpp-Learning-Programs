// https://leetcode.com/problems/queries-on-number-of-points-inside-a-circle

class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        //sqrt((x2-x1)(x2-x1) + (y2-y1)(y2-y1))
        //x1 is the centre
        //x2 is point
        vector<int>pointCount(queries.size(), 0);
        int n = points.size();
        int m = queries.size();
        for(int i = 0; i < n; i++){
            int val = 0;
            for(int j = 0; j < m; j++){
                double d = sqrt((queries[j][0] - points[i][0])*(queries[j][0] - points[i][0]) + (queries[j][1] - points[i][1])*(queries[j][1] - points[i][1]));
                if(d <= queries[j][2]){
                    pointCount[j]++;
                }
            }
        }
        return pointCount;
    }
};