// https://leetcode.com/problems/longest-substring-without-repeating-characters

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> char_set;
        int left = 0;
        int max_length = 0;

        for (int right = 0; right < s.length(); ++right) {
            while (char_set.count(s[right]) > 0) {
                char_set.erase(s[left]);
                ++left;
            }

            char_set.insert(s[right]);
            max_length = max(max_length, right - left + 1);
        }

        return max_length;
    }
};