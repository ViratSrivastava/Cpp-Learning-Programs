#include <iostream>
using namespace std;
int main()
{
    int n, key, l, h, i, mid;
    cin >> n;
    cin >>key;
    l = 0;
    h = n - 1;

    int A[n];
    for (i = 0;i<n;i++)
    {
        cin >> A[i];
    }
    while(l<=h)
    {   
        mid = (l+h)/2;
        if(key == A[mid])
        {
            cout << mid;
            return 0;
        }
        else if(A[mid]<key)
        {
            l = mid+1;
        }
        else
        {
            h = mid-1;
        }
    }
    cout << "not found";
    return 0;
} 