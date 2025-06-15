// https://leetcode.com/problems/baseball-game

class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> score;
        for(auto ch : operations){
            if(ch == "C"){
                score.pop_back();
            }
            else if(ch == "D"){
                score.push_back(int(score.back()*2));
            }
            else if(ch == "+"){
                score.push_back(score[score.size()-1] + score[score.size()-2]);
            }
            else{
                score.push_back(stoi(ch));
            }
        }
        int total = accumulate(score.begin(), score.end(),0);
        return total;
    }
};