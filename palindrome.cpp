#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int c = n;
    int r = 0;
    while(c>0)
    {
        r =r*10;
        r = r + c%10;
        c = c/10;
    }
    if (n == r )
    {
        cout << "Pallindrome" << endl;
    }
    else 
    {
        cout << "Not Pallindrome" << endl;
    }
    return 0;
}