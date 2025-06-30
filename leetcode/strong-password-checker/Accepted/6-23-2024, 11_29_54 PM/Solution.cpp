// https://leetcode.com/problems/strong-password-checker

class Solution {
public:
    int strongPasswordChecker(string password) {
        int n = password.length();
        int missing = 3;
        int lower = 1, upper = 1, digit = 1;
        
        // Check for lowercase, uppercase, and digit
        for (char c : password) {
            if (islower(c)) lower = 0;
            else if (isupper(c)) upper = 0;
            else if (isdigit(c)) digit = 0;
        }
        missing = lower + upper + digit;
        
        // Handle cases where length is less than 6
        if (n < 6) return max(6 - n, missing);
        
        // Count repeating characters
        vector<int> repeats;
        int count = 1;
        for (int i = 1; i <= n; i++) {
            if (i < n && password[i] == password[i-1]) {
                count++;
            } else {
                if (count >= 3) repeats.push_back(count);
                count = 1;
            }
        }
        
        // Handle cases where length is between 6 and 20
        if (n <= 20) {
            int replace = 0;
            for (int rep : repeats) replace += rep / 3;
            return max(missing, replace);
        }
        
        // Handle cases where length is greater than 20
        int delete_count = n - 20;
        int replace = 0;
        
        for (int i = 0; i < repeats.size(); i++) {
            if (delete_count > 0 && repeats[i] % 3 == 0) {
                repeats[i]--;
                delete_count--;
            }
        }
        
        for (int i = 0; i < repeats.size(); i++) {
            if (delete_count >= 2 && repeats[i] % 3 == 1 && repeats[i] > 3) {
                repeats[i] -= 2;
                delete_count -= 2;
            }
        }
        
        for (int i = 0; i < repeats.size(); i++) {
            if (delete_count > 0) {
                int can_delete = min(delete_count, repeats[i] - 2);
                repeats[i] -= can_delete;
                delete_count -= can_delete;
            }
            replace += repeats[i] / 3;
        }
        
        return (n - 20) + max(missing, replace);
    }
};