// https://leetcode.com/problems/peak-index-in-a-mountain-array

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int m = INT_MIN;
        int index = 0;
        for(int i = 0; i < arr.size(); i++){
            if(arr[i] > m){
                m = arr[i];
                index = i;
            }
        }
        return index;
    }
};