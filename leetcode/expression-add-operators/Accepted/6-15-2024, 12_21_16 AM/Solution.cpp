// https://leetcode.com/problems/expression-add-operators

#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    vector<string> addOperators(string num, int target) {
        vector<string> result;
        string expression;
        backtrack(num, target, 0, 0, 0, expression, result);
        return result;
    }
    
private:
    void backtrack(const string& num, int target, int pos, long long prev_operand, long long current_value, string& expression, vector<string>& result) {
        if (pos == num.size()) {
            if (current_value == target) {
                result.push_back(expression);
            }
            return;
        }
        
        for (int i = pos; i < num.size(); ++i) {
            if (i > pos && num[pos] == '0') break; // Skip numbers with leading zeros
            
            string part = num.substr(pos, i - pos + 1);
            long long current_operand = stoll(part);
            
            int expr_len = expression.size();
            
            if (pos == 0) {
                expression += part;
                backtrack(num, target, i + 1, current_operand, current_operand, expression, result);
                expression.resize(expr_len);
            } else {
                // Addition
                expression += "+" + part;
                backtrack(num, target, i + 1, current_operand, current_value + current_operand, expression, result);
                expression.resize(expr_len);
                
                // Subtraction
                expression += "-" + part;
                backtrack(num, target, i + 1, -current_operand, current_value - current_operand, expression, result);
                expression.resize(expr_len);
                
                // Multiplication
                expression += "*" + part;
                backtrack(num, target, i + 1, prev_operand * current_operand, current_value - prev_operand + (prev_operand * current_operand), expression, result);
                expression.resize(expr_len);
            }
        }
    }
};
