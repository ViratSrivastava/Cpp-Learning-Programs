// https://leetcode.com/problems/minimum-sum-of-four-digit-number-after-splitting-digits

class Solution {
public:
    int minimumSum(int num) {
        int min = INT_MIN;
        vector<int>val;
        while(num > 0){
            val.push_back(num%10);
            num = num/10;
        }
        sort(val.begin(), val.end());
        int sum = (val[0]*10 + val[2]) + (val[1]*10 + val[3]);
        return sum;
    }
};