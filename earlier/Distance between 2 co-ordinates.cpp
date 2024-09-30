#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float x1,x2,y1,y2,distance;
    cout<<"enter first and second set of co-ordinates"<<endl;
    cout<<"(x1,y1)"<<endl;
    cin>>x1>>y1;
    cout<<"(x1,y1)"<<endl;
    cin>>x2>>y2;
    distance= sqrt(pow((x2-x1),2)+pow((y2-y1),2));
    cout<<"Distance between "<<x1<<","<<y1<<" and "<<x2<<","<<y2<<" is "<<distance;
}