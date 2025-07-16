// https://leetcode.com/problems/plus-one

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int length = digits.size();
        long long value = 0; // Use long long to prevent overflow
        for (int i = 0; i < length; i++){
            value *= 10;
            value += digits[i];
        }
        
        value = value + 1;
        length = to_string(value).length();
        
        vector<int> result(length);
        for (int i = length - 1; i >= 0; i--){
            result[i] = value % 10;
            value /= 10;
        }
        
        return result;
    }
};
