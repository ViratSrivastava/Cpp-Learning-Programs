#include <iostream>
using namespace std;
int main()
{
    int a,b,c,x;
    cout<<"Calculation Menu\n"<<"1. Add\n"<<"2. Subtract\n"<<"3. Divide\n"<<"4. Multiply\n";
    cout<<"Enter the operation Choice\n";
    cin>>x;
    cout<<"Enter the Two Numbers"<<endl;
    cin>>a>>b;
    switch(x)
    {
        case 1:c=a+b;
            cout<<c;
            break;
        case 2:c=a-b;
            cout<<c;
            break;
        case 3:c=a/b;
            cout<<c;
            break;
        case 4:c=a*b;
            cout<<c;
            break;
    }
    return 0;
}