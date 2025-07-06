// https://leetcode.com/problems/split-the-array

class Solution {
public:
    bool isPossibleToSplit(vector<int>& nums) {

    std::unordered_map<int, int> freq;
    for (int num : nums) {
        freq[num]++;
    }

    int distinct_count = 0;
    int half_length = nums.size() / 2;
    std::unordered_set<int> used;

    for (const auto& pair : freq) {
        if (pair.second > 2) {
            return false; // If any element appears more than twice, it's impossible to split
        }
        distinct_count++;
    }

    return distinct_count >= half_length;
    }
};