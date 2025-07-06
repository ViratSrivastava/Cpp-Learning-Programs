// https://leetcode.com/problems/sort-characters-by-frequency

class Solution {
public:
    string frequencySort(string s) {
        vector<int> lower_count(123, 0);
        int n = s.length();
        for(int i = 0; i < n; i++){
            int l_i = s[i];
            lower_count[l_i]++;
        }
        string reorder;
        while(reorder.length() < n){
            int temp = 0;
            int index = 0;
            for(int j = 0; j < 123; j++){
                if(lower_count[j] > temp){
                    temp = lower_count[j];
                    index = j;
                }
            }
            if(temp > 0){
                reorder += string(temp, char(index));
                lower_count[index] = 0;
            }
        }
        return reorder;
    }
};