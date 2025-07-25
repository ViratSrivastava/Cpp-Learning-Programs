// https://leetcode.com/problems/defanging-an-ip-address

class Solution {
public:
    string defangIPaddr(string address) {
        string defaddress;
        for(char ch: address){
            if(ch == '.'){
                defaddress.push_back('[');
                defaddress.push_back('.');
                defaddress.push_back(']');
            }
            else{
                defaddress.push_back(ch); 
            }  
        }
        return defaddress;
    }
};