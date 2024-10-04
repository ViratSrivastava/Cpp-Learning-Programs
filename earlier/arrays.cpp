#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int num[n];
    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
        cout << num[i] << endl;
    }
    return 0;
}