#include <iostream>
#include <unordered_map>

using namespace std;
int main(){
    unordered_map<char, int> freq;
    string str;
    getline(cin,str);
    int count = 0;
    for(char ch : str) freq[ch]++;
    for(const auto&[key,value] : freq){
        if(value >0) count++;
    }
    if(count%2 == 0) cout << "CHAT WITH HER!";
    else cout << "IGNORE HIM!";
    return 0;
}