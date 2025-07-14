// https://leetcode.com/problems/plus-one

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        
        // Add one to the least significant digit
        digits[n - 1] += 1;
        
        // Propagate the carry
        for (int i = n - 1; i > 0 && digits[i] > 9; --i) {
            digits[i] %= 10;
            digits[i - 1] += 1;
        }
        
        // If the most significant digit becomes 10 after the propagation, add a new digit
        if (digits[0] > 9) {
            digits[0] %= 10;
            digits.insert(digits.begin(), 1);
        }
        
        return digits;
    }
};