#include <iostream>
using namespace std;
int main ()
{
    int m, n;
    cin >> m >> n;
    int a[m], b[n];
    for (int i = 0; i < m; i++)
      cin >> a[i];
    for (int j = 0; j < n; j++)
      cin >> b[j];
    int i = 0, j = 0, cnt = 0, c[m + n];
    while (i < m && j < n)
    {
        if (a[i] <= b[j])
        {
            c[cnt++] = a[i];
            i++;
        }
        else 
        {
            c[cnt++] = b[j];
            j++;
        }
    }
    while (i < m)
        c[cnt++] = a[i++];
    while (j < n)
        c[cnt++] = b[j++];
    cout << "New array: \n";
    for (int i = 0; i < m + n; i++)
     cout << c[i] << " ";
    return 0;
}