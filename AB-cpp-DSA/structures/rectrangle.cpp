#include <iostream>
using namespace std;

struct Rectrangle{
    int lenght;
    int breadth;
    int area(){
        return lenght * breadth;
    }
};
int main(){
    struct Rectrangle r1;
    cin >> r1.lenght >> r1.breadth;
    cout << "Area of Rectraingle: " << r1.area() << endl;
    return 0;
}