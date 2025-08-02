// https://leetcode.com/problems/intersection-of-two-arrays

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int>inter;
        for(int i = 0; i < nums1.size(); i++){
            for(int j = 0; j < nums2.size(); j++){
                if(nums1[i] == nums2[j]){
                    inter.push_back(nums1[i]);
                    nums1.erase(nums1.begin() + i);
                }
            }
        }
        sort(inter.begin(), inter.end());
        inter.erase(unique(inter.begin(), inter.end()), inter.end());
        return inter;
    }
};