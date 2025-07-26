// https://leetcode.com/problems/di-string-match

class Solution {
public:
    vector<int> diStringMatch(string s) {
        int n = s.size();
        vector<int> output;
        int d = n;
        int i = 0;

        for(char ch : s){
            if(ch == 'D'){
                output.push_back(d);
                d--;
            }
            if(ch == 'I'){
                output.push_back(i);          
                    i++;
            }
        }
        output.push_back(i);
        return output;
    }
};