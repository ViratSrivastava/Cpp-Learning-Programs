#include <iostream>
using namespace std;
int main()
{
    char x=127;
    ++x;
    cout<<(int)x<<endl;
    --x;
    cout<<(int)x<<endl;
    //for interger also
    //INT_MAX is used to assign the maximium value to the integer 
    int z=INT_MAX;
    ++z;
    cout<<(int)z<<endl;
    --z;
    cout<<(int)z<<endl;
    return 0;
}