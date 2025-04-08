#include <iostream>
using namespace std;

int main(){
    int a = 10;
    int *p;
    p = &a;
    cout << p << endl; // Output the address of a
    cout << *p << endl; // Output the value at the address stored in p (which is the value of a)
    return 0;
}