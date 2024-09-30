#include <iostream>
using namespace std;
int main()
{
    int n,i,s;
    cout<<"enter N"<<endl;
    cin>>n;
    s=0;
    cout<<"factor are:\n";
    for ( i = 1; i <=n; i++)
    {   
        if(n%i==0)
        {
            s=s+i;
            cout<<i<<endl;
        }
    }
    cout<<"sum of factors is: "<<s<<endl;
    if(2*n==s)
    {
        cout<<n<<" is perfect number\n";
    }
    else
    {
        cout<<n<<" is not a perfect number\n";
    }
    return 0;
}