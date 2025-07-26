// https://leetcode.com/problems/final-prices-with-a-special-discount-in-a-shop

class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<int> dis;
        for(int i = 0; i < prices.size()-1; ++i){
            for(int j = i+1; j < prices.size(); ++j){
                if(prices[i] == prices[j]){
                    dis.push_back(0);
                    break;
                }
                if(prices[i] > prices[j]){
                    dis.push_back(prices[i] - prices[j]);
                    break;
                }
                if(j == prices.size() -1){
                    dis.push_back(prices[i]);
                }
            }
        }
        dis.push_back(prices[prices.size()-1]);
        return dis;
    }
};