// https://leetcode.com/problems/nim-game

class Solution {
public:
    bool canWinNim(int n) {
        if(n % 4){
            return true;
        }
        return false;
    }
};