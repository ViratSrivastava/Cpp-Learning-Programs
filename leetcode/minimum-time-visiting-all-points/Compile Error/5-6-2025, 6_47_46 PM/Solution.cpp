// https://leetcode.com/problems/minimum-time-visiting-all-points

class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {

        function diagonal(startX, startY, targetX, targetY)
        int timer = 0;
        int n = points.size();
        for(int i = 0; i < n-1; i++){
            startX = points[i][0];
            startY = points[i][0];
            targetX = points[i+1][0];
            targetY = points[i+1][1];
            while(startX != targetX && startY != targetY){

            }
            if(startX < targetX && startY < targetY){
                startX++;
                startY++;
                timer++;
            }
            else if(startX == targetX && startY < targetY){
                startY++;
                timer++;
            }
            else if(startX < targetX && startY == targetY){
                startX++;
                timer++;
            }else if(startX > targetX && startY == targetY){
                startX--;
                timer++;
            }else if(startX == targetX && startY < targetY){
                startY++;
                timer++;
            }else if(startX == targetX && startY < targetY){
                startY++;
                timer++;
            }

        }
    }
};