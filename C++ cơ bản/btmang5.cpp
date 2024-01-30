#include <bits/stdc++.h>
#include <math.h>
using namespace std;
int main ()
{
    cout << "So luong test case: ";
    int tc; cin >> tc;
    while (tc--)
    {
        cout << "So luong phan tu trong mang: ";
        int n; cin >> n;
        cout << "So gia tri lon nhat can in ra: ";
        int k; cin >> k;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort (a, a + n, greater <int> ());
        for (int i = 0; i < k; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}