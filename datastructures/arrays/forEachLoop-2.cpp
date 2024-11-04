#include <iostream>
using namespace std;
int main()
{
    int A[3] = {1, 2, 3};
    for( int i:A)
    {
        cout << ++i << endl;
    }
    // operations on the elements of the array are not reflected in the array itself
    for(int i:A)
    {
        cout << i << endl;
    }

    for( int &i:A) // reference to the elements of the array
    // &i is a reference to the elements of the array
    {
        cout << ++i << endl;
    }
    // operations on the elements of the array are reflected in the array itself
    for(int i:A)
    {
        cout << i << endl;
    }
    
    return 0;
}