// https://leetcode.com/problems/kids-with-the-greatest-number-of-candies

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int h = 0;
        for(int i = 0; i < candies.size(); i++)
        {
            if(candies[i]>h)
            {
                h = candies[i];
            }
        }
        std::vector<bool> result(candies.size());
        for(int i= 0; i < candies.size(); i++)
        {
            if(candies[i] + extraCandies >= h)
            {
                result[i] = true;
            }
            else
            {
                result[i] = false;
            }
        }
        return result;
    }
};