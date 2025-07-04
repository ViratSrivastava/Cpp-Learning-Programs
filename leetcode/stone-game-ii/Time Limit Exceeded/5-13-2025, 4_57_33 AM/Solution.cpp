// https://leetcode.com/problems/stone-game-ii

class Solution {
public:
    int stoneGameII(vector<int>& piles) {
        int n = piles.size();

        // Precompute suffix sums
        vector<int> suffixSum(n);
        suffixSum[n - 1] = piles[n - 1];
        for (int i = n - 2; i >= 0; --i)
            suffixSum[i] = piles[i] + suffixSum[i + 1];

        // Pure recursive function: no DP
        function<int(int, int)> dfs = [&](int i, int m) -> int {
            if (i >= n) return 0;

            int maxStones = 0;
            for (int x = 1; x <= 2 * m && i + x <= n; ++x) {
                int opponent = dfs(i + x, max(m, x));
                int current = suffixSum[i] - opponent;
                maxStones = max(maxStones, current);
            }
            return maxStones;
        };

        return dfs(0, 1);
    }
};
