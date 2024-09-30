#include <iostream>
using namespace std;
int main()
{
int t;
cout<<"enter hour"<<endl;
cin>>t;
    if(t >= 9 && t <= 18)
    {
        cout<<t<<" Is Working Hour"<<endl;
    }
    else
    {
    cout<<t<<" is Leisure Time"<<endl;
    }
return 0;
}