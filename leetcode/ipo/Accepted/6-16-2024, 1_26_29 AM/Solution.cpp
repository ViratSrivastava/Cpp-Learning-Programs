// https://leetcode.com/problems/ipo

class Solution {
public:
    int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {
        int n = profits.size();
        vector<pair<int, int>> projects(n);
        
        // Creating a list of projects with capital and profits
        for (int i = 0; i < n; ++i) {
            projects[i] = {capital[i], profits[i]};
        }

        // Sorting projects by their capital requirements
        sort(projects.begin(), projects.end());

        priority_queue<int> maxHeap;
        int current = 0;

        // Iterate up to k times to pick the best projects
        for (int i = 0; i < k; ++i) {
            // Push all projects that can be started with the current capital into the max-heap
            while (current < n && projects[current].first <= w) {
                maxHeap.push(projects[current].second);
                ++current;
            }

            // If we can't start any more projects, break
            if (maxHeap.empty()) break;

            // Select the project with the maximum profit
            w += maxHeap.top();
            maxHeap.pop();
        }

        return w;
    }
};