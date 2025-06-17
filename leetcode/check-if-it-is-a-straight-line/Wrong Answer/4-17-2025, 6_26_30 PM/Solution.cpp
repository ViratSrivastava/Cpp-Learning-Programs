// https://leetcode.com/problems/check-if-it-is-a-straight-line

class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        int diff = 0;
        int  n = coordinates.size();
        if(n == 2){
            return true;
        }
        int dif = coordinates[0][0] - coordinates[0][1]; 
        for(int i = 0; i < n; i++){
            if(coordinates[i][0] - coordinates[i][1] == dif){
                continue;
            }
            else{
                return false;
            }
        }
        return true;
    }
};