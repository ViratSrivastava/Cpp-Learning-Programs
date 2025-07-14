// https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string

class Solution {
public:
    string removeDuplicates(string s) {
        stack<char>dub;
        for(char ch : s){
            if(!dub.empty() && ch == dub.top()){
                dub.pop();
            }
            else{
                dub.push(ch);
            }           
        }
        string result;
        while(!dub.empty()){
            result += dub.top();
            dub.pop();
        }
        reverse(result.begin(), result.end());
        return result;
    }
};