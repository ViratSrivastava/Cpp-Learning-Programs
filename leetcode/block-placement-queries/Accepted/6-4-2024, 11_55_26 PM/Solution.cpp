// https://leetcode.com/problems/block-placement-queries

#include <vector>
#include <set>
#include <map>

using namespace std;

class Solution {
    // Method to update spaces when an obstacle is placed
    void breakSpaces(int pos) {
        auto it = obstacles.upper_bound(pos);
        int pos_next = *it;
        int pos_prev = *prev(it);

        // Remove the original space
        int orig_size = pos_next - pos_prev;
        spaces[orig_size].erase(pos_prev);
        if (spaces[orig_size].empty()) {
            spaces.erase(orig_size);
        }

        // Add the new spaces
        spaces[pos - pos_prev].insert(pos_prev);
        spaces[pos_next - pos].insert(pos);
    }
    
    // Method to check if there is a sufficient space to place the block
    bool findSpace(int maxi_dist, int block_size) {
        auto it = spaces.lower_bound(block_size);
        while (it != spaces.end()) {
            set<int> & start_positions = it->second;
            int first_pos = *start_positions.begin();
            if (first_pos + block_size <= maxi_dist) {
                return true;
            }
            advance(it, 1);
        }
        return false;
    }

    vector<bool> ans;
    set<int> obstacles;                // To keep obstacle coordinates in order
    map<int, set<int>> spaces;         // Keep groups of empty spaces in order: space_size -> set of start indices

public:
    vector<bool> getResults(const vector<vector<int>>& queries) {
        int const nquery = queries.size();
        ans.reserve(nquery);
        int maxi_dist = min(5 * 100000, 3 * nquery);
        obstacles.insert(0);           // Dummy obstacle at the start
        obstacles.insert(maxi_dist);   // Dummy obstacle at the end
        spaces[maxi_dist].insert(0);   // Initial space from 0 to maxi_dist

        for (const auto & query : queries) {
            int op = query[0];
            if (op == 1) {
                // Place an obstacle
                breakSpaces(query[1]);
                obstacles.insert(query[1]);
            } else if (op == 2) {
                // Check if a block can be placed
                ans.push_back(findSpace(query[1], query[2]));
            }
        }
        
        return ans;
    }
};
