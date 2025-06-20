// https://leetcode.com/problems/build-an-array-with-stack-operations

class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        stack<int>order;
        vector<string> action;
        int j = 1;
        while(j <= n){
            for(int i = 0; i < target.size(); i++){
                if(target[i] == j){
                    action.push_back("Push");
                    j++;
                }
                else{
                    while(target[i] != j){
                        action.push_back("Push");
                        action.push_back("Pop");
                        j++;
                    }
                    action.push_back("Push");
                    j++;
                }
            }
        }
        return action;
    }
};