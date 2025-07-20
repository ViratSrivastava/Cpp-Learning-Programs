// https://leetcode.com/problems/most-profit-assigning-work

class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
        vector<pair<int, int>> jobs;
        int n = difficulty.size();
        
        // Create job pairs and sort them by difficulty
        for (int i = 0; i < n; ++i) {
            jobs.emplace_back(difficulty[i], profit[i]);
        }
        sort(jobs.begin(), jobs.end());
        
        // Sort the workers by their ability
        sort(worker.begin(), worker.end());
        
        int maxProfit = 0, j = 0, best = 0;
        for (int i = 0; i < worker.size(); ++i) {
            // For each worker, find the best job they can do
            while (j < n && jobs[j].first <= worker[i]) {
                best = max(best, jobs[j].second);
                ++j;
            }
            // Add the best profit they can achieve to the total profit
            maxProfit += best;
        }
        
        return maxProfit;
    }   
};