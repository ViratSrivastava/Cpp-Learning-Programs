// https://leetcode.com/problems/shuffle-string

class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        int n = indices.size();
        string suf(n, ' ');
        for(int i = 0; i < n; i++){
            int temp = indices[i];
            suf[temp] = s[i];
        }
        return suf;
    }
};