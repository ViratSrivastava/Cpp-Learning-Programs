#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<< "enter number till which sum is required ";
    cin>>n;
    float sum;
    sum=(float)(n*(n+1))/2;
    cout<<"sum is "<<sum;
    return 0;
}