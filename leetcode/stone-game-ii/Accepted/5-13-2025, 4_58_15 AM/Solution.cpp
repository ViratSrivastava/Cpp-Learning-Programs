// https://leetcode.com/problems/stone-game-ii

class Solution {
public:
    int stoneGameII(vector<int>& piles) {
        int n = piles.size();

        // suffixSum[i] = total stones from i to end
        vector<int> suffixSum(n);
        suffixSum[n - 1] = piles[n - 1];
        for (int i = n - 2; i >= 0; --i) {
            suffixSum[i] = piles[i] + suffixSum[i + 1];
        }

        // dp[i][m] = max stones the current player can get from index i with M = m
        vector<vector<int>> dp(n, vector<int>(n + 1, -1));

        // Recursive function with memoization
        function<int(int, int)> dfs = [&](int i, int m) -> int {
            if (i >= n) return 0;           // No more piles left
            if (dp[i][m] != -1) return dp[i][m]; // Already computed

            int maxStones = 0;
            for (int x = 1; x <= 2 * m && i + x <= n; ++x) {
                int opponent = dfs(i + x, max(m, x)); // opponent's best move
                int current = suffixSum[i] - opponent; // total - opponent = current player
                maxStones = max(maxStones, current);
            }

            return dp[i][m] = maxStones;
        };

        return dfs(0, 1); // Start from index 0, M = 1
    }
};
