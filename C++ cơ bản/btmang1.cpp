#include <bits/stdc++.h>
#include <math.h>
using namespace std;
int main ()
{
    cout << "So test case la: ";
    int tc; cin >> tc;
    while (tc--)
    {
        cout << "So luong phan tu trong mang: ";
        int n; cin >> n;
         map <long long, bool> mp;
    for (int i = 0; i < n; i++)
    {
        long long x; cin >> x;
        mp [x] = true;
    }
    for (int i = 0; i < n; i++)
    {
        if (mp[i])
        {
            cout << i << " ";
        }
        else cout << "-1 ";
    }
    cout << endl;
    }
   
    return 0;
}