// https://leetcode.com/problems/maximum-points-you-can-obtain-from-cards

class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int l = 0;
        int r = cardPoints.size() - 1;
        int score = 0;
        if(cardPoints.size() == k){
            score = accumulate(cardPoints.begin(), cardPoints.end(), 0);
            return score;
        }
        for(int i = 1; i <= k; i++){
            if(cardPoints[l] > cardPoints[r]){
                score = score + cardPoints[l];
                l++;
            }
            else if(cardPoints[l] == cardPoints[r]){
                score = score + cardPoints[l];
                l++;
                r--;
            }
            else{
                score = score + cardPoints[r];
                r--;
            }
        }
        return score;
    }
};