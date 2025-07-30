// https://leetcode.com/problems/find-the-highest-altitude

class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int> gains(gain.size()+1);
        gains[0] = 0;
        int max = gains[0];
        for(int i = 0; i < gain.size(); i++){
            gains[i+1] = gains[i]+gain[i];
            if(gains[i+1]>max){
                max = gains[i+1];
            }
        }
        return max;
    }
};