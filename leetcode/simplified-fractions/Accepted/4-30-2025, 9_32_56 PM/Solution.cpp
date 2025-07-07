// https://leetcode.com/problems/simplified-fractions

class Solution {
public:
    vector<string> simplifiedFractions(int n) {
        vector<string>simp;
        for(int i = 1; i < n; i++){
            for(int j = i+1; j <= n; j++){
                if(__gcd(i,j) == 1){
                    stringstream ss;
                    ss << i << "/" << j;
                    simp.push_back(ss.str());
                }
            }
        }
        return simp;
    }
};