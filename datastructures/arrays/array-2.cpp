#include <iostream>
using namespace std;

int main()
{
    int A[10] = {12, 03, 56, 12, 32, 34, 45, 76, 56, 83};
    int B[] = {5, 36,45}; // lenght not declared
    
    for(int i = 0; i < 10; i++)
    {
        cout << B[i] << endl;
    }

    for(int x:B)
    {
        cout << x << endl;
    }
    float D[] = {12.5f, 03.6f, 56.0f, 12.0f, 3.2f, 3.4f, 4.5f, 7.6f, 5.6f, 8.0f}; // f is used to declare float
    for(float y: D)
    {
        cout << y << endl;
    }
    
    float G[] = {12.5f, 03.6f, 56.0f, 12.0, 3, 3.4f, 4.5f, 7.6f, 5.6f, 8.0f};
    for(auto y: G)  // auto is used to automatically detect the type of the array
    {
        cout << y << endl;
    }

    char C[] = {'A', 'B', 'C', 'D', 'E'};
    for (int x:C)
    {
        cout << x << endl;
        // prints ascii code of thr characters
    }
    return 0;
}