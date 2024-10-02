#include <bits/stdc++.h> //all libraries all included --- increased compilation time 

using namespace std;
/// void main() is used when we dont want any value to return from the function
int main()
{
    cout << "hello world this is dsa";
    int num = 10; // int range is from (+-10^9)
    cout << num <<endl;
    num = 10.9; //decimal is only printed
    cout << num <<endl;
    long numLong = 1000000000; //(+-10^12) range
    cout << numLong<<endl; 
    //number greater that 10^12 use long long
    long long numLongLong = 1000000000000000000; //(+-10^18) range
    cout << numLongLong <<endl;
    return 0;
} 