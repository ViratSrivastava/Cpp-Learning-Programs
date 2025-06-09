#include <iostream>
using namespace std;
void printName(int i, int n)
{
    if (i > n)
    {
        return;
    }
    cout << "Virat" << endl;
    i++;
    printName(i, n);
}
int main()
{
     printName(0 , 10);
    return 0;
}