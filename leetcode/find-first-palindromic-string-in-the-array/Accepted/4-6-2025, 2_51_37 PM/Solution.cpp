// https://leetcode.com/problems/find-first-palindromic-string-in-the-array

class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        vector<string> conWords(0);
        for(int i = 0; i < words.size(); i++){
            string temp = words[i];
            reverse(temp.begin(), temp.end());
            conWords.push_back(temp);
        }
        vector<string> palWords(0);
        for(int i = 0; i < words.size(); i++){
            if(conWords[i] == words[i]){
                return words[i];
            }
        }
        return "";
    }
};