// https://leetcode.com/problems/gcd-sort-of-an-array

#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <unordered_map>
#include <unordered_set>

using namespace std;

// Union-Find (Disjoint Set Union) class
class UnionFind {
public:
    UnionFind(int size) : parent(size), rank(size, 1) {
        for (int i = 0; i < size; ++i) {
            parent[i] = i;
        }
    }

    int find(int u) {
        if (parent[u] != u) {
            parent[u] = find(parent[u]);
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
                rank[rootU] += 1;
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
        
        for (int num : nums) {
            for (int factor = 2; factor * factor <= num; ++factor) {
                if (num % factor == 0) {
                    uf.unite(num, factor);
                    uf.unite(num, num / factor);
                }
            }
            uf.unite(num, num); // Unite the number with itself to include it in its own component
        }

        unordered_map<int, vector<int>> components;
        for (int num : nums) {
            components[uf.find(num)].push_back(num);
        }

        vector<int> sorted_nums = nums;
        sort(sorted_nums.begin(), sorted_nums.end());

        vector<int> rebuilt_nums;
        for (auto& entry : components) {
            vector<int>& component = entry.second;
            sort(component.begin(), component.end());
            rebuilt_nums.insert(rebuilt_nums.end(), component.begin(), component.end());
        }

        return sorted_nums == rebuilt_nums;
    }
};