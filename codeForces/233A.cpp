#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cin >> n;
    int temp;
    vector<int> arr;
    for(int i = 0; i < n; ++i){
        cin >> temp;
        arr.push_back(temp);
    }
    int l = 0; int r = n - 1;
    int S = 0; int D = 0;
    while(l <= r){
        if(arr[l] > arr[r]){
            S += arr[l];
            l++;
        }
        else{
            S += arr[r];
            r--;
        }
        if(l <= r){
            if(arr[l] > arr[r]){
                D += arr[l];
                l++;
            }
            else{
                D += arr[r];
                r--;
            }
        }
        else break;
    }
    cout << S << " " << D;
    return 0;
}