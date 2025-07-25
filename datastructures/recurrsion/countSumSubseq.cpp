#include <iostream>
#include <vector>
using namespace std;
int countSubSeq(int i, int k, int sum, int count, vector<int>& arr, vector<int>& sub){
    if(i >= arr.size()){
        if(sum == k){
            return 1;
        }
        return 0;
    }

    sub.push_back(arr[i]);
    sum += arr[i];

    int take = countSubSeq(i+1, k, sum, count, arr, sub);

    sub.pop_back();
    sum -= arr[i];

    int noTake = countSubSeq(i+1, k, sum, count, arr, sub);
    return take+noTake;
}
int main(){
    int i = 0; 
    int sum = 0;
    int count = 0;
    int k, n;
    cin >> k >> n;
    vector<int> arr(n);
    vector<int> sub;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << countSubSeq(i, k, sum, count, arr, sub);
    return 0;
}