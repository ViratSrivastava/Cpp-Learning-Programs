#include <iostream>
/**
 * @file basic.cpp
 * @brief This program reads a 2D array from user input and prints it.
 * 
 * The program first reads the dimensions of the array (n and m) from the user.
 * It then reads the elements of the array from the user and stores them in a 2D array.
 * Finally, it prints the 2D array in a formatted manner.
 * 
 */

#include <iostream>
using namespace std;

int main()
{
    int n, m; // Dimensions of the 2D array
    cin >> n >> m; // Read dimensions from user input

    int A[n][m]; // Declare a 2D array with dimensions n x m

    // Read elements of the 2D array from user input
    for (auto& i : A)
    {
        for (auto& j : i)
        {
            cin >> j;
        }
    }

    // Print the 2D array in a formatted manner
    for (int i = 0; i < n; i++)
    {
        cout << "[";
        for (int j = 0; j < m; j++)
        {
            cout << A[i][j] << " ";
        }
        cout << "]";
        cout << endl;
    }

    return 0;
}