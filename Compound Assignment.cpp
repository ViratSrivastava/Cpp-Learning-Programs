#include <iostream>
using namespace std;
int main()
{
    int a,b,c,sum,prod,div,sub,mod;
    a=10;
    b=5;
    c=20;
    sum=0;
    prod=1;
    div=5;
    sub=0;
    mod=1;
    sum+=a+b+c;
    prod*=a*b*c;
    div/=a;
    div/=b;
    div/=c;
    sub-=a-b-c;
    mod%=a;
    mod%=b;
    mod%=c;
    cout<<sum<<endl;
    cout<<prod<<endl;
    cout<<div<<endl;
    cout<<sub<<endl;
    cout<<mod<<endl;
    return 0;
}