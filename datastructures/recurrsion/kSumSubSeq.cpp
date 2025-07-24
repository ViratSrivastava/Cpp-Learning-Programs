#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

void kSumSubSeq(int i, int k, int sum, vector<int>&arr, vector<int>&sub){
    sum += sub.back();

    if(i >= arr.size()){
        if(sum == k){
            for(auto e: sub){
                cout << e << " ";
            }
            cout << endl;
        }
        return;
    }
    sub.push_back(arr[i]);
    kSumSubSeq(i+1, k, sum, arr, sub);
    sub.pop_back();
    kSumSubSeq(i+1, k, sum, arr, sub);
}
int main(){
    int n;
    cout << "size of array" <<endl;
    cin >> n;
    int k;
    cout << "enter sub seq sum" << endl;
    cin >> k;
    int i = 0;
    vector<int> arr(n);
    vector<int> sub;
    cout << "enter " << n << " Elements" << endl;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int sum = 0;
    kSumSubSeq(i, k, sum, arr, sub);
    return 0;
}