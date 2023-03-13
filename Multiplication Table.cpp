#include <iostream>
using namespace std;
int main()
{
    int n,i;
    cout<< "enter the number for which table is to be displayed\n";
    cin>>n;
    for ( i = 1; i <=10; i++)
    {
        cout<<n<<" * "<<i<<" = "<<n*i<<endl;
    }
    return 0;
}