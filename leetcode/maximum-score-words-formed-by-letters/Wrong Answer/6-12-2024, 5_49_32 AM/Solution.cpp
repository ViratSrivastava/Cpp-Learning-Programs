// https://leetcode.com/problems/maximum-score-words-formed-by-letters

class Solution {
public:
    int maxScoreWords(vector<string>& words, vector<char>& letters, vector<int>& score) {
        vector<int> letterCount(26, 0);
        for (char letter : letters) {
            letterCount[letter - 'a']++;
        }
        
        unordered_map<char, int> charScore;
        for (int i = 0; i < 26; i++) {
            charScore[char('a' + i)] = score[i];
        }
        
        return maxScore(words, letterCount, charScore, 0);
    }

private:
    int maxScore(const vector<string>& words, vector<int>& letterCount, const unordered_map<char, int>& charScore, int index) {
        if (index == words.size()) return 0;
        
        int maxScoreSkip = maxScore(words, letterCount, charScore, index + 1);
        
        vector<int> wordCount(26, 0);
        int currentScore = 0;
        bool canForm = true;
        
        for (char c : words[index]) {
            wordCount[c - 'a']++;
            if (wordCount[c - 'a'] > letterCount[c - 'a']) {
                canForm = false;
                break;
            }
            currentScore += charScore.at(c);
        }
        
        int maxScoreInclude = 0;
        if (canForm) {
            for (char c : words[index]) {
                letterCount[c - 'a'] -= wordCount[c - 'a'];
            }
            maxScoreInclude = currentScore + maxScore(words, letterCount, charScore, index + 1);
            for (char c : words[index]) {
                letterCount[c - 'a'] += wordCount[c - 'a'];
            }
        } else {
            maxScoreInclude = maxScoreSkip;
        }
        
        return max(maxScoreSkip, maxScoreInclude);
    }
};