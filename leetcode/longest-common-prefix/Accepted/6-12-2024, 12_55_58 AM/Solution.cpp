// https://leetcode.com/problems/longest-common-prefix

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";

        // Initialize the prefix with the first string
        string prefix = strs[0];
        
        // Iterate through the rest of the strings
        for (int i = 1; i < strs.size(); ++i) {
            // Update the prefix to be the common part between the prefix and the current string
            prefix = commonPrefix(prefix, strs[i]);
            // If the prefix becomes empty, return immediately
            if (prefix.empty()) break;
        }
        
        return prefix;
    }
    
private:
    string commonPrefix(const string& s1, const string& s2) {
        int minLength = min(s1.length(), s2.length());
        int i = 0;
        while (i < minLength && s1[i] == s2[i]) {
            ++i;
        }
        return s1.substr(0, i);
    }
};