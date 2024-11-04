#include <iostream>
using namespace std;
int main()
{
    int n, key;
    cout << "enter lenght of array"<<endl;
    cin >> n;
    cout << "enter search key"<<endl;
    cin >> key;
    int A[n];
    cout << "enter "<<n<<" elements of array with a space between elements"<<endl;
    for(int i = 0; i < n; i++)
    {
        cin >> A[i]; // take input into array
    }
    for(int i = 0; i < n; i++)
    {
        if(key == A[i])
        {
            cout<<key<<" found at "<<i<<endl;
            return 0;
        }
    }
    cout << "not found";
    return 0;
} 