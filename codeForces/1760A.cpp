#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int calMaxDiff(int n, vector<int>& arr){
    vector<int> arrSort = arr;
    sort(arrSort. begin(), arrSort.end());
    int max = arrSort[n-1];
    int maxS = arrSort[n-2];
    for(int i = 0; i < n; ++i){
        if(arr[i] < max){
            cout << arr[i] - max << " "; 
        } else{
            cout << arr[i] - maxS << " ";
        }
    }
    cout << endl;
    return 0;
}
int main(){
    int listS;
    cin >> listS;
    for(int i = 0 ; i < listS; ++i){
        int n;
        cin >> n;
        vector<int>arr;
        int temp;
        for (int j = 0; j < n; ++j) {
            int temp;
            cin >> temp;
            arr.push_back(temp);
        }
        calMaxDiff(n, arr);
    }
    return 0;
}