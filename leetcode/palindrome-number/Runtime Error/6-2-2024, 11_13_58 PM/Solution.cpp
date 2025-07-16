// https://leetcode.com/problems/palindrome-number

class Solution {
public:
    bool isPalindrome(int x) {
        // Negative numbers are not palindromes
        if (x < 0) {
            return false;
        }

        // Special case for numbers ending in zero but not zero itself
        if (x != 0 && x % 10 == 0) {
            return false;
        }

        int reversedNumber = 0;
        int originalNumber = x;

        while (x > 0) {
            int lastDigit = x % 10;
            reversedNumber = reversedNumber * 10 + lastDigit;
            x /= 10;
        }

        return originalNumber == reversedNumber;
    }
};
