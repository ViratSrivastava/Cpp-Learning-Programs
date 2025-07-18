// https://leetcode.com/problems/number-of-pairs-of-interchangeable-rectangles

class Solution {
public:
    long long interchangeableRectangles(vector<vector<int>>& rectangles) {
        vector<float> cal;
        int n = rectangles.size();
        for(int i = 0; i < n; i++){
            float div = float(rectangles[i][0])/float(rectangles[i][1]);
            cal.push_back(div);
        }
        long count = 0;
        for(int i = 0; i < n-1; i++){
            for(int j = i+1; j < n; j++){
                if(cal[i] == cal[j]){
                    count++;
                }
            }
        }
        return count;
    }
};