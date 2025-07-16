// https://leetcode.com/problems/projection-area-of-3d-shapes

class Solution {
public:
    int projectionArea(vector<vector<int>>& grid) {
        //x-y
        int topSum = 0;
        for(int i = 0; i < grid.size(); i++){
            for(int j = 0; j < grid[0].size(); j++){
                if (grid[i][j] > 0) topSum++; 
            }
        }
        //x-z
        int frontSum = 0;
        int maxTow = 0;
        for(int i = 0; i < grid.size(); i++){
            int start = grid[i][0];
            for(int j = 0; j < grid[0].size();j++){
                maxTow = max(start, grid[i][j]);
            }
            frontSum += maxTow;
        }

        //z-y
        int SideSum = 0;
        maxTow = 0;
        for(int j = 0; j < grid[0].size(); j++){
            int start = grid[0][j];
            for(int i = 0; i < grid.size();i++){
                maxTow = max(start, grid[i][j]);
            }
            SideSum += maxTow;
        }
        
        return SideSum + topSum + frontSum;
    }
};