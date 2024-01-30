#include <bits/stdc++.h>
#include <set>
#include <map>
using namespace std;
int main ()
{
    map <int, int> mp;
    mp[200] = 300;
    mp[124] = 450;
    mp[260] = 300;
    mp[500] = 300;
    if (mp.find (100) != mp.end())
    {
        cout << "Found!" << endl;
    }
    else
    {
        cout << "Not Found!" << endl;
    }
}