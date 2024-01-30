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
    for (auto x : mp)
    {
        cout << x.first << " " << x.second << endl;
    }
    if (mp.count (500) != 0)
    {
        cout << "KET QUA TIM KIEM: "<< "Found!\n";
    }
    else 
    {
        cout << "KET QUA TIM KIEM: "<< "Not Found!\n";
    }
    cout << "SO PHAN TU KHAC NHAU CUA MAP LA: " << endl;
    cout << mp.size () << endl;
    return 0;
}

