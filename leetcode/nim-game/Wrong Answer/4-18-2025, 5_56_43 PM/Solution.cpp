// https://leetcode.com/problems/nim-game

class Solution {
public:
    bool canWinNim(int n) {
        if(n == 1  | n == 2){
            return true;
        }
        int c = 0;
        while(n != 0){
            c++;
            n--;
        }
        if(c%2 == 0){
            return false;
        }
        else{
            return true;
        }
    }
};