// https://leetcode.com/problems/power-of-two

class Solution {
public:
    bool isPowerOfTwo(int n) {
        // Edge case: n must be positive
        if (n <= 0) return false;

        // A number is a power of two if it has only one set bit in binary
        return (n & (n - 1)) == 0;
    }
};
