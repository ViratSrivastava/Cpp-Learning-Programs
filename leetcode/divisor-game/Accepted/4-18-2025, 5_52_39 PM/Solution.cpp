// https://leetcode.com/problems/divisor-game

class Solution {
public:
    bool divisorGame(int n) {
        if(n == 1){
            return false;
        }
        int c = 0;
        while(n != 1){
            n = n - 1;
            c++;
        }
        if(c%2 == 0){
            return false;
        }
        else{
            return true;
        }
    }
};