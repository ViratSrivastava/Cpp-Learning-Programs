#include <iostream>
using namespace std;

int main()
{
    int age;
    cin >> age;
    if (age > 18)
    {
        cout << "adult";
    }
    else if (age < 18 && age >= 10)
    {
        cout << "teen";
    }
    else
    {
        cout << "child";
    }
    return 0;
}