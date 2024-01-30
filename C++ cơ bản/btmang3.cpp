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
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int res = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                res = min (res, max(arr[i], arr[j]) - min(arr[i], arr[j]));
            }
        }
        cout << res << endl;
    }
    return 0;
}