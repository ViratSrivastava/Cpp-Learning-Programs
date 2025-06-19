// https://leetcode.com/problems/build-an-array-with-stack-operations

class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> action;
        int j = 0;
        for(int i = 1; i <= target.back(); ++i){
            if(target[j] == i){
                action.push_back("Push");
                j++;
            }
            else{
                action.push_back("Push");
                action.push_back("Pop");
            }
        }
        return action;
    }
};