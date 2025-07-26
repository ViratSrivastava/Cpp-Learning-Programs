// https://leetcode.com/problems/divide-two-integers

class Solution {
public:
    int divide(int dividend, int divisor) {
        // Handle edge cases
        if (dividend == INT_MIN && divisor == -1) {
            return INT_MAX;
        }
        if (divisor == 0) {
            throw invalid_argument("Divisor cannot be zero");
        }
        
        // Determine the sign of the result
        bool negative = (dividend < 0) ^ (divisor < 0);
        
        // Convert both numbers to positive
        long long abs_dividend = labs(dividend);
        long long abs_divisor = labs(divisor);
        
        // Initialize quotient
        long long quotient = 0;
        
        // Subtract divisor from dividend until dividend is smaller than divisor
        while (abs_dividend >= abs_divisor) {
            long long temp_divisor = abs_divisor, multiple = 1;
            while (abs_dividend >= (temp_divisor << 1)) {
                temp_divisor <<= 1;
                multiple <<= 1;
            }
            abs_dividend -= temp_divisor;
            quotient += multiple;
        }
        
        // Apply the sign
        quotient = negative ? -quotient : quotient;
        
        // Clamp to 32-bit integer range
        if (quotient > INT_MAX) return INT_MAX;
        if (quotient < INT_MIN) return INT_MIN;
        
        return quotient;
    }
};