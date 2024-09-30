#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i = 0;
    int sum = 0;
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            sum = sum + i;
        }
    }
    if (sum == 2 * n)
    {
        cout << "Perfect number";
    }
    else
    {
        cout << "Not a perfect number";
    }
}