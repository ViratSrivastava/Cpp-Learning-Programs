#include <iostream>

using namespace std;

int main()
{
    int sum = 0;
    int d;
    int n;
    cin >> n;
    // write a loop to find sum of cubes of digits
    // check if a number is Armstrong
    while (n >= 0)
    {
        d = n % 10;
        sum = sum + d * d * d;
        n = n / 10;
    }

    if (sum == n)
        cout << "armstrong";
    else
        cout << "not armstrong";
}