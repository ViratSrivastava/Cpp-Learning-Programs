// https://leetcode.com/problems/maximum-points-you-can-obtain-from-cards



class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int score = INT_MIN;
        int sum = 0;
        int n = cardPoints.size();
        for(int i = 0; i < k; i++){
            sum = sum + cardPoints[i];
        }
        score = sum;
        int j = k - 1;
        for(int i = 0; i < k; ++i){
            sum -= cardPoints[k - 1 - i];
            sum += cardPoints[n - 1 - i];
            score = max(score,sum);
        }
        return score;
    }
};