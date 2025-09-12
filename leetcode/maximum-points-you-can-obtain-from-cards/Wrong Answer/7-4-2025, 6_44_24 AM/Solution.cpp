// https://leetcode.com/problems/maximum-points-you-can-obtain-from-cards



class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int score = INT_MIN;
        int sum = 0;
        for(int i = 0; i < k; i++){
            sum = accumulate(cardPoints.begin(), cardPoints.begin()+k, 0);
            if(sum > score) score = sum;
        }
        for(int i = 0; i < k; i++){
            sum = accumulate(cardPoints.end()-k, cardPoints.end(), 0);
            if(sum > score) 
                score = sum;
        }
        return score;
    }
};