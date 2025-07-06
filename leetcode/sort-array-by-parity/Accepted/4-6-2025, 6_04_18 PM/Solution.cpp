// https://leetcode.com/problems/sort-array-by-parity

class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        //sort(nums.begin(), nums.end());
        int n = nums.size();
        vector <int> output(n);
        int j = n-1;
        int k = 0;
        for(int i = 0; i < n; i++){
            int temp = nums[i];
            if(temp%2 == 0){
                output[k] = nums[i];
                k++;
            }
            else{
                output[j] = nums[i];
                j--;
            }
        }
        return output;
    }
};