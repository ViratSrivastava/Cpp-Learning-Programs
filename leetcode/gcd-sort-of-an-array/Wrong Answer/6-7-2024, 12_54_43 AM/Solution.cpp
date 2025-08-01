// https://leetcode.com/problems/gcd-sort-of-an-array

#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <numeric>

using namespace std;

class UnionFind {
public:
    UnionFind(int size) : parent(size), rank(size, 1) {
        iota(parent.begin(), parent.end(), 0); // Initialize parent to itself
    }

    int find(int u) {
        if (parent[u] != u) {
            parent[u] = find(parent[u]); // Path compression
        }
        return parent[u];
    }

    void unite(int u, int v) {
        int rootU = find(u);
        int rootV = find(v);

        if (rootU != rootV) {
            if (rank[rootU] > rank[rootV]) {
                parent[rootV] = rootU;
            } else if (rank[rootU] < rank[rootV]) {
                parent[rootU] = rootV;
            } else {
                parent[rootV] = rootU;
                rank[rootU]++;
            }
        }
    }

private:
    vector<int> parent;
    vector<int> rank;
};

class Solution {
public:
    bool gcdSort(vector<int>& nums) {
        int max_val = *max_element(nums.begin(), nums.end());
        UnionFind uf(max_val + 1);

        // Unite elements with their factors
        for (int num : nums) {
            for (int factor = 2; factor * factor <= num; ++factor) {
                if (num % factor == 0) {
                    uf.unite(num, factor);
                    uf.unite(num, num / factor);
                }
            }
        }

        // Group numbers by their connected components
        unordered_map<int, vector<int>> components;
        for (int num : nums) {
            components[uf.find(num)].push_back(num);
        }

        // Sort the original array
        vector<int> sorted_nums = nums;
        sort(sorted_nums.begin(), sorted_nums.end());

        // Check each component
        int index = 0;
        for (const auto& entry : components) {
            const vector<int>& component = entry.second;
            vector<int> sorted_component = component;
            sort(sorted_component.begin(), sorted_component.end());

            // Check if sorted component matches the corresponding segment in sorted_nums
            for (int num : sorted_component) {
                if (num != sorted_nums[index]) {
                    return false;
                }
                index++;
            }
        }

        return true;
    }
};