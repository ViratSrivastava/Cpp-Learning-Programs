#include <iostream>
using namespace std;
int main()
{
    int n, m, p, q;
    cin >> n >> m >> p >> q;
    if (m != p)
    {
        cout << "matrix multiplication not possible";
        exit(0);
    }
    int k = n;
    int l = q;
    int A[n][m];
    int B[p][q];
    int C[k][l];
    for (auto &i : A)
    {
        for (auto &j : i)
        {
            cin >> j;
        }
    }
    for (auto &i : B)
    {
        for (auto &j : i)
        {
            cin >> j;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            for (int k = 0; k < p; k++)
            {
                for (int l = 0; l < q; l++)
                {
                    C[k][l] += A[i][j] * B[p][q];
                }
            }
        }
    }
    cout << "resultant matrix is :" << endl;
    for (auto &i : C)
    {
        for (auto &j : i)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}