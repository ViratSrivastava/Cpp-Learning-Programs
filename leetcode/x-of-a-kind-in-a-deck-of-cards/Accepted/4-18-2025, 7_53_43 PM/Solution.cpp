// https://leetcode.com/problems/x-of-a-kind-in-a-deck-of-cards

class Solution {
public:
    int gcd(int a, int b) {
        return b == 0 ? a : gcd(b, a % b);
    }

    bool hasGroupsSizeX(vector<int>& deck) {
        sort(deck.begin(), deck.end());
        int n = deck.size();
        vector<int> freq;
        int count = 1;
        
        // Traverse through the deck
        for (int i = 0; i < n - 1; i++) {
            // Count the frequency of each number
            if (deck[i] == deck[i + 1]) {
                count++;
            } else {
                freq.push_back(count);  // Add the count of the current number to freq
                count = 1;  // Reset count for the next number
            }
        }
        // Add the last frequency (after the last number in the deck)
        freq.push_back(count);
        
        // Compute the GCD of all frequencies
        int check = freq[0];
        for (int i = 1; i < freq.size(); i++) {
            check = gcd(check, freq[i]);
        }
        
        return check >= 2;  // If GCD of frequencies is >= 2, return true
    }
};
