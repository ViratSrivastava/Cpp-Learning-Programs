#include <iostream>
using namespace std;

void print(int i, int n){
    if(i > n){
        return;
    }
    cout << i << endl;
    print(i+1, n);
}
int main(){
    int n;
    cin >> n;
    int i = 1;
    print(i,n);
    return 0;
}
