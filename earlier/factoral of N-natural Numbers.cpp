#include <iostream>
using namespace std;
int main()
{
    int n,i,f;
    cout<<"enter Number For Factoral\n";
    cin>>n;
    f=1;
    for ( i = 1; i <=n; i++)
    {
       f=f*i; 
    }
    cout<<"factoral of "<<n<<" is "<<f<<endl;;
    return 0;
}