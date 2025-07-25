#include <iostream>
#include <vector>
using namespace std;
bool sumSubSeq(int i, int k , int sum, vector<int>& arr, vector<int>& sub){
    if(i >= arr.size()){
        if(sum == k){
            for(auto e: sub){
                cout << e << " ";
            }
            return true;
        }
        else return false;
    }

    sub.push_back(arr[i]);
    sum += arr[i];

    if(sumSubSeq(i+1, k, sum, arr, sub) == true){
        return true;
    }

    sub.pop_back();
    sum -= arr[i];
    if(sumSubSeq(i+1, k, sum, arr, sub) == true){
        return true;
    }
    return false;
}
int main(){
    int i = 0; 
    int sum = 0;
    int k, n;
    cin >> k >> n;
    vector<int> arr(n);
    vector<int> sub;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    sumSubSeq(i, k, sum, arr, sub);
    return 0;
}