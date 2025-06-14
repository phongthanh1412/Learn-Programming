#include <iostream>
#include <math.h>
#define max 20
using namespace std;

int main()
{
    int n = 0;
    cin >> n;
    int a[max][max];
    int h1 = 0, h2 = n - 1, c1 = 0, c2 = n - 1;
    int cnt = 1;
    while (h1 <= h2 && c1 <= c2)
    {
        for (int i = h2; i >= h1; i--)
        {
            a[i][c2] = cnt;
            ++cnt;
        }
        --c2;
        for (int i = c2; i >= c1; i--)
        {
            a[c1][i] = cnt;
            ++cnt;
        }
        ++h1;
        for (int i = h1; i <= h2; i++)
        {
            a[i][c1] = cnt;
            ++cnt;
        }
        ++c1;
        for (int i = c1; i <= c2; i++)
        {
            a[h2][i] = cnt;
            ++cnt;
        }
        --h2;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}