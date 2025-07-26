// https://leetcode.com/problems/goal-parser-interpretation

class Solution {
public:
    string interpret(string command) {
        string parser;
        for(int i = 0; i< command.length(); i++){
            if(command[i] == 'G'){
                parser.push_back('G');
            }
            else if(command[i] == '(' && command[i+1] == ')'){
                parser.push_back('o');
                i++;
            }
            else{
                parser.push_back('a');
                parser.push_back('l');
                i = i+3;
            }
        }
        return parser;
    }
};