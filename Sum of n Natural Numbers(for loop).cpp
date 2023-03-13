#include <iostream>
using namespace std;
int main()
{
    int n,i,s;
    cout<<"enter the natural number\n";
    cin>>n;
    s=0;
    for (i = 1; i <= n; i++)
    {   
        s=s+i;
    }
    cout<<"sum is: "<<s;
    return 0;
}
