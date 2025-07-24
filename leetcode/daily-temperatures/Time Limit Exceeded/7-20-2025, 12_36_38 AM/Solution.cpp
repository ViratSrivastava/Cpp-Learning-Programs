// https://leetcode.com/problems/daily-temperatures

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        int count;
        vector<int> temp(n, 0);
        for(int i = 0; i < n-1; ++i){
            count = 0;
            for(int j = i+1; j < n; ++j){
                count++;
                if(temperatures[i] < temperatures[j]){
                    temp[i] = count;
                    break;
                }
            }
        }
        return temp;
    }
};