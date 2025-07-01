// https://leetcode.com/problems/stone-game

class Solution {
public:
    bool stoneGame(vector<int>& piles) {
        sort(piles.begin(), piles.begin());
        int n = piles.size();
        int a = 0;
        int b = 0;
        int i = 0, j = n-1;
        while(i<j){
            if(piles[i] == piles[j]){
                a += piles[i];
                b += piles[j];
                i++;
                j--;
            }
            if(piles[i]>piles[j]){
                a += piles[i];
                i++;
            }
            else{
                a += piles[j];
                j--;
            }
            if(piles[i]>piles[j]){
                b += piles[i];
                i++;
            }
            else{
                b += piles[j];
                j--;
            }

        }
        if(a > b){
            return true;
        }
        return false;
    }
};