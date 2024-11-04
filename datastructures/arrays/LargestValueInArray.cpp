#include <iostream>
using namespace std;
int main()
{
    int A[] = {23,5,34,6,2,7,9,69,8};
    int largest = A[0];
    for(int i:A)
    {
        if(i>largest)
        {
            largest = i;
        }

    }
    cout << largest;
    return 0;
}