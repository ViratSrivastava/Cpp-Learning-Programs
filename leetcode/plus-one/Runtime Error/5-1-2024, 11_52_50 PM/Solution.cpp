// https://leetcode.com/problems/plus-one

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        // Calculate the number of digits in the vector
        int length = digits.size();
        
        // Variable to store the integer value represented by the digits
        int value = 0;
        
        // Convert the digits to an integer
        for (int i = 0; i < length; i++){
            // Multiply the current value by 10 and add the next digit
            value *= 10;
            value += digits[i];
        }
        
        // Add one to the value
        value = value + 1;
        
        // Calculate the length of the new value after adding one
        length = to_string(value).length(); // Corrected typo and updated length
        
        // Create a vector to store the modified digits
        vector<int> result(length);
        
        // Populate the vector with the digits of the modified value
        for (int i = length - 1; i >= 0; i--){
            result[i] = value % 10;
            value /= 10;
        }
        
        // Return the vector containing the modified digits
        return result;
    }
};
