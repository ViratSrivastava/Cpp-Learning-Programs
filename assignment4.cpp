#include <iostream>
using namespace std;
class P
{
public:
void display ()
{
cout<<"All contents of Base Class";
}
};
class Q: public P
{
public:
void display1()
{
cout<<"\nall content of class Q.";
}
};
class R: public Q
{
public:
void display2()
{
cout<<"All contents if class R.";   
}
};
int main ()
{
R r;
r.display();
r.display1();
return 0;
}