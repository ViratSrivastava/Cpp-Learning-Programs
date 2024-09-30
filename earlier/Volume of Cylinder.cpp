#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float volume,r,h;
    cout<<"enter radius and height of cylinder ";
    cin>>r>>h;
    volume=M_PI*pow(r,2)*h;
    cout<<volume;
    return 0;
}