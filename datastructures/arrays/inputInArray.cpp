#include <iostream>
using namespace std;
int main()
{
    int A[10];
    for(int i = 0; i < 10; i++)
    {
        cin >> A[i];
    }

    for(int i:A)
    {
        cout << i << endl;
    }
    return 0;
} 