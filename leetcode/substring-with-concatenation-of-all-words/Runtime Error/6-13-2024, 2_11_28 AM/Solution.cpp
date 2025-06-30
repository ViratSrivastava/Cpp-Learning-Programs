// https://leetcode.com/problems/substring-with-concatenation-of-all-words

class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        vector<int> result;
        if (s.empty() || words.empty() || words[0].empty()) {
            return result;
        }
        
        int word_len = words[0].length();
        int total_len = word_len * words.size();
        
        // Create a frequency map for the words
        unordered_map<string, int> word_count;
        for (const auto& word : words) {
            word_count[word]++;
        }
        
        // Iterate over the string with a sliding window of size total_len
        for (int i = 0; i < word_len; ++i) {
            unordered_map<string, int> substring_word_count;
            int count = 0;
            int start = i;
            
            // Move the window with a step of word_len
            for (int j = i; j <= s.length() - word_len; j += word_len) {
                string word = s.substr(j, word_len);
                
                // If word is not in words, reset the window
                if (word_count.find(word) == word_count.end()) {
                    substring_word_count.clear();
                    count = 0;
                    start = j + word_len;
                    continue;
                }
                
                substring_word_count[word]++;
                count++;
                
                // If count of a word in substring exceeds count in words, move the window forward
                while (substring_word_count[word] > word_count[word]) {
                    substring_word_count[s.substr(start, word_len)]--;
                    count--;
                    start += word_len;
                }
                
                // If count matches total words count, add start to result
                if (count == words.size()) {
                    result.push_back(start);
                }
            }
        }
        
        return result;
    }
};