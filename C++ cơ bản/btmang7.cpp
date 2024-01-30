#include <bits/stdc++.h>
#include <math.h>
using namespace std;
const int mod = 1000000007;
int main ()
{
    cout << "So luong test case: ";
    int tc; cin >> tc;
    while (tc--)
    {
        int n, x; cin >> n >> x;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        long long lt = 1, res = 0;
        for (int i = n - 1; i >= 0; i--)
        {
           res += a[i] * lt;
           res %= mod;
           lt *= x;
           lt %= mod;
        }
       cout << res << endl;
    }
    return 0;
}