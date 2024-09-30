#include <iostream>
using namespace std;
int main()
{
    int age;
    cout<<"enter the age of the person"<<endl;
    cin>>age;
        if (age>=18 && age<=60)
        {
            cout<<"Age Category: Adult"<<endl;
        }
        else if (age<18 && age>=0)
        {
            cout<<"Age Category: Child"<<endl;
        }
        else
        {
            cout<<"Age Category: Senior Citizen"<<endl;
        }
    return 0;
}