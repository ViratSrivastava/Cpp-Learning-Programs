#include <iostream>
using namespace std;

int main()
{
    int m, n, i, j;
    cin >> i;
    cin >> j;
    m = i;
    n = j;
    while (i != j)
    {
        if (i > j)
        {
            i = i - j;
        }
        else
        {
            j = j - i;
        }
    }
    cout << "GCD of " << m << " and " << n << " is " << i << endl;
    return 0;
}