// https://leetcode.com/problems/maximum-average-subarray-i

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double avg = -DBL_MAX;
        double temp;
        if(nums.size() == 1){
            return static_cast<double>(nums[0]);
        }
        vector<double> dub;
        for(int i = 0; i < nums.size(); i++){
            dub.push_back(static_cast<double>(nums[i]));
        }
        double d = static_cast<double>(k);
        for(int i = 0; i < dub.size()-k; i++){
            double sum = accumulate(dub.begin()+i, dub.begin()+i+k, 0.0);
            temp = double(sum)/double(d);
            avg = max(temp,avg);
        }
        return avg;
    }
};