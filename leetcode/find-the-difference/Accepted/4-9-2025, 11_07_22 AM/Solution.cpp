// https://leetcode.com/problems/find-the-difference

class Solution {
public:
    char findTheDifference(string s, string t) {
        sort(t.begin(), t.end());
        sort(s.begin(), s.end());
        int n = s.length();

        for(int i = 0; i < n; i++){
            if(s[i] != t[i]){
                return t[i];
            }
        }
        return t[n];
    }
};