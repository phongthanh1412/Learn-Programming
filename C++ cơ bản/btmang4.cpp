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
        sort(arr, arr + n);
        int res = INT_MAX;
        for (int i = 1; i < n; i++)
        {
            res = min (res, arr[i] - arr[i - 1]);
        }
        cout << res << endl;
    }
    return 0;
}