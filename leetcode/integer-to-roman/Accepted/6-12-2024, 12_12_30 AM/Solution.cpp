// https://leetcode.com/problems/integer-to-roman

class Solution {
public:
    string intToRoman(int num) {
        // Define a vector of pairs where each pair contains the Roman numeral symbol and its corresponding value
        vector<pair<int, string>> valueToRoman = {
            {1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"},
            {100, "C"}, {90, "XC"}, {50, "L"}, {40, "XL"},
            {10, "X"}, {9, "IX"}, {5, "V"}, {4, "IV"},
            {1, "I"}
        };
        
        // Initialize an empty string to build the Roman numeral result
        string romanNumeral = "";
        
        // Iterate over each value-symbol pair in the vector
        for (const auto& pair : valueToRoman) {
            int value = pair.first;
            const string& symbol = pair.second;
            
            // Determine the number of times the current value can fit into the number
            while (num >= value) {
                // Append the corresponding symbol to the result
                romanNumeral += symbol;
                // Subtract the value from the number
                num -= value;
            }
        }
        
        return romanNumeral;
    }
};