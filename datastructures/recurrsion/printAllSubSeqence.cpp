#include <iostream>
#include <vector>
using namespace std;

void subseq(int i, vector<int>& arr, vector<int>& sub){
    if(i >= arr.size()){
        for(int j = 0; j < sub.size(); j++){
            cout << sub[j] <<" ";
        }
        cout << endl;
        return;
    }
    sub.push_back(arr[i]);
    subseq(i+1, arr, sub);
    sub.pop_back();
    subseq(i+1, arr, sub);
}
int main(){
    int n;
    cin >> n;
    vector<int> arr(n,0);
    vector<int> sub;
    int i = 0;
    while(i < n){
        cin >> arr[i]; 
        i++;
    }
    subseq(0, arr, sub);
    return 0;
}