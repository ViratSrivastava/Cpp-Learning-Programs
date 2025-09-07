// https://leetcode.com/problems/maximum-nesting-depth-of-the-parentheses

class Solution {
public:
    int maxDepth(string s) {
        int currDepth = 0;
        int maxDepth = 0;
        for (char ch : s) {
            if (ch == '(') {
                currDepth++;
                maxDepth = max(maxDepth, currDepth);
            } else if (ch == ')') {
                currDepth--;
            }
        }
        return maxDepth;
    }
};