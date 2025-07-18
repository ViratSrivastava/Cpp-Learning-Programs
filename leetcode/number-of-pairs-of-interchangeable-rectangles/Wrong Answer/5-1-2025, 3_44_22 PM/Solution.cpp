// https://leetcode.com/problems/number-of-pairs-of-interchangeable-rectangles

class Solution {
public:
    long long interchangeableRectangles(vector<vector<int>>& rectangles) {
        vector<double> cal;
        int n = rectangles.size();
        for(int i = 0; i < n; i++){
            double div = double(rectangles[i][0])/double(rectangles[i][1]);
            cal.push_back(div);
        }
        int count = 0;
        sort(cal.begin(), cal.end());
        for(int i = 0; i < n-1; i++){
            for(int j = i+1; j < n; j++){
                if(cal[i] == cal[j]){
                    count++;
                }
                else{
                    i = j;
                }
            }
        }
        return count;
    }
};