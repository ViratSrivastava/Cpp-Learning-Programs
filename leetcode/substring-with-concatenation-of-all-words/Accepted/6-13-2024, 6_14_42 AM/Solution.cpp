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
        int s_len = s.length();
        
        if (s_len < total_len) {
            return result;
        }
        
        unordered_map<string, int> word_count;
        for (const auto& word : words) {
            word_count[word]++;
        }
        
        for (int i = 0; i < word_len; ++i) {
            unordered_map<string, int> current_count;
            int start = i, count = 0;
            
            for (int j = i; j <= s_len - word_len; j += word_len) {
                string word = s.substr(j, word_len);
                
                if (word_count.find(word) != word_count.end()) {
                    current_count[word]++;
                    count++;
                    
                    while (current_count[word] > word_count[word]) {
                        string left_word = s.substr(start, word_len);
                        current_count[left_word]--;
                        count--;
                        start += word_len;
                    }
                    
                    if (count == words.size()) {
                        result.push_back(start);
                    }
                } else {
                    current_count.clear();
                    count = 0;
                    start = j + word_len;
                }
            }
        }
        
        return result;
    }
};