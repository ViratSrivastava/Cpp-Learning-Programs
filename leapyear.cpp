#include <iostream>
using namespace std;
int main()
{
    int year;
    cout<<"enter year\n";
    cin>>year;
    if(year%4==0)
        if(year%100==0)
            if(year%400==0)
            {
                cout<<"leap year";
            }
            else
            {
                cout<<"not leap year";
            }
        else
        {
            cout<<" leap year";
        }
    else
    {
        cout<<"not leap year";
    }
    return 0;
}