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
        for (int i = 0; i <= s.length() - total_len; ++i) {
            unordered_map<string, int> substring_word_count;
            int j = 0;
            // Check words in the current window
            for (; j < words.size(); ++j) {
                string word = s.substr(i + j * word_len, word_len);
                if (word_count.find(word) == word_count.end()) {
                    break;
                }
                substring_word_count[word]++;
                if (substring_word_count[word] > word_count[word]) {
                    break;
                }
            }
            if (j == words.size()) {
                result.push_back(i);
            }
        }
        
        return result;
    }
};