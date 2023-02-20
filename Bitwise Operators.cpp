#include <iostream>
using namespace std;
int main()
{   // use only char or int datatypes
    //& or AND
    int a=2,b=3,p;
    p=a&b;
    cout<<p<<endl;
    //| or OR
    int c=4,d=5,q;
    q=c|d;
    cout<<q<<endl;
    //^ or X-OR
    int e=6,f=7,r;
    r=e^f;
    cout<<r<<endl;
    //~ or NOT
    int g=8,s;
    s=~g;
    cout<<s<<endl;
    //left shift
    int h=9,t;
    t=h<<2;
    cout<<t<<endl;
    //right shift
    int i=1,u;
    u=i>>1;
    cout<<u<<endl;
    return 0;
}