#include <iostream>
using namespace std;
void printBacktrack(int i, int n){
    if(i < 1) return;
    printBacktrack(i-1, n);
    cout << i << endl;
}
int main(){
    int n;
    cin >> n;
    printBacktrack(n,n);
    return 0;
}