#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int ld;
    while(n>0)
    {
        ld = n%10;
        cout<<ld;
        n = n/10;
    }
    return 0;
}