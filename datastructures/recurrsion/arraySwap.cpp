// following code functional recurrsion
#include <iostream>
#include <vector>
using namespace std;
void swapElements(vector<int>& arr, int l, int r){
    if(l >= r) return;
    swap(arr[l], arr[r]);
    swapElements(arr, l+1, r-1);
}
int main(){
    vector<int> arr;
    int n;
    cout << "no of elements" << endl;
    cin >> n;
    int val;
    for(int i = 0; i < n; ++i){
        cin >> val;
        arr.push_back(val);
    }
    int l = 0;
    int r = n - 1;
    swapElements(arr, l, r);
    for(auto i: arr){
        cout << i << " ";
    }
    return 0;
}