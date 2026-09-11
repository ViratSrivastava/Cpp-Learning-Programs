// https://leetcode.com/problems/maximum-points-you-can-obtain-from-cards

class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int maxScore = 0;
        int score_l = accumulate(cardPoints.begin(), cardPoints.begin() + k, 0);
        int score_r = accumulate(cardPoints.end() - k, cardPoints.end(), 0);

        maxScore = max(score_l, score_r);
        return maxScore;
    }
};