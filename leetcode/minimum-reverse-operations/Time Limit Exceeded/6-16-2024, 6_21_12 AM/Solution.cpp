// https://leetcode.com/problems/minimum-reverse-operations


class Solution {
public:
    vector<int> minReverseOperations(int n, int p, vector<int>& banned, int k) {
        vector<int> result(n, -1);
        unordered_set<int> bannedSet(banned.begin(), banned.end());
        
        // If the start position is banned, return immediately
        if (bannedSet.find(p) != bannedSet.end()) {
            return result;
        }
        
        // BFS setup
        queue<int> q;
        q.push(p);
        result[p] = 0;
        
        // BFS traversal
        while (!q.empty()) {
            int current_pos = q.front();
            q.pop();
            
            // Calculate the range for reverse operations
            for (int start = max(0, current_pos - (k - 1)); start <= min(n - k, current_pos); ++start) {
                int end = start + k - 1;
                
                // The new position of '1' after reversing subarray [start, end]
                int new_pos = start + (end - current_pos);
                
                // Check if new position is valid
                if (new_pos >= 0 && new_pos < n && bannedSet.find(new_pos) == bannedSet.end() && result[new_pos] == -1) {
                    result[new_pos] = result[current_pos] + 1;
                    q.push(new_pos);
                }
            }
        }
        
        return result;
    }
};