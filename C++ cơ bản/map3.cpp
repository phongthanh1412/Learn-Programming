#include <bits/stdc++.h>
#include <set>
#include <map>
using namespace std;
int main ()
{
    map <int, int> mp;
    int n; cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x; cin >> x;
        mp [x]++;
    }
    for (auto x : mp)
    {
        cout << x.first << " " << x.second << endl;
    }
    return 0;
}