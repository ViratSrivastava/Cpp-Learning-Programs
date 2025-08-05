#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int temp;
    int q = 0;
    for(int i = 0; i < n; ++i){
        int count = 0;
        for(int j = 0; j < 3; j++){
            cin >> temp;
            count += temp;
        }
        if(count > 1) q++;
    }
    cout << q;
    return 0;
}