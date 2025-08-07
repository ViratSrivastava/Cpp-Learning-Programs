// https://leetcode.com/problems/matrix-diagonal-sum

class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n = mat.size();
        if(n == 1){
            return mat[0][0];
        }
        // primary
        int pSum = 0;
        for(int i = 0; i < n; i++){
            pSum += mat[i][i];
        }
        //secondary
        int sSum = 0;
        int j = 0;
        for(int i = n-1; i >= 0; i--){
            
            //for(int j = 0; j < n; j++){
            sSum += mat[i][j];
            j++;
            //}
        }
        int sum = pSum + sSum;
        if(n%2 != 0){
            int duplicate = mat[(n/2)][(n/2)];
            sum = sum - duplicate;
        }
        
        return sum; 
    }
};