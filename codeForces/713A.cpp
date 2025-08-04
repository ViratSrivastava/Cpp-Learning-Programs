#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
int main(){
    int arrayCount;
    cin >> arrayCount;
    int arraySize;
    for(int i = 0; i < arrayCount; ++i){
        cin >> arraySize;
        vector<int>arr;
        int temp;
        unordered_map<int, int> freq;
        for(int j = 0; j < arraySize; ++j){
            cin >> temp;
            arr.push_back(temp);
            freq[arr[j]]++;
        }
        for (int k = 0; k < arraySize; ++k) {
            if (freq[arr[k]] == 1) {
                cout << k + 1 << endl;
                break;
            }
        }
    }
}