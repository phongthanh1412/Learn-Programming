#include <bits/stdc++.h>
#include <math.h>
using namespace std;
int cnt [1000001];
int main ()
{
    cout << "So luong test case: ";
    int tc; cin >> tc;
    while (tc--)
    {
        cout << "So luong phan tu trong mang: ";
        int n; cin >> n;
        int a[n];
        memset (cnt, 0, sizeof (cnt));
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            cnt[a[i]]++;
        }
        int ans = 0;
        for (int i = 0; i < n ; i++)
        {
            if (cnt[a[i]] >= 2) ++ans;
        }
        cout << ans << endl;
    }
    return 0;
}