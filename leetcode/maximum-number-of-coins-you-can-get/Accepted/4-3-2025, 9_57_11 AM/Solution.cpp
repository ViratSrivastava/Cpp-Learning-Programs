// https://leetcode.com/problems/maximum-number-of-coins-you-can-get

class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(), piles.end(), greater<int>());
        int n = piles.size();
        sort(piles.begin(), piles.end(), greater<int>());
        int i = n - 1;
        int j = 0;
        int sum = 0;
        while(j < n)
        {
            if(piles[j] == -1){
                break;
            }
            piles[j] = -1;
            j++;
            sum +=piles[j];
            j++;
            piles[i] = -1;
            i--;
        }
        return sum;
    }
};