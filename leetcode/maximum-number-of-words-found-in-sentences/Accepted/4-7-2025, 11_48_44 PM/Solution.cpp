// https://leetcode.com/problems/maximum-number-of-words-found-in-sentences

class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int words = 0;
        int n = sentences.size();
        for(int i = 0; i < n; i++){
            int k = 1;
            for(char ch: sentences[i]){
                if(ch == ' '){
                    k++;
                }
                if(k > words){
                    words = k;
                }
            }
        }
        return words;
    }
};