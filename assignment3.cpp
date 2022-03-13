#include <iostream>
using namespace std;
class Base1 {
public:
    int x;
    Base1 (){
        x = 1;
        cout << "Base1 Class Constructor Called \n";
    }
};
class Base2 {
public:
    int y;
    Base2 (){
        y=2;
        cout << "Base2 Class Constructor Called \n";
    }
};
class Derive : public Base1, public Base2 {
public:
    int z;
    Derive(){
        z = x + y; //X & y will be inherited from Base1 & Base2
        cout << "Derive Class Constructor Called \n";
    }
 
    void display(){
        cout << "Value of z: "<<z<<endl;
    }
};
int main()
{
    Derive derive;
    derive.display(); //To display value of z
    return 0;
}