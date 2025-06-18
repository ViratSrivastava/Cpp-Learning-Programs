// https://leetcode.com/problems/best-time-to-buy-and-sell-stock

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int diff = 0;
        int profit = 0;
        for(int i = 0; i < prices.size()-1; i++){
            for(int j = i; j < prices.size(); j++){
                if(prices[j] > prices[i]){    
                    diff = prices[j] - prices[i];
                    profit = max(profit,diff);  
                }
            }
        }
        return profit;
    }
};