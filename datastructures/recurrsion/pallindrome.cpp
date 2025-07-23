#include <iostream>
using namespace std;
bool isPal(string s, int i){
    if( i >= s.length()/2) return true;
    if(s[i] != s[s.length()-i-1]) return false;
    return(s, i + 1);
}
int main(){
    string str;
    cin >> str;
    int i = 0;
    cout << isPal(str, i);
    return 0;
}
