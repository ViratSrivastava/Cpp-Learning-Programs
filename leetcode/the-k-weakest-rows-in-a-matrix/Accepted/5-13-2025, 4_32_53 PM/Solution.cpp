// https://leetcode.com/problems/the-k-weakest-rows-in-a-matrix

class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<pair<int,int>> list;
        int soldier = 0;
        for(int i = 0; i < mat.size();i++){
            for(int j = 0; j < mat[0].size(); j++){
                if(mat[i][j] == 1){
                    soldier++;
                }
            }
            list.push_back({soldier,i});
            soldier = 0;
        }
        vector<int> weaklist;
        sort(list.begin(),list.end());
        for(int i = 0; i < k; i++){
            weaklist.push_back(list[i].second);
        }
        return weaklist;
    }
};