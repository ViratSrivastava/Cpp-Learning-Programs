#include <iostream>
using namespace std;
int main()
{
    int A[3] = {1, 2, 3};
    for( int i:A)
    {
        cout << ++i << endl;
    }
    // int i:A is a copy of the elements of the array
    for(auto i:A)
    {
        cout << i << endl;
    }
    //auto is used to automatically determine the data type of the variable
}