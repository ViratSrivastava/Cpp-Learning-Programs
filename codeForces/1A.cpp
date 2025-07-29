#include <iostream>
using namespace std;
int main()
{
    long long n, m, a;
    cin >> n >> m >> a;
    long long sideN = (n + a - 1) / a;
    long long sideM = (m + a - 1) / a;
    cout << sideN * sideM << endl;
    return 0;
}