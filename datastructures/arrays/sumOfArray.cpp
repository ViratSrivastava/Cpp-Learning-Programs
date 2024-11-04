#include <iostream>
using namespace std;
int main()
{
    int A[3] = {12,43,67};
    int sum;
    for( int i:A)
    {
        sum = sum + i;
    }
    cout << sum;
    return 0;
}