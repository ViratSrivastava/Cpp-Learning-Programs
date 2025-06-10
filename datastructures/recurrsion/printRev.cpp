#include <iostream>
using namespace std;
void printRev(int i, int n){
    if(n < i){
        return;
    }
    cout << n <<endl;
    printRev(i, n-1);
}
int main(){
    int i, n;
    cin >> i >>n;
    printRev(i, n);
    return 0;
}