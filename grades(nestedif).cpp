#include <iostream>
using namespace std;
int main()
{
    int m1,m2,m3,total;
    cout<<"enter marks of 3 subjects"<<endl;
    cin>>m1>>m2>>m3;
    float avg;
    total=m1+m2+m3;
    avg=total/3.0;
    if(avg>=60)
    {
        cout<<"Grade:A "<<avg<<endl;
    }
    else
    {
        if (35<=avg && avg<60)
        {
            cout<<"Grade:B "<<avg<<endl;
        }
        else
        {
            cout<<"Grade:C "<<avg<<endl;
        }
        
    }
    return 0;
}