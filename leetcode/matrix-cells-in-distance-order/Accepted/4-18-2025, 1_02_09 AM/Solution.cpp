// https://leetcode.com/problems/matrix-cells-in-distance-order

class Solution {
public:
    vector<vector<int>> allCellsDistOrder(int rows, int cols, int rCenter, int cCenter) {
        vector<vector<int>> distance;
        for(int i = 0; i < rows; i++){
            for(int j = 0; j < cols; j++){
                int d = abs(rCenter - i) + abs(cCenter - j);
                distance.push_back({i,j,d});
            }
        }
        sort(distance.begin(), distance.end(), [](const vector<int>& a, const vector<int>& b)
        {
            return a[2] < b[2];
        });
        vector<vector<int>> points;
        for(const auto& row:distance){
            points.push_back({row[0],row[1]});
        }
        return points;
    }
};