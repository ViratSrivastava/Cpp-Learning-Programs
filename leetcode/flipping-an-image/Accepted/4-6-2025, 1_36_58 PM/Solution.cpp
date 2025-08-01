// https://leetcode.com/problems/flipping-an-image

class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        //just change 1s with 0s
        int n = image.size();
        // horizaontal flip
        for(int i = 0; i < n; i++){
            reverse(image[i].begin(), image[i].end());
            for(int j = 0; j < n; j++){
                image[i][j] = image[i][j] ^ 1; 
            }
        }
        //reverse(image.begin(), image.end());
        return image;
    }
};